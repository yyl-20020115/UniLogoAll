#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
    #include <wx/menu.h>
    #include <wx/fontdlg.h>
    #include <wx/msgdlg.h>
    #include <wx/sizer.h>

    #include "WorkSpaceEditor.h"
    #include "LogoCodeCtrl.h"
    #include "LocalizedStrings.h"
    #include "GuiUtils.h"
    #include "FontUtils.h"
    #include "UniLogo.h"
    #include "Mainframe.h"
    #include "LogoEventQueue.h"
    #include "Utils.h"
    #include "LogoCore.h"     // for ARRAYSIZE
    #include "WorkSpace.h"        // for bExpert
    #include "ScreenWindow.h" // for TraceOutput
    #include "Eval.h"         // for process_special_conditions
    #include "Startup.h"      // for TempPathName
    #include "Commander.h"    // for putcombobox
    #include "Graphwin.h"     // for do_help
    #include "HelpUtils.h"    // for ContextHelp
    #include "StringAdapter.h"
    #include "Print.h"
#endif

enum class CKID : int
{
    KEY_CODE_CLOSE_BRACKET = 0xDD,
};

enum class CMID : int
{
    ID_FILESAVEANDEXIT = wxID_HIGHEST,
    ID_FILESAVETOWORKSPACE,
    ID_SEARCHFINDNEXT,
    ID_EDITSETFONT,
    ID_TESTRUNSELECTION,
    ID_HELP,
    ID_HELPEDIT,

    ID_LOGOCODECONTROL,

    ID_FINDMATCHINGPAREN,
    ID_SELECTMATCHINGPAREN,
    ID_AUTOCOMPLETE,

    ID_NEXT_WINDOW,
};

// The workspace frame's constructor
CWorkspaceEditor::CWorkspaceEditor(
    wxWindow       * Parent,
    const wxString & Title,
    const wxPoint  & Position,
    const wxSize   & Size,
    const wxString & FileName,
    NODE           * EditArguments,   // consumes a reference
    bool             CheckForErrors,
    bool             OpenToError
    )
    : wxFrame(
        Parent,
        wxID_ANY, 
        Title,
        Position,
        Size,
        wxDEFAULT_FRAME_STYLE | wxFRAME_NO_TASKBAR | wxFRAME_FLOAT_ON_PARENT),
    m_LogoCodeControl(NULL),
#ifndef __WXOSX_IPHONE__
    m_FindReplaceDialog(NULL),
