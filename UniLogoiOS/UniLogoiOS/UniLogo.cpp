#include "PCH.h"

#ifndef USE_PRECOMPILED_HEADER
#include "UniLogo.h"

#include <algorithm>

#include <wx/msgdlg.h>
#include <wx/filename.h>
#include <wx/string.h>
#include <wx/dcclient.h>
#include <wx/dcmemory.h>
#include <wx/clipbrd.h>
#include <wx/gdicmn.h> 
#include <wx/settings.h>
#include <wx/stdpaths.h>

#ifdef __WXMSW__
#include "wx/msw/private.h"
#endif

#include "Init.h"
#include "LocalizedStrings.h"
#include "LogoCore.h" // for ARRAYSIZE
#include "Mainframe.h"
#include "Graphwin.h"
#include "Error.h"
#include "WorkSpace.h"
#include "Startup.h"
#include "Utils.h"
#include "MM.h"
#include "Files.h"
#include "MainWindow.h"
#include "Cursor.h"
#include "LogoEventQueue.h"
#include "Eval.h"
#include "Print.h"
#include "ScreenWindow.h"
#include "WorkSpaceEditor.h"
#include "MiniEditor.h"
#include "DynamicBuffer.h"
#include "StringPrintedNode.h"
#include "StringAdapter.h"

#include "Screen.h"
#include "Commander.h"
#include "Resource.h"
#endif
#include <locale.h>
#include "CMbcsFileTextStream.h"
#include "IBMTerm.h"
#ifdef __APPLE__
#include "GetLocale.h"
#endif

// global variables declared in main.h
wxString edit_editexit;     // editor callback instruction list 

int  BitMapWidth = 1024;
int  BitMapHeight = 1024;
bool bFixed = false;

#ifdef _WINDOWS
static HANDLE g_SingleInstanceMutex = NULL;
#endif

static wxString g_FileToLoad; // routine to exec on start
static bool g_EnterPerspectiveMode = false;
static bool g_CustomWidth = false;
static bool g_CustomHeight = false;

#ifdef MEM_DEBUG
#ifdef __WXMSW__
typedef DWORD(WINAPI *GETGUIRESOURCES)(HANDLE, DWORD);

static GETGUIRESOURCES g_GetGuiResources = NULL;
static DWORD           g_OriginalGuiObjects = 0;
static DWORD           g_OriginalUserObjects = 0;
static HANDLE          g_Unilogo = NULL;
static HMODULE         g_User32 = NULL;
#endif // __WXMSW__
#endif // MEM_DEBUG


////////////////////////////////////////////////////////////////////
// CUniLogo
IMPLEMENT_APP(CUniLogo)

CUniLogo::CUniLogo()
	: hasLoadedFileToLoad(false)
	, hasRunStartup(false)
{
}

// Read an integer command-line argument, given as either "-W500" or "-W 500".
//
// CurrentArgument - A pointer in a string just after the switch,
//                   to where the number should begin.
//
// NextArgument    - A reference to an pointer in varg.
//                   This is incremented to the next argument if
//                   the switch is given in the form "-W 500".

static int ReadIntArgument(
	const wxString&    CurrentArgument,
	const wxString&    NextArgument
)
{
	wchar_t* endptr = 0;

    unsigned long numericValue = 0;

	if (CurrentArgument.length() > 2)
	{
		// The command-line was given as "-w500".
		numericValue = wcstoul((const wchar_t*)CurrentArgument, &endptr, 10);
	}
	else
	{
		// The -w isn't immediately followed by a number.
		// Try to get the next argument, as in "-w 500".
		if (NextArgument.length() > 0)
		{
			// There was an argument following the -W.
			numericValue = wcstoul(NextArgument, NULL, 10);
		}
		else
		{
			// The command-line ends in something like "-w".
			// In MSWLogo, the width would have silently been 
			// taken to be 0.

			// Since this results in an unusable workspace, we
			// now warn user of their mistake.
			wxMessageBox(
				CurrentArgument,
				GetResourceString(L"LOCALIZED_ERROR_BADCOMMANDLINE"),
				wxOK | wxICON_INFORMATION);

			numericValue = 0;
		}
	}

	return (int)numericValue;
}

