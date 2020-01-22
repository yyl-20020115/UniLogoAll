#ifndef __COMMANDER_BUTTON__
#define __COMMANDER_BUTTON__

#ifndef WX_PRECOMP
    #include <wx/button.h>
#endif
#ifndef __WXOSX_IPHONE__
class CCommander;

class CCommanderButton : public wxButton
{
public:
    CCommanderButton(CCommander* Parent, wxWindowID Id, const wxString& Label);

private:
    // Event Handlers
    void OnKeyDown(wxKeyEvent& Event);

    DECLARE_NO_COPY_CLASS(CCommanderButton);
    DECLARE_EVENT_TABLE();
};
#endif
#endif