#endif
    m_FileName(FileName),
    m_EditArguments(EditArguments),
    m_CheckForErrors(CheckForErrors),
    m_ErrorDetected(false),
	FTT(FileTextStreamType::MBCS)
{
#ifndef __APPLE__
    SetUniLogoIcon(*this);
#endif
    
    m_LogoCodeControl = new CLogoCodeCtrl(this, (int)CMID::ID_LOGOCODECONTROL);
 
    // Make sure that the Logo code edit control expands
    // to fill all available space
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    sizer->Add(m_LogoCodeControl, 1, wxEXPAND);
    SetSizer(sizer);
#ifndef __WXOSX_IPHONE__
    //
    // Construct the main menu
    //
    static const MENUITEM defaultFileMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_SAVEANDEXIT"),     (int)CMID::ID_FILESAVEANDEXIT},
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_PRINT"),           wxID_PRINT},
        {L"",0},
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_EXIT"),            wxID_EXIT},
    };

    static const MENUITEM expertFileMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_SAVEANDEXIT"),     (int)CMID::ID_FILESAVEANDEXIT},
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_SAVETOWORKSPACE"), (int)CMID::ID_FILESAVETOWORKSPACE},
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_PRINT"),           wxID_PRINT},
        {L"",0},
        {GetResourceString(L"LOCALIZED_EDITOR_FILE_EXIT"),            wxID_EXIT},
    };

    static const MENUITEM editMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_UNDO"),      wxID_UNDO},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_REDO"),      wxID_REDO},
        {L"",0},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_CUT"),       wxID_CUT},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_COPY"),      wxID_COPY},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_PASTE"),     wxID_PASTE},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_DELETE"),    wxID_DELETE},
        {L"",0},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_CLEARALL"),  wxID_CLEAR},
        {GetResourceString(L"LOCALIZED_EDITOR_EDIT_SELECTALL"), wxID_SELECTALL},
    };

    static const MENUITEM searchMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_SEARCH_FIND"),    wxID_FIND},
        {GetResourceString(L"LOCALIZED_EDITOR_SEARCH_REPLACE"), wxID_REPLACE},
        {GetResourceString(L"LOCALIZED_EDITOR_SEARCH_NEXT"),    (int)CMID::ID_SEARCHFINDNEXT},
    };

    static const MENUITEM setMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_SET_FONT"),       (int)CMID::ID_EDITSETFONT},
    };

    static const MENUITEM testMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_TEST_RUN_SELECTION"), (int)CMID::ID_TESTRUNSELECTION},
    };
 
    static const MENUITEM helpMenuItems[] = {
        {GetResourceString(L"LOCALIZED_EDITOR_HELP_INDEX"),       (int)CMID::ID_HELP},
        {GetResourceString(L"LOCALIZED_EDITOR_HELP_EDITOR"),      (int)CMID::ID_HELPEDIT},
        {GetResourceString(L"LOCALIZED_EDITOR_HELP_TOPICSEARCH"), wxID_HELP_INDEX},
    };

    wxMenuBar * mainMenu = new wxMenuBar;

    if (bExpert)
    {
        AppendChildMenu(
            mainMenu, 
			GetResourceString(L"LOCALIZED_EDITOR_FILE"),
            expertFileMenuItems,
            ARRAYSIZE(expertFileMenuItems));
    }
    else
    {
        AppendChildMenu(
            mainMenu, 
			GetResourceString(L"LOCALIZED_EDITOR_FILE"),
            defaultFileMenuItems,
            ARRAYSIZE(defaultFileMenuItems));
    }
    AppendChildMenu(mainMenu, GetResourceString(L"LOCALIZED_EDITOR_EDIT"),   editMenuItems,   ARRAYSIZE(editMenuItems));
    AppendChildMenu(mainMenu, GetResourceString(L"LOCALIZED_EDITOR_SEARCH"), searchMenuItems, ARRAYSIZE(searchMenuItems));
    AppendChildMenu(mainMenu, GetResourceString(L"LOCALIZED_EDITOR_SET"),    setMenuItems,    ARRAYSIZE(setMenuItems));
    AppendChildMenu(mainMenu, GetResourceString(L"LOCALIZED_EDITOR_TEST"),   testMenuItems,   ARRAYSIZE(testMenuItems));
    AppendChildMenu(mainMenu, GetResourceString(L"LOCALIZED_EDITOR_HELP"),   helpMenuItems,   ARRAYSIZE(helpMenuItems));


    SetMenuBar(mainMenu);
#endif
    // set the font
    wxFont font;
    font.SetFamily(wxFONTFAMILY_TELETYPE);
    GetConfigurationFont(L"EditFont", font);
    m_LogoCodeControl->SetFont(font);

    // Configure the keyboard shortcuts
    wxAcceleratorEntry acceleratorEntries[4];

    // Ctrl+] moves to matching paren
    acceleratorEntries[0].Set(
        wxACCEL_CTRL,
        (int)CKID::KEY_CODE_CLOSE_BRACKET,
        (int)CMID::ID_FINDMATCHINGPAREN);

    // Ctrl+Shift+] selects to matching paren
    acceleratorEntries[1].Set(
        wxACCEL_CTRL | wxACCEL_SHIFT,
        (int)CKID::KEY_CODE_CLOSE_BRACKET,
        (int)CMID::ID_SELECTMATCHINGPAREN);

    // Ctrl+Tab navigates to the next window.
    acceleratorEntries[2].Set(
        wxACCEL_CTRL,
        WXK_TAB,
        (int)CMID::ID_NEXT_WINDOW);

    // Ctrl+Enter starts auto-complete
    acceleratorEntries[3].Set(
        wxACCEL_CTRL,
        WXK_SPACE,
        (int)CMID::ID_AUTOCOMPLETE);

    wxAcceleratorTable acceleratorTable(
        ARRAYSIZE(acceleratorEntries),
        acceleratorEntries);
    SetAcceleratorTable(acceleratorTable);

    SetFileName(FileName);
    if (!FileName.IsEmpty())
    {
        if (!Read())
        {
            // We couldn't read the file into the editor,
            // so unset the filename.
            SetFileName(wxEmptyString);
        }
    }

    // make sure that the editor is visible
    Iconize(false);
    Show();
    Raise();

    if (OpenToError)
    {
        m_LogoCodeControl->ReopenAfterError();
    }
}