wxString CUniLogo::ProcessCommandLine(wxString lang)
{
	// parse the command-line parameters
	bExpert = false;
	g_CustomWidth = false;
	g_CustomHeight = false;
	bFixed = false;

	// For processing the -L parameter
	bool   copyRemaingArgsAsFilename = false;
	size_t fileToLoadIndex = 0;

	const wxArrayString & realArgv = argv.GetArguments();
	size_t argvSize = realArgv.GetCount();

	//skip self path
	for (size_t i = 1; i < argvSize; i++) {
		const wxString& a = realArgv[i];
		const wxString& next = i < argvSize - 1 ? realArgv[i + 1] : wxString();
		if (!copyRemaingArgsAsFilename) {
			if (a.length() > 0) {
				if (a[0] == L'-' && a.length() > 1) {
					switch ((wchar_t)a[1]) {
					case L'c':
					case L'C':
						if (a.length() > 2)
						{
							lang = a.substr(2);
						}
						else if (next.length() > 0) {
							lang = next;
						}
						break;
					case L'p':
					case L'P':
						g_EnterPerspectiveMode = true;
						break;

					case L'e':
					case L'E':
						bExpert = true;
						break;

					case L'f':
					case L'F':
						bFixed = true;
						break;

					case L'h':
					case L'H':
						BitMapHeight = ReadIntArgument(a, next);
						g_CustomHeight = true;
						break;

					case L'w':
					case L'W':
						BitMapWidth = ReadIntArgument(a, next);
						g_CustomWidth = true;
						break;

					case L'l':
					case L'L':
						// the rest of the arguments should be taken as part of a filename
						copyRemaingArgsAsFilename = true;
						break;

					default:
						// invalid command line: unrecognized switch
						wxMessageBox(
							a,
							GetResourceString(L"LOCALIZED_ERROR_BADCOMMANDLINE"),
							wxOK | wxICON_INFORMATION);

						break;
					}
				}
			}
		}
		else
		{
			if (fileToLoadIndex != 0)
			{
				g_FileToLoad += L' ';
			}
			g_FileToLoad += a;

			fileToLoadIndex += a.length();
		}
	}
	return lang;
}

void CUniLogo::LoadLocalizedStringFile(const wxString& lang)
{
	wxString name;
    wxString lc;
#ifdef __APPLE__
    lc = GetMacOSXLocale();
#else
	//has to be LC_ALL to make it work on windows
	lc = wxSetlocale(
#ifdef _WINDOWS
        LC_ALL
#else
        LC_CTYPE
#endif
        , (const char*)lang);
#endif
	//lang = "":USE SYSTEM LOCALE (for mbtowc)
	name = GetShortNameForLanguage(lc,N_LOCALIZED_STRINGS_FILE_EN);
    
    CFileTextStream::SystemEncoding = GetEncodingForLanguage(name);
    
	wxString path = g_UnilogoBaseDirectory +
#ifdef __APPLE__
    L"../Resources/" +
#endif
    N_LOCALIZED_STRINGS_FILE_START + name + N_LOCALIZED_STRINGS_FILE_END;

	if (wxFileExists(path)) 
    {
        //Try load file first
		LoadLocalizedStringsFromFile(path);
	}
	else
	{
		LoadLocalizedStringsFromResource(name);
	}
}

