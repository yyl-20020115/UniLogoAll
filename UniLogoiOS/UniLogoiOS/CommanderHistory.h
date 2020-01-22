#ifndef __COMMANDER_HISTORY_H__
#define __COMMANDER_HISTORY_H__
#ifndef __WXOSX_IPHONE__
#ifndef WX_PRECOMP
  #include "wx/richtext/richtextctrl.h"
#endif
#else
#include "wx/textctrl.h"
#endif

class CCommander;

class CCommanderHistory :
#ifndef __WXOSX_IPHONE__
    public wxRichTextCtrl
#else
    public wxTextCtrl
#endif

{
public:
    CCommanderHistory(CCommander* Parent, wxWindowID Id);
    void ScrollToBottom();

private:
    // Event handlers
    void OnContextHelp(wxCommandEvent& Event);
    void OnKeyDown(wxKeyEvent& Event);
    void OnLeftMouseButtonDown(wxMouseEvent& Event);
    void OnLeftMouseButtonDoubleClick(wxMouseEvent& Event);
    void OnContextMenu(wxContextMenuEvent& Event);
    void OnSetFocus(wxFocusEvent & Event);
    void OnRemoveSelectedLines(wxCommandEvent& Event);
    void OnUpdateRemoveSelectedLines(wxUpdateUIEvent& Event);

    // Private helper functions
    CCommander * GetCommander() const;
    bool IsCursorAtBottom() const;
    void CopyCurrentLineToCommanderInput() const;

    DECLARE_NO_COPY_CLASS(CCommanderHistory);
    DECLARE_EVENT_TABLE();
};
#endif