#ifdef _WINDOWS
bool CWorkspaceEditor::TranslateKeyboardShortcut(WXMSG * Message)
{
    return MSWDoTranslateMessage(this, Message);
}
#endif

void CWorkspaceEditor::OnSetFont(wxCommandEvent& WXUNUSED(Event))
{
    wxFont font;

    font.SetFamily(wxFONTFAMILY_TELETYPE);
    GetConfigurationFont(L"EditFont", font);
#ifndef __WXOSX_IPHONE__
    wxFontDialog fontChooser;
    fontChooser.GetFontData().SetInitialFont(font);

    // Disable color selection, since we colorize based on syntax.
    fontChooser.GetFontData().EnableEffects(false);

    int rval = fontChooser.ShowModal();
    if (rval == wxID_OK)
    {
        // the user selected a new font
        font = fontChooser.GetFontData().GetChosenFont();

        // use this font in the Rich Edit
        m_LogoCodeControl->SetFont(font);

        // Set this as the new default font
        SetConfigurationFont(L"EditFont", font);
    }
#endif
    
}

// Evaluates the contents of the editor as Logo code and sets the
// ErrorDetected flag if something went wrong.
bool CWorkspaceEditor::EndEdit()
{
    bool realsave = endedit();

    // check for errors
    m_ErrorDetected = process_special_conditions();

    return realsave;
}

//
// Saves the contents of the editor to the file currently being edited.
//
// returns true if the file was saved or if the contents were already saved.
//
bool CWorkspaceEditor::Save()
{
    if (!m_LogoCodeControl->IsDirty())
    {
        // The editor's contents are already in sync with
        // the workspace, so nothing needs to be done.
        return true;
    }

    // Save the contents.
    return Write();
}

// A helper routine for selecting a file to read from or write to.
const wxString CWorkspaceEditor::SelectFile(const wxString & GivenFileName) const
{
    if (!GivenFileName.IsEmpty())
    {
        // We were given a file name, so use it.
        return GivenFileName;
    }

    // The caller didn't supply a file name, so use the
    // file name that was supplied in the constructor.
    return m_FileName;
}

//
// sets the file name of the window and updates the caption
//
void CWorkspaceEditor::SetFileName(const wxString & NewFileName)
{
    m_FileName = NewFileName;

    const wxString newTitle = m_FileName.IsEmpty() ?
		wxString(L"(")+ GetResourceString(L"LOCALIZED_UNTITLED")+ L")" :
        m_FileName;

    const wxString & currentTitle = GetName();
    if (currentTitle.IsEmpty())
    {
        // The editor has no caption
        SetName(newTitle);
    }
    else
    {
        SetName(currentTitle + L" - " + newTitle);
    }
}


//
// Read the contents of a previously-specified file into the editor
//
bool CWorkspaceEditor::Read(const wxString & FileName)
{
    wxString fileName = SelectFile(FileName);
    if (fileName.IsEmpty())
    {
        // No file name was given.
        return false;
    }
#ifndef __WXOSX_IPHONE__
    m_LogoCodeControl->ClearAll();
    m_LogoCodeControl->EmptyUndoBuffer();
    m_LogoCodeControl->SetSavePoint();
    m_LogoCodeControl->Cancel();
    m_LogoCodeControl->SetUndoCollection(0);
#endif
    bool success = false;

	CFileTextStream* cfts = CFileTextStream::OpenForRead(fileName, true);
	if (cfts != 0)
	{
		this->FTT = cfts->GetStreamType();

		success = true;

		m_LogoCodeControl->AppendText(cfts->ReadAll());

		delete cfts;
	}
	m_LogoCodeControl->SetFocus();
#ifndef __WXOSX_IPHONE__
    m_LogoCodeControl->SetUndoCollection(true);
    m_LogoCodeControl->EmptyUndoBuffer();
    m_LogoCodeControl->SetSavePoint();
    m_LogoCodeControl->GotoPos(0);
#endif
    if (!success)
    {
        // Something when wrong when trying to open the file.
        // Report the error to the user.
        const wxString & errorMessage = wxString::Format(
			GetResourceString(L"LOCALIZED_ERROR_CANTREADFILE"),
			/*WXSTRING_TO_STRING*/(fileName));

        wxMessageBox(
            errorMessage,
			GetResourceString(L"LOCALIZED_GENERAL_PRODUCTNAME"),
            wxICON_EXCLAMATION | wxOK);
    }

    return success;
}

