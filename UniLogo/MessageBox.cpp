#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include <wx/msgdlg.h>

   #include "MessageBox.h"
   #include "ScreenWindow.h"
   #include "Error.h"
   #include "StringAdapter.h"

   #include "LocalizedStrings.h"
#endif

void 
ShowMessage(
    const wxString& Title,
    const wxString& Message
    )
{
    wxMessageBox(
		Message,
		Title,
        wxOK | wxCENTER,
        GetParentWindowForDialog());
}

void
ShowErrorMessage(
    const wxString& Message
    )
{
    ShowMessage(GetResourceString(L"LOCALIZED_ERROR"), Message);
}

// Maps ErrorCode to a string and displays it in a message box
void
ShowErrorMessage(
    ERR_TYPES  ErrorCode
    )
{
    wxString errorMessage;

    switch (ErrorCode)
    {
    case ERR_TYPES::IMAGE_GENERAL:
        // This happens when one of the Win32 API fails when trying to
        // save a bitmap.  It would be nice to show an error that
        // indicates the problem, but since I don't expect this to happen
        // showing a generic "unknown error happened" is sufficient.
        errorMessage = GetResourceString(L"LOCALIZED_ERROR_UNKNOWN");
        break;

    case ERR_TYPES::IMAGE_GIF_LOAD_FAILED:
        errorMessage = GetResourceString(L"LOCALIZED_ERROR_GIFREADFAILED");
        break;

    case ERR_TYPES::IMAGE_GIF_SAVE_FAILED:
        errorMessage = GetResourceString(L"LOCALIZED_ERROR_GIFSAVEFAILED");
        break;

    case ERR_TYPES::IMAGE_BMP_OPEN_FAILED:
        errorMessage = GetResourceString(L"LOCALIZED_COULDNOTOPENBMP");
        break;

    case ERR_TYPES::IMAGE_BMP_CREATE_FAILED:
        errorMessage = GetResourceString(L"LOCALIZED_COULDNOTCREATEBMP");
        break;

    case ERR_TYPES::IMAGE_BMP_WRITE_FAILED:
        errorMessage = GetResourceString(L"LOCALIZED_COULDNOTWRITEBMP");
        break;

    case ERR_TYPES::IMAGE_BMP_INVALID:
        errorMessage = GetResourceString(L"LOCALIZED_NOTVALIDBMP");
        break;

    case ERR_TYPES::OUT_OF_MEM:
        errorMessage = GetResourceString(L"LOCALIZED_ERROR_OUTOFMEMORY");
        break;

    default:
        // This should never happen, but if it does, showing a general error
        // message is better than showing no error message.
        assert(0);
        errorMessage = GetResourceString(L"LOCALIZED_ERROR_UNKNOWN");
        break;
    }

    ShowErrorMessage(errorMessage);
}

// Shows a message box and sets the logo error.
// This helper was created because these two operations appear next
// to each other very often, not because coupling the operations is 
// good design.
void 
ShowMessageAndStop(
    const wxString& Title,
    const wxString& Message
    )
{
    ShowMessage(Title, Message);
    err_logo(ERR_TYPES::STOP_ERROR, NIL);
}

void
ShowErrorMessageAndStop(
    const wxString& Message
    )
{
    ShowMessageAndStop(GetResourceString(L"LOCALIZED_ERROR"), Message);
}