bool CUniLogo::OnInit()
{
	bool rval = true;

	// Figure out the path that contains unilogo.exe, which we
	// assume also holds Logolib.
	const wxFileName unilogoExecutable(
		wxStandardPaths::Get().GetExecutablePath());
	const wxString & unilogoPath = unilogoExecutable.GetPath(
		wxPATH_GET_VOLUME | wxPATH_GET_SEPARATOR);

	g_UnilogoBaseDirectory = unilogoPath;

	this->LoadLocalizedStringFile(
		this->ProcessCommandLine(
			GetConfigurationString(L"locale", L"")
		));


	// Get video mode parameters
	init_videomode();

	srand((unsigned int)time(0));
    
	// alloc and init the bitmap cut array
	init_bitmaps();

	// alloc and init the turtles array
	init_turtles();

	// init global pen state
	init_penstate();

	// init logo kernel
	init();

	// initialize the hourglass and arrow cursors
	init_cursors();

	// determine how big a window we would like
	int x = 0;
	int y = 0;
	int w = BitMapWidth + 120;
	int h = BitMapHeight+ 120;

	// The main window should not exceed the size of the working area
	int maxWidth = 0;
	int maxHeight = 0;
	wxClientDisplayRect(NULL, NULL, &maxWidth, &maxHeight);

	// if fixed mode
	bool startMaximized;
	if (bFixed)
	{
		// UniLogo was started with -F on the command-line.  In this case,
		// CMainFrame ignores the window size parameter (width and height)
		// and instead resizes itself to ensure that there is enough space
		// for the bitmap's width/height.  Therefore, this code block only
		// computes correct values for BitMapWidth and BitMapHeight, not
		// w and h.

		// If "-F" is given without "-W" or "-H", then UniLogo should
		// start maximized.  This ensures the UniLogo uses the most
		// amount of space available to it.
		startMaximized = !g_CustomHeight && !g_CustomWidth;

		// Reduce the maximum width available to the virtual service
		// that is taken up by the 3D border between the frame and the
		// screen.
		int borderWidth = wxSystemSettings::GetMetric(wxSYS_EDGE_X);
		if (borderWidth != -1)
		{
			maxWidth -= 2 * borderWidth;
		}

		// When an application is not maximized, it has a frame that reduces
		// the amount of space available to the window.
		// CMainFrame uses wxDEFAULT_FRAME_STYLE, which includes
		// wxRESIZE_BORDER.  In wx/toplevel.h, this is #define'd to be the
		// same as wxTHICK_FRAME, which is what wxSYS_FRAMESIZE_X returns.
		if (!startMaximized)
		{
			int frameWidth = wxSystemSettings::GetMetric(wxSYS_FRAMESIZE_X);
			if (frameWidth != -1)
			{
				maxWidth -= 2 * frameWidth;
			}
		}

		if (g_CustomHeight)
		{
			// if height specified sanitize it against screen height
			BitMapHeight = std::min(h, maxHeight);
		}
		else
		{
			// Go "full screen", leaving space for the commander.
			BitMapHeight = (int)(maxHeight * ScreenSz);
		}

		if (g_CustomWidth)
		{
			// if width specified sanitize it against screen width
			BitMapWidth = std::min(w, maxWidth);
		}
		else
		{
			// Use the full width available to a window with a frame.
			BitMapWidth = maxWidth;
		}
	}
	else
	{
		// sanitize window size we would like against screen size
		w = std::min(w, maxWidth);
		h = std::min(h, (int)(maxHeight * ScreenSz));

		GetConfigurationQuadruple(L"Screen", x, y, w, h);

		// the smallest reasonable size is 400 x 400.
		h = std::max(h, 480);
		w = std::max(w, 640);

		// sanitize against screen size
		checkwindow(&x, &y, &w, &h);

		// Don't normally start maximized.
		startMaximized = false;
	}

	// initialize the values for some of the graphics-related
	// global variables.
	init_graphics();


    // create and show the main frame
	CMainFrame * frame = new CMainFrame(
		BitMapWidth,
		BitMapHeight,
		wxPoint(x, y),
		wxSize(w, h),
		startMaximized);
	init_timers();

	frame->Show();

	return rval;
}

int CUniLogo::OnExit()
{
	// cleanup all subsystems
	uninit();

	uninit_bitmaps();

	uninit_turtles();

	uninit_graphics();
#ifndef __WXOSX_IPHONE__
	// release the Help subsystem
	HtmlHelpUninitialize();
#endif
#ifdef _WINDOWS
	CloseHandle(g_SingleInstanceMutex);
	g_SingleInstanceMutex = NULL;
#endif

#if wxUSE_CLIPBOARD
	// wxWidgets clears the clipboard when it exits, presumably to save memory.
	// To me, this behavior is unintuitative and confusing, as it's something
	// that Windows applications typically don't do.  To avoid this, we "flush"
	// the clipboard, which means only that if the clipboard's data came from
	// UniLogo, it will continue to be available after UniLogo exits.
	wxClipboard::Get()->Flush();
#endif

	return wxApp::OnExit();
}

CMainFrame * CUniLogo::GetMainFrame()
{
	return static_cast<CMainFrame*>(wxTheApp->GetTopWindow());
}