//
// Writes the contents of the editor to a previously-specified file.
//
bool CWorkspaceEditor::Write(const wxString & FileName)
{
    wxString fileName = SelectFile(FileName);
    if (fileName.IsEmpty())
    {
        // No file name was given.
        return false;
    }
	bool success = true;
	wxString text = m_LogoCodeControl->GetText();
	//on windows, the sytled text control's line end is \r\n
    //on linux, the styled text controls' line end is \n and the natural saving encoding is native (actually utf-8 is mbcs here)
    //  the natural way of file line end is \n as well, and it will be a one line string if opened by notepad on windows
    //on macosx, the styled text controls' line end is \n as well
    //  and the line end is \n as well, so it's ok we treat unix system the same way
	if (text.length() > 0) {
		CFileTextStream* cfts = CFileTextStream::OpenForWrite(fileName, this->FTT, true);
		if (cfts != 0)
		{
			success = (cfts->Write(text)) == text.length();
			delete cfts;
		}
	}
	else {
		//make an empty file (mbcs has no bom)
		CFileTextStream* cfts = CFileTextStream::OpenForWrite(fileName, FileTextStreamType::MBCS, true);
		if (cfts != 0) {
			delete cfts;
		}
	}

	if(!success)
	{
		success = false;
		// Something when wrong when trying to open the file.
		// Report the error to the user.
		const wxString & errorMessage = wxString::Format(
			GetResourceString(L"LOCALIZED_ERROR_CANTWRITEFILE"),
			/*WXSTRING_TO_STRING*/(fileName));

		wxMessageBox(
			errorMessage,
			GetResourceString(L"LOCALIZED_GENERAL_PRODUCTNAME"),
			wxICON_EXCLAMATION | wxOK);

	}
    if (success)
    {
        #ifndef __WXOSX_IPHONE__
        m_LogoCodeControl->SetSavePoint();
#endif
    }

    return success;
}

bool CWorkspaceEditor::CanClose()
{
    bool canClose;

    if (m_LogoCodeControl->IsDirty())
    {
        // if changed better ask user
        int result = wxMessageBox(
			GetResourceString(L"LOCALIZED_SAVECHANGEDCONTENTSTOWORKSPACE"),
			GetResourceString(L"LOCALIZED_CONTENTSCHANGED"),
            wxYES_NO | wxCANCEL | wxICON_QUESTION);
        switch (result)
        {
        case wxYES:
            // The user wants to save then exit.
            canClose = Save();
            break;

        case wxCANCEL:
            // The user wants doesn't want to close.
            canClose = false;
            break;

        default:
            // The user wants to close without saving.
            canClose = true;
        }
    }
    else
    {
        // There's nothing to save, so it's safe to close.
        canClose = true;
    }

    return canClose;
}

// menu command handlers
void CWorkspaceEditor::OnExit(wxCommandEvent& WXUNUSED(Event))
{
    // Close the window, but give the user the
    // opportunity to save all unsaved changes.
    Close(false);
}

void CWorkspaceEditor::OnSaveAndExit(wxCommandEvent& Event)
{
    Save();
    OnExit(Event);
}

void CWorkspaceEditor::OnSaveToWorkspace(wxCommandEvent& Event)
{
    Save();

    if (m_EditArguments != NIL)
    {
        EndEdit();
#ifdef _WINDOWS
        _wunlink(TempPathName);
#else
        unlink((const char*)TempPathName);
#endif
        if (m_ErrorDetected)
        {
            // Notify the user that:
            // 1) The changes in the editor failed to load
            // 2) The cursor is positioned just after the last
            //    successful definition
            ::wxMessageBox(
				GetResourceString(L"LOCALIZED_CURSORISATLASTGOODDEFINITION"),
				GetResourceString(L"LOCALIZED_EDITFAILEDTOLOAD"),
                wxOK | wxICON_ERROR,
                CUniLogo::GetMainFrame()->GetCommander());

            // Reopen the editor to the location of the error.
            m_LogoCodeControl->ReopenAfterError();
        }
    }
}

// Prints the contents of the editor
void CWorkspaceEditor::OnPrint(wxCommandEvent& WXUNUSED(Event))
{
        #ifndef __WXOSX_IPHONE__
    m_LogoCodeControl->Print();
#endif
}

void CWorkspaceEditor::OnUndo(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnUndo(Event);
}

void CWorkspaceEditor::OnUpdateUndo(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanUndo());
}

