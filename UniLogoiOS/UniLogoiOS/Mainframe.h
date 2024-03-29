#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__

#include <map>

#include <wx/defs.h>
#include <wx/frame.h>
#include <wx/print.h>
#include <wx/filename.h>
#include <wx/socket.h>
#include "LocalizedStrings.h" // for MANUAL_HAS_TRANSLATION_TABLES
#include "CFileTextStream.h"

class wxSplitterWindow;
class wxCommandEvent;
class wxScrolledWindow;
class wxIcon;

class CCommander;
class CStatusDialog;
class CWorkspaceEditor;
class CSetPenSize;
class CScreen;
class CSetColor;

struct NODE;

class CMainFrame : public wxFrame
{
public:
    CMainFrame(
        int             ScreenWidth,
        int             ScreenHeight,
        const wxPoint & Position       = wxDefaultPosition,
        const wxSize  & Size           = wxDefaultSize,
        bool            StartMaximized = false
        );

    virtual ~CMainFrame();

    void UndockCommanderWindow();
    void DockCommanderWindow();
#ifdef _WINDOWS
    bool TranslateKeyboardShortcut(struct tagMSG & Message);
#endif
	wxString ModifyMenuTextForUnicode(wxString text, wxString suffix);

    void ShowStatus();
    void HideStatus();
    bool StatusDialogIsShowing();

    CCommander * GetCommander();
    wxWindow   * GetTopLevelWindowForCommander();
    CScreen    * GetScreen();

    bool IsEditorOpen() const;

    CWorkspaceEditor * GetWorkspaceEditor();

    void
    KeyboardNavigateTopLevelWindow(
        wxWindow * CurrentWindowFocus,
        int        DirectionFlags
        );

    wxString
    PromptUserForInput(
        const wchar_t * Prompt
        );

    void
    PopupEditor(
        const wxString & FileName,
        NODE           * EditArguments,
        bool             CheckForErrors,
        bool             OpenToError
        );

    void
    PopupEditorToError(
        const wchar_t *FileName
        );

    static
    int
    PopupEditorForFile(
        const wxString & FileName,
        NODE           * EditArguments
        );

    void CloseWorkspaceEditor(CWorkspaceEditor * Editor);

    CStatusDialog * GetStatusDialog();
    void            ClearStatusDialog();

private:
#ifndef __WXOSX_IPHONE__
    // A private helper class for printing
    class CLogoPicturePrintout : public wxPrintout
    {
    public:
        CLogoPicturePrintout(
            const wxString        & Title,
            wxWindow              & Screen,
            wxPageSetupDialogData & PageSetup
            );

        bool OnPrintPage(int Page);
        bool HasPage(int Page);

        void
        GetPageInfo(
            int *MinPage,
            int *MaxPage,
            int *SelPageFrom,
            int *SelPageTo
            );

    private:
        wxWindow              & m_Screen;
        wxPageSetupDialogData & m_PageSetup;
    };
#endif
    // Menu commands handlers
    void OnFileNew(wxCommandEvent& Event);
    void OnFileLoad(wxCommandEvent& Event);
    void OnFileOpen(wxCommandEvent& Event);
    void OnFileSave(wxCommandEvent& Event);
	void OnFileSaveAs(wxCommandEvent& Event);
	void OnFileSaveAsUTF8(wxCommandEvent& Event);
	void OnFileSaveAsUTF16(wxCommandEvent& Event);
	void OnFileSetAsScreenSaver(wxCommandEvent& Event);
    void OnUpdateFileSetAsScreenSaver(wxUpdateUIEvent& Event);
    void OnEditProcedure(wxCommandEvent& Event);
    void OnEraseProcedure(wxCommandEvent& Event);
    void OnExit(wxCommandEvent& Event);
    void OnBitmapNew(wxCommandEvent& Event);
    void OnBitmapOpen(wxCommandEvent& Event);
    void OnBitmapSave(wxCommandEvent& Event);
    void OnBitmapSaveAs(wxCommandEvent& Event);
    void OnBitmapPrint(wxCommandEvent& Event);
    void OnBitmapPrinterSetup(wxCommandEvent& Event);
    void OnSetLabelFont(wxCommandEvent& Event);
    void OnSetCommanderFont(wxCommandEvent& Event);
    void OnSetActiveArea(wxCommandEvent& Event);
    void OnSetPenSize(wxCommandEvent& Event);
    void OnSetPenColor(wxCommandEvent& Event);
    void OnSetFloodColor(wxCommandEvent& Event);
    void OnSetScreenColor(wxCommandEvent& Event);
    void OnZoomIn(wxCommandEvent& Event);
    void OnZoomOut(wxCommandEvent& Event);
    void OnZoomNormal(wxCommandEvent& Event);
    void OnHelp(wxCommandEvent& Event);
#if MANUAL_HAS_TRANSLATION_TABLES
    void OnHelpLanguageToEnglish(wxCommandEvent& Event);
    void OnHelpEnglishToLanguage(wxCommandEvent& Event);
#endif
    void OnHelpTutorial(wxCommandEvent& Event);
    void OnHelpDemo(wxCommandEvent& Event);
    void OnHelpExamples(wxCommandEvent& Event);
    void OnHelpReleaseNotes(wxCommandEvent& Event);
    void OnAboutUniLogo(wxCommandEvent& Event);

