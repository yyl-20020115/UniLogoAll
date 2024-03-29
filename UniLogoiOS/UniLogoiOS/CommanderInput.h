#ifndef __COMMANDER_INPUT_H__
#define __COMMANDER_INPUT_H__

#include "LogoCodeCtrl.h"

class CCommander;
#ifdef _WINDOWS
#define USE_RICHTEXT_CODE_EDITOR
#endif

class CCommanderInput : public CLogoCodeCtrl
{
public:
    CCommanderInput(CCommander* Parent, wxWindowID Id);

    static bool WantsKeyEvent(int KeyCode);
    void SimulateKeyPress(wxKeyEvent & KeyEvent);
    void SetText(const wxString & NewText);

private:
    // event handlers
    void OnKeyDown(wxKeyEvent & Event);
    void OnChar(wxKeyEvent & Event);
    void OnSetFocus(wxFocusEvent & Event);
    void OnKillFocus(wxFocusEvent & Event);
    void OnFindMatchingParen(wxCommandEvent& Event);
    void OnSelectMatchingParen(wxCommandEvent& Event);
    void OnAutoComplete(wxCommandEvent& Event);
#ifdef USE_RICHTEXT_CODE_EDITOR
    void Paste();
#elif wxCHECK_VERSION(3, 1, 0)
        #ifndef __WXOSX_IPHONE__
    void OnClipboardPaste(wxStyledTextEvent& Event);
#endif
#else
    void OnPaste(wxCommandEvent& Event);
#endif

    DECLARE_NO_COPY_CLASS(CCommanderInput);
    DECLARE_EVENT_TABLE();
};

#endif