void CUniLogo::OnIdle(wxIdleEvent & IdleEvent)
{
	size_t guard = 0;

    guard=guard;

	// If -P was specified on the command line, enter perspective mode.
	if (g_EnterPerspectiveMode)
	{
		g_EnterPerspectiveMode = false;
		lperspective(NIL);
	}


	// run the script that localizes UniLogo
	if (!this->hasRunStartup)
	{
		this->hasRunStartup = true;
		wxString stsc = g_UnilogoBaseDirectory +
#ifdef __APPLE__
        L"../Resources/" +
#endif
        L"startup.logoscript";
		silent_load(NIL, stsc);
	}

	// If a file to load was given on the command line, then execute it.
	if (!this->hasLoadedFileToLoad && g_FileToLoad.length() > 0)
	{
		// Set that we have loaded the file before we actually do
		// in case loading the file causes and idle event to be sent
		// and re-executes this function.
		this->hasLoadedFileToLoad = true;
		silent_load(NIL, g_FileToLoad);
	}

	// Process logo events
	checkqueue();

	// Continue with the default processing
	IdleEvent.Skip();

}

void single_step_box(NODE * the_line)
{
	// Print the line into a buffer, honoring the current printing limits
	CStringPrintedNode printedLine(the_line, CStringPrintedNode::PRINTLIMITSPECIFIER::WithPrintLimits);

	// pop up single step box showing line of code
	if (wxMessageBox(
		printedLine,
		GetResourceString(L"LOCALIZED_STEPPING"),
		wxOK | wxCANCEL) == wxCANCEL)
	{
		if (stepflag)
		{
			// Act like someone pressed the "UnStep" button
			CUniLogo::GetMainFrame()->GetCommander()->ToggleStep();
		}
		else
		{
			err_logo(ERR_TYPES::STOP_ERROR, NIL);
		}
	}
}

wxString promptuser(const wchar_t *prompt)
{
	return CUniLogo::GetMainFrame()->PromptUserForInput(prompt);
}

wxWindow * GetParentWindowForDialog()
{
	return CUniLogo::GetMainFrame()->GetCommander();
}

#ifdef _WINDOWS
HWND GetScreenWindow()
{
	CMainFrame* mainFrame = CUniLogo::GetMainFrame();
	assert(mainFrame != NULL);
	return reinterpret_cast<HWND>(mainFrame->GetScreen()->GetHandle());
}

HWND GetMainWindow()
{
	CMainFrame* mainFrame = CUniLogo::GetMainFrame();
	assert(mainFrame != NULL);
	return static_cast<HWND>(mainFrame->GetHandle());
}

HWND GetCommanderWindow()
{
	CMainFrame* mainFrame = CUniLogo::GetMainFrame();
	assert(mainFrame != NULL);
	return reinterpret_cast<HWND>(mainFrame->GetTopLevelWindowForCommander()->GetHandle());
}
#endif

wxWindow * GetMainWxWindow() {
	return CUniLogo::GetMainFrame();
}

wxWindow * GetScreenWxWindow() {
	return CUniLogo::GetMainFrame()->GetScreen();
}

wxWindow * GetEditorWxWindow()
{
	return CUniLogo::GetMainFrame()->GetWorkspaceEditor();
}

int GetScreenHorizontalScrollPosition()
{
	return CUniLogo::GetMainFrame()->GetScreen()->GetScrollPos(wxHORIZONTAL);
}

int GetScreenVerticalScrollPosition()
{
	return CUniLogo::GetMainFrame()->GetScreen()->GetScrollPos(wxVERTICAL);
}

void SetScreenScrollPosition(int X, int Y)
{
	CUniLogo::GetMainFrame()->GetScreen()->Scroll(X, Y);
}

bool IsEditorOpen()
{
	CMainFrame* mainFrame = CUniLogo::GetMainFrame();

	if (mainFrame == NULL)
	{
		return false;
	}

	return mainFrame->IsEditorOpen();
}

void OpenEditorToLocationOfFirstError(const wchar_t *FileName)
{
	CUniLogo::GetMainFrame()->PopupEditorToError(FileName);
}

#ifdef _WINDOWS
HDC GetScreenDeviceContext()
{
	CMainFrame* mainFrame = CUniLogo::GetMainFrame();
	return static_cast<HDC>(mainFrame->GetScreen()->GetScreenDeviceContext().GetHDC());
}

HDC GetMemoryDeviceContext()
{
	return static_cast<HDC>(GetWxMemoryDeviceContext()->GetHDC());
}

#endif