    void OnResize(wxSizeEvent& Event);
    void OnClose(wxCloseEvent& Event);
    void OnSetCursor(wxSetCursorEvent& Event);


	void OnSocketServerAcceptEvent(wxSocketEvent& event);
	void OnSocketServerInputOutputEvent(wxSocketEvent& event);
	void OnSocketClientEvent(wxSocketEvent& event);

#ifdef _WINDOWS
    virtual WXLRESULT MSWWindowProc(
        WXUINT   Message,
        WXWPARAM WParam,
        WXLPARAM LParam
        );
#endif

    // Private helper functions
    void PostCheckQueueMessage();

    CWorkspaceEditor *
    CreateWorkspaceEditor(
        const wxString & FileName,
        NODE           * EditArguments,
        bool             CheckForErrors,
        bool             OpenToError
        );

    void SetSashPosition(int position);

    void
    SetColorHelper(
        CSetColor * &   SetColorDialog,
        const wchar_t *    DialogTitle,
        wxUint32        InitialColor,
        const wchar_t *    LogoCommand
        );

    bool WarnIfSavingEmptyWorkspace();
    bool DoFileSave(FileTextStreamType FTT);
    bool SaveFile(FileTextStreamType FTT);
    bool DoFileSaveAs(FileTextStreamType FTT);
    bool CanClose();

    void SaveBitmap();
    void SaveBitmapAs();

    void
    OpenFileWithDefaultApplication(
        const wchar_t * FileName
        );

    void ResizeToFitScreen();
    void InitializePrinter();

    // Member variables
    CScreen          * m_Screen;
    wxWindow         * m_Commander;
    CCommander       * m_RealCommander;
    CStatusDialog    * m_StatusDialog;
    CSetPenSize      * m_SetPenSizeDialog;
    wxSplitterWindow * m_Splitter;

    const int m_OriginalWidth;
    const int m_OriginalHeight;

    bool  m_CommanderIsDocked;
    bool  m_IsNewFile;
    bool  m_IsNewBitmap;
#ifndef __WXOSX_IPHONE__
    // m_PageSetupData stores printer preferences across printouts.
    wxPageSetupDialogData m_PageSetupData;
#endif
    // The file name of the most recently loaded/saved file.
    // This is used to suggest a name when loading/saving the next file.
    wxFileName m_LastLoadedLogoFile;
    wxFileName m_LastLoadedBitmapFile;

    CSetColor * m_SetPenColorDialog;
    CSetColor * m_SetFloodColorDialog;
    CSetColor * m_SetScreenColorDialog;

    // REVISIT: should this be std::set?
    std::map<CWorkspaceEditor*,CWorkspaceEditor*> m_Editors;
	FileTextStreamType FTT;

    DECLARE_EVENT_TABLE();
    DECLARE_NO_COPY_CLASS(CMainFrame);
};
#endif