void CWorkspaceEditor::OnRedo(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnRedo(Event);
}

void CWorkspaceEditor::OnUpdateRedo(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanRedo());
}

void CWorkspaceEditor::OnCut(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnCut(Event);
}

void CWorkspaceEditor::OnUpdateCut(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanCut());
}

void CWorkspaceEditor::OnCopy(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnCopy(Event);
}

void CWorkspaceEditor::OnUpdateCopy(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanCopy());
}

void CWorkspaceEditor::OnPaste(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnPaste(Event);
}

void CWorkspaceEditor::OnUpdatePaste(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanPaste());
}

void CWorkspaceEditor::OnDelete(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnDelete(Event);
}

void CWorkspaceEditor::OnUpdateDelete(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanDelete());
}

void CWorkspaceEditor::OnClear(wxCommandEvent& WXUNUSED(Event))
{
    // Delete everything in the editor
    m_LogoCodeControl->SelectAll();
    m_LogoCodeControl->Clear();
}

void CWorkspaceEditor::OnUpdateClear(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanSelectAll());
}

void CWorkspaceEditor::OnSelectAll(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnSelectAll(Event);
}

void CWorkspaceEditor::OnUpdateSelectAll(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->CanSelectAll());
}

void CWorkspaceEditor::OnFind(wxCommandEvent& WXUNUSED(Event))
{
#ifndef __WXOSX_IPHONE__
    // Create and show the search dialog box.
    // Note that this routine should not be callable if the search
    // dialog box is already created.
    if (m_FindReplaceDialog == NULL)
    {
        m_FindReplaceData.SetFlags(wxFR_DOWN); // default to searching down
        m_FindReplaceDialog = new wxFindReplaceDialog(
            this,
            &m_FindReplaceData,
			GetResourceString(L"LOCALIZED_EDITOR_TITLE_FIND"));

        m_FindReplaceDialog->Show();
    }
#endif
}

void CWorkspaceEditor::OnUpdateFind(wxUpdateUIEvent& Event)
{
    #ifndef __WXOSX_IPHONE__
    // Once the dialog box is showing, disable selecting it.
    Event.Enable(m_FindReplaceDialog == NULL);
#endif
}

void CWorkspaceEditor::OnReplace(wxCommandEvent& WXUNUSED(Event))
{
    #ifndef __WXOSX_IPHONE__
    // Create and show the search dialog box.
    // Note that this routine should not be callable if the search
    // dialog box is already created.
    if (m_FindReplaceDialog == NULL)
    {
        m_FindReplaceData.SetFlags(wxFR_DOWN); // default to searching down
        m_FindReplaceDialog = new wxFindReplaceDialog(
            this,
            &m_FindReplaceData,
			GetResourceString(L"LOCALIZED_EDITOR_TITLE_REPLACE"),
            wxFR_REPLACEDIALOG);

        m_FindReplaceDialog->Show();
    }
#endif
}

void CWorkspaceEditor::OnUpdateReplace(wxUpdateUIEvent& Event)
{
    #ifndef __WXOSX_IPHONE__
    // Once the dialog box is showing, disable selecting it.
    Event.Enable(m_FindReplaceDialog == NULL);
#endif
}

void CWorkspaceEditor::OnFindNext(wxCommandEvent& WXUNUSED(Event))
{
    #ifndef __WXOSX_IPHONE__
    m_LogoCodeControl->Find(
        static_cast<wxFindReplaceFlags>(m_FindReplaceData.GetFlags()),
        m_FindReplaceData.GetFindString());
#endif
}

void CWorkspaceEditor::OnUpdateFindNext(wxUpdateUIEvent& Event)
{
        #ifndef __WXOSX_IPHONE__
    // Enable the option if we have a string to look for.
    Event.Enable(!m_FindReplaceData.GetFindString().IsEmpty());
#endif
}
#ifndef __WXOSX_IPHONE__
void CWorkspaceEditor::OnFindDialog(wxFindDialogEvent & WXUNUSED(Event))
{

    m_LogoCodeControl->Find(
        static_cast<wxFindReplaceFlags>(m_FindReplaceData.GetFlags()),
        m_FindReplaceData.GetFindString());

}

void CWorkspaceEditor::OnFindDialogReplace(wxFindDialogEvent& WXUNUSED(Event))
{

    m_LogoCodeControl->Replace(
        static_cast<wxFindReplaceFlags>(m_FindReplaceData.GetFlags()),
        m_FindReplaceData.GetFindString(),
        m_FindReplaceData.GetReplaceString());

}

