#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "CommanderToggleButton.h"
   #include "Commander.h"
   #include "CommanderInput.h"
   #include "StringAdapter.h"
#endif

CCommanderToggleButton::CCommanderToggleButton(
    CCommander *    Parent, 
    wxWindowID      Id,
    const wxString&    DownLabel,
    const wxString&    UpLabel
    ) :
    wxToggleButton(
        Parent,
        Id,
        wxEmptyString,
        wxDefaultPosition,
        wxDefaultSize,
        wxWANTS_CHARS),
    m_DownLabel(DownLabel),
    m_UpLabel(UpLabel)
{
}

void CCommanderToggleButton::OnKeyDown(wxKeyEvent& Event)
{
    const int keyCode = Event.GetKeyCode();

    if (keyCode == WXK_SPACE)
    {
        // Spaces are transformed into button presses,
        // so we want to handle this event.
        Event.Skip();
    }
    else if (keyCode == WXK_TAB)
    {
        if (Event.ShiftDown())
        {
            // Shift+Tab means navigate backward.
            Navigate(wxNavigationKeyEvent::IsBackward);
        }
        else
        {
            // Tab means navigate forward.
            Navigate(wxNavigationKeyEvent::IsForward);
        }
    }
    else if (keyCode == WXK_RETURN)
    {
        // Convert this into a button press
        wxCommandEvent remappedEvent(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, GetId());
        ProcessEvent(remappedEvent);
    }
    else if (keyCode == WXK_UP ||
             keyCode == WXK_NUMPAD_UP ||
             CCommanderInput::WantsKeyEvent(keyCode))
    {
        // We don't handle this key.
        // Give focus to the edit box and send the press to it.
        CCommander * commander = static_cast<CCommander*>(GetParent());
        commander->ProcessKeyDownEventAtInputControl(Event);
    }
    else
    {
        Event.Skip();
    }
}

void CCommanderToggleButton::SetPressedState(bool IsPressed)
{
    SetLabel(wxString(IsPressed ? m_DownLabel : m_UpLabel));
    SetValue(IsPressed);
}

BEGIN_EVENT_TABLE(CCommanderToggleButton, wxToggleButton)
    EVT_KEY_DOWN(CCommanderToggleButton::OnKeyDown)
END_EVENT_TABLE()