wxDC * GetWxMemoryDeviceContext()
{
	return &CUniLogo::GetMainFrame()->GetScreen()->GetMemoryDeviceContext();
}

wxDC * GetWxScreenDeviceContext()
{
	return &CUniLogo::GetMainFrame()->GetScreen()->GetScreenDeviceContext();
}

wxDC * GetBackBufferDeviceContext()
{
	return &CUniLogo::GetMainFrame()->GetScreen()->GetBackBufferDeviceContext();
}

void OpenStatusWindow()
{
	CMainFrame * mainFrame = CUniLogo::GetMainFrame();
	mainFrame->ShowStatus();
	mainFrame->GetCommander()->UpdateStatusButtonState();
}

void UpdateUiExecutionState()
{
	// Enable/Disable the Halt/Pause buttons according to the execution state.
	CUniLogo::GetMainFrame()->GetCommander()->UpdateHaltButtonState();
	CUniLogo::GetMainFrame()->GetCommander()->UpdatePauseButtonState();
}

CStatusDialog * GetStatusDialog()
{
	CStatusDialog * statusDialog = CUniLogo::GetMainFrame()->GetStatusDialog();
	assert(statusDialog != NULL);
	return statusDialog;
}

void CloseStatusWindow()
{
	CMainFrame * mainFrame = CUniLogo::GetMainFrame();
	mainFrame->HideStatus();
	mainFrame->GetCommander()->UpdateStatusButtonState();
}

void AdjustScrollPositionToZoomFactor(FLONUM NewZoomFactor)
{
	CMainFrame * mainFrame = CUniLogo::GetMainFrame();
	mainFrame->GetScreen()->AdjustScrollPositionToZoomFactor(NewZoomFactor);
}

void UndockCommanderWindow()
{
	CUniLogo::GetMainFrame()->UndockCommanderWindow();
}

void DockCommanderWindow()
{
	CUniLogo::GetMainFrame()->DockCommanderWindow();
}
#ifndef _WINDOWS

void uninitialize_dlls()
{
}

#endif

#ifdef _WINDOWS
#ifdef __WXMSW__
bool TranslateKeyboardShortcut(MSG & Message)
{
	return CUniLogo::GetMainFrame()->TranslateKeyboardShortcut(Message);
}
#endif
#endif

int ShowEditorForFile(const wchar_t *FileName, NODE * EditArguments)
{
	return CMainFrame::PopupEditorForFile(FileName, EditArguments);
}

void ShowProcedureMiniEditor(const wxString& ToLine,CDynamicBuffer & ReadBuffer)
{
	CMiniEditor miniEditor(CUniLogo::GetMainFrame(), ToLine);

	if (wxID_OK != miniEditor.ShowModal())
	{
		// The user cancelled the definition
		err_logo(ERR_TYPES::STOP_ERROR, NIL);
	}
	else
	{
		// copy the new definition into the read buffer.
		bool haveCarriageReturn = false;
		const wxString & body = miniEditor.GetProcedureBody();
		for (wxString::const_iterator i = body.begin(); i != body.end(); ++i)
		{
			if (haveCarriageReturn && *i != '\n')
			{
				// The carriage return was not followed by a newline,
				// so it was not part of an EOL sequence.
				ReadBuffer.AppendChar('\r');
			}
			if (*i == '\r')
			{
				// Delay writing the CR in case the next character is an LF.
				// This will map the CRLF into the UNIX EOL sequence.
				haveCarriageReturn = true;
				continue;
			}

			// BUG: On Unicode builds, this has data loss because it
			// converts a wchar_t to a char.
			ReadBuffer.AppendChar(*i);
			haveCarriageReturn = false;
		}

		ReadBuffer.AppendChar(L'\n');
		ReadBuffer.AppendString(End.GetName());
	}
}

void TraceOutput(const wchar_t * FormatString,...)
{
	wxString message;
	// Format and print the message to stderr
	va_list args;
	va_start(args, FormatString);
	message = wxString::FormatV(FormatString, args);
	//vfwprintf(stderr, FormatString, args);
	va_end(args);

#ifdef __WXMSW__
	OutputDebugString(message);
#endif
}


BEGIN_EVENT_TABLE(CUniLogo, wxApp)
EVT_IDLE(CUniLogo::OnIdle)
END_EVENT_TABLE()