void CWorkspaceEditor::OnFindDialogReplaceAll(wxFindDialogEvent& WXUNUSED(Event))
{

    m_LogoCodeControl->ReplaceAll(
        static_cast<wxFindReplaceFlags>(m_FindReplaceData.GetFlags()),
        m_FindReplaceData.GetFindString(),
        m_FindReplaceData.GetReplaceString());

}

void CWorkspaceEditor::OnFindDialogClose(wxFindDialogEvent& WXUNUSED(Event))
{
    m_FindReplaceDialog->Destroy();
    m_FindReplaceDialog = NULL;
}
#endif

void CWorkspaceEditor::OnFindMatchingParen(wxCommandEvent& WXUNUSED(Event))
{
    m_LogoCodeControl->FindMatchingParen();
}

void CWorkspaceEditor::OnSelectMatchingParen(wxCommandEvent& WXUNUSED(Event))
{
    m_LogoCodeControl->SelectMatchingParen();
}

void CWorkspaceEditor::OnAutoComplete(wxCommandEvent& WXUNUSED(Event))
{
    m_LogoCodeControl->AutoComplete();
}

void CWorkspaceEditor::OnRunSelection(wxCommandEvent& WXUNUSED(Event))
{
    #ifndef __WXOSX_IPHONE__
    wxString selectedText = m_LogoCodeControl->GetSelectedText();

    // This function uses direct string manipulation because it was copied
    // from MSWLogo.  It could be rewritten to use wxString functions.
    size_t theTextSize = selectedText.Len() + 1;
    wchar_t * theText = new wchar_t[theTextSize];
    memcpy(theText, selectedText.c_str(), theTextSize*sizeof(wchar_t));

	wchar_t * ptr = theText;

    // strip comments
    bool more = true;
    while (more)
    {
        wchar_t * ptr2 = wcschr(ptr, L';');

        if (ptr2 != NULL)
        {
            // overwrite the comment character with a space
            *ptr2 = ' ';

            // put whitespace over everything until the end-of-string
            // the end-of-line, or a comment continuer
            while (*ptr2 != L'\0' &&
                   *ptr2 != L'\n' &&
                   *ptr2 != L'\r' &&
                   *ptr2 != L'~')
            {
                *ptr2++ = ' ';
            }
        }
        else
        {
            more = false;
        }
    }

    // paste continuation
    more = true;
    while (more)
    {
        wchar_t * ptr2 = wcschr(ptr, L'~');
        if (ptr2 != NULL)
        {
            // We found a line continuation character.
            // Effect the continuation by overwriting the continuation character
            // with a space, as well as the following newline.
            *ptr2 = ' ';
            wchar_t * ptr3 = wcschr(ptr2, L'\n');
            if (ptr3 != NULL)
            {
                *ptr3 = L' ';       // \n
                *(ptr3 - 1) = L' '; // \r
            }
        }
        else
        {
            more = false;
        }
    }

    // for each real line left execute it
    more = true;
    while (more)
    {
        // NUL-terminate the string at the newline.
        wchar_t * ptr2 = wcschr(ptr, L'\n');
        if (ptr2 != NULL)
        {
            *ptr2 = L'\0';       // \n
            *(ptr2 - 1) = L'\0'; // \r
        }

        // Execute the line
        PutIntoComboBox(ptr, MESSAGETYPE::Normal);
        do_execution(ptr);

        if (ptr2 != NULL)
        {
            ptr = ptr2 + 1; // Advance past the now-NULed newline
        }
        else
        {
            more = false;
        }
    }

    delete [] theText;
#endif
}

void CWorkspaceEditor::OnUpdateRunSelection(wxUpdateUIEvent& Event)
{
    Event.Enable(m_LogoCodeControl->IsTextSelected());
}

void CWorkspaceEditor::OnHelp(wxCommandEvent& WXUNUSED(Event))
{
    do_help(wxString());
}

void CWorkspaceEditor::OnHelpEditor(wxCommandEvent& WXUNUSED(Event))
{
    do_help(L"Editor");
}

void CWorkspaceEditor::OnHelpTopicSearch(wxCommandEvent& Event)
{
    m_LogoCodeControl->OnHelpTopicSearch(Event);
}


void CWorkspaceEditor::OnClose(wxCloseEvent& Event)
{
    if (Event.CanVeto() && !CanClose())
    {
        // The user doesn't want to close.
        return;
    }

    // Remove this window from the set of windows that the main window
    // is tracking.
    CUniLogo::GetMainFrame()->CloseWorkspaceEditor(this);

    // Because wxWidgets won't destroy the window until the applicaton is idle,
    // it will still be visible to the tests.  This causes some tests to fail.
    // To work around ths problem, we change the window's title in a way that
    // the tests can see, but the users cannot.
    SetTitle(GetTitle() + (L" "));

    if (m_EditArguments != NIL || m_CheckForErrors)
    {
        CCommander * commander = CUniLogo::GetMainFrame()->GetCommander();

        // Attempt to load the contents of the editor into the workspace,
        // just to see if there are any errors.
        bool realsave = EndEdit();
        if (m_ErrorDetected)
        {
            // Notify the user that:
            // 1) The changes in the editor failed to load
            // 2) The cursor is positioned just after the last 
            //    successful definition
            //
            // Ask if they want to reedit.
            if (::wxMessageBox(
				( GetResourceString(L"LOCALIZED_CURSORISATLASTGOODDEFINITION") +L"\n\n"
				+ GetResourceString(L"LOCALIZED_RETURNTOEDIT")),
				(GetResourceString(L"LOCALIZED_EDITFAILEDTOLOAD")),
                    wxYES_NO | wxICON_ERROR,
                    commander) == wxYES)
            {
                // Open up another editor.

                // Give the new editor our reference on m_EditArguments
                CUniLogo::GetMainFrame()->PopupEditor(
					(TempPathName),
                    m_EditArguments,
                    m_CheckForErrors,
                    true); // open the editor to the error
#ifdef _WINDOWS
        _wunlink(TempPathName);
#else
        unlink((const char*)TempPathName);
#endif            
                
            }
            else
            {
                // The user doesn't care about the error.

                // Release our reference on m_EditArguments
                assign(m_EditArguments, NIL);

                // Clear the error flag, since it was handled by the user.
                m_ErrorDetected = false;

                // Give keyboard focus to the commander so that
                // the user can start typing commands after the
                // editor closes.
                commander->GiveControlToInputBox();
            }
        }
        else
        {
            // no errors happened
            if (m_EditArguments != NIL)
            {
                // Now that we know we can load the contents without error,
                // we can erase the parts of the workspace that were removed
                // from the editor (for example, if the editor was opened
                // with the definition of "TO SQUARE" and this definition
                // was removed before the editor was saved, then SQUARE should
                // be erased from the workspace.)
                if (realsave)
                {
                    lerase(m_EditArguments);

                    // Since we erased part of the workspace, we must load
                    // again, but we don't need to do any error checking,
                    // since we know the file loads without error.
                    endedit();
                }

                // free up m_EditArguments
                assign(m_EditArguments, NIL);
            }

            // Delete the temporary file which held the workspace
            // while we were re-reading it.

#ifdef _WINDOWS
        _wunlink(TempPathName);
#else
        unlink((const char*)TempPathName);
#endif

            // Give focus back to the commander so that the user
            // can give Logo more commands.
            commander->GiveControlToInputBox();
        }
    }
    else
    {
        // else execute callback for WINDOWFILEEDIT
        callthing *callevent = callthing::CreateFunctionEvent(edit_editexit);
        calllists.insert(callevent);
    }

    // Save the location and size of our window so we can
    // come back up in the same spot next time we are invoked.
    if (!IsIconized())
    {
        const wxRect windowRectangle = GetRect();

        SetConfigurationQuadruple(
            L"Editor",
            windowRectangle.GetLeft(),
            windowRectangle.GetTop(),
            windowRectangle.GetWidth(),
            windowRectangle.GetHeight());
    }

    // Perform the default processing, which will destroy the window.
    Event.Skip();
}

void CWorkspaceEditor::OnNavigateNextWindow(wxCommandEvent& Event)
{
    CUniLogo::GetMainFrame()->KeyboardNavigateTopLevelWindow(
        this,
        wxNavigationKeyEvent::IsForward);
}

BEGIN_EVENT_TABLE(CWorkspaceEditor, wxFrame)

EVT_MENU(wxID_EXIT, CWorkspaceEditor::OnExit)
EVT_MENU((int)CMID::ID_FILESAVEANDEXIT, CWorkspaceEditor::OnSaveAndExit)
EVT_MENU((int)CMID::ID_FILESAVETOWORKSPACE, CWorkspaceEditor::OnSaveToWorkspace)
EVT_MENU(wxID_PRINT, CWorkspaceEditor::OnPrint)

EVT_MENU(wxID_UNDO, CWorkspaceEditor::OnUndo)
EVT_UPDATE_UI(wxID_UNDO, CWorkspaceEditor::OnUpdateUndo)
EVT_MENU(wxID_REDO, CWorkspaceEditor::OnRedo)
EVT_UPDATE_UI(wxID_REDO, CWorkspaceEditor::OnUpdateRedo)
EVT_MENU(wxID_CUT, CWorkspaceEditor::OnCut)
EVT_UPDATE_UI(wxID_CUT, CWorkspaceEditor::OnUpdateCut)
EVT_MENU(wxID_COPY, CWorkspaceEditor::OnCopy)
EVT_UPDATE_UI(wxID_COPY, CWorkspaceEditor::OnUpdateCopy)
EVT_MENU(wxID_PASTE, CWorkspaceEditor::OnPaste)
EVT_UPDATE_UI(wxID_PASTE, CWorkspaceEditor::OnUpdatePaste)
EVT_MENU(wxID_DELETE, CWorkspaceEditor::OnDelete)
EVT_UPDATE_UI(wxID_DELETE, CWorkspaceEditor::OnUpdateDelete)
EVT_MENU(wxID_CLEAR, CWorkspaceEditor::OnClear)
EVT_UPDATE_UI(wxID_CLEAR, CWorkspaceEditor::OnUpdateClear)
EVT_MENU(wxID_SELECTALL, CWorkspaceEditor::OnSelectAll)
EVT_UPDATE_UI(wxID_SELECTALL, CWorkspaceEditor::OnUpdateSelectAll)

EVT_MENU(wxID_FIND, CWorkspaceEditor::OnFind)
EVT_UPDATE_UI(wxID_FIND, CWorkspaceEditor::OnUpdateFind)
EVT_MENU(wxID_REPLACE, CWorkspaceEditor::OnReplace)
EVT_UPDATE_UI(wxID_REPLACE, CWorkspaceEditor::OnUpdateReplace)
EVT_MENU((int)CMID::ID_SEARCHFINDNEXT, CWorkspaceEditor::OnFindNext)
EVT_UPDATE_UI((int)CMID::ID_SEARCHFINDNEXT, CWorkspaceEditor::OnUpdateFindNext)

EVT_MENU((int)CMID::ID_EDITSETFONT, CWorkspaceEditor::OnSetFont)

EVT_MENU((int)CMID::ID_TESTRUNSELECTION, CWorkspaceEditor::OnRunSelection)
EVT_UPDATE_UI((int)CMID::ID_TESTRUNSELECTION, CWorkspaceEditor::OnUpdateRunSelection)

EVT_MENU((int)CMID::ID_HELP, CWorkspaceEditor::OnHelp)
EVT_MENU((int)CMID::ID_HELPEDIT, CWorkspaceEditor::OnHelpEditor)
EVT_MENU(wxID_HELP_INDEX, CWorkspaceEditor::OnHelpTopicSearch)

EVT_MENU((int)CMID::ID_FINDMATCHINGPAREN, CWorkspaceEditor::OnFindMatchingParen)
EVT_MENU((int)CMID::ID_SELECTMATCHINGPAREN, CWorkspaceEditor::OnSelectMatchingParen)
EVT_MENU((int)CMID::ID_AUTOCOMPLETE, CWorkspaceEditor::OnAutoComplete)
EVT_CLOSE(CWorkspaceEditor::OnClose)
    #ifndef __WXOSX_IPHONE__
EVT_FIND(wxID_ANY, CWorkspaceEditor::OnFindDialog)

EVT_FIND_NEXT(wxID_ANY, CWorkspaceEditor::OnFindDialog)
EVT_FIND_REPLACE(wxID_ANY, CWorkspaceEditor::OnFindDialogReplace)
EVT_FIND_REPLACE_ALL(wxID_ANY, CWorkspaceEditor::OnFindDialogReplaceAll)
EVT_FIND_CLOSE(wxID_ANY, CWorkspaceEditor::OnFindDialogClose)
#endif
EVT_MENU((int)CMID::ID_NEXT_WINDOW, CWorkspaceEditor::OnNavigateNextWindow)
END_EVENT_TABLE()

