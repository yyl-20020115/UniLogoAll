#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
    #include "StatusDialog.h"

    #include <wx/sizer.h>
    #include <wx/stattext.h>
    #include <wx/button.h>
    #include <wx/statbox.h>
    #include <wx/string.h>

    #include "Commander.h"
    #include "UniLogo.h"
    #include "Mainframe.h"
    #include "LocalizedStrings.h"
    #include "LogoCore.h" // for ARRAYSIZE
    #include "Utils.h"
    #include "Status.h"
    #include "Startup.h"
    #include "Graphics.h"
    #include "Graphwin.h"
    #include "Eval.h"
    #include "Mem.h"
    #include "StringAdapter.h"
    #include "ScreenWindow.h"
//    #include "debugheap.h"
#endif

bool status_flag = false;   // Flag to signal status box is popped up

// Menu IDs
enum class CKID : int
{
   ID_STATUS_CONTACT = wxID_HIGHEST,
   ID_STATUS_PENCOLOR,
   ID_STATUS_FLOODCOLOR,
   ID_STATUS_SCREENCOLOR,
   ID_STATUS_WIDTH,
   ID_STATUS_VISIBILITY,
   ID_STATUS_STYLE,
   ID_STATUS_HEADING,
   ID_STATUS_PITCH,
   ID_STATUS_ROLL,
   ID_STATUS_PEN,
   ID_STATUS_ORIENTATION,
   ID_STATUS_TURTLE,
   ID_STATUS_COLOR,
   ID_STATUS_KERNEL,
   ID_STATUS_CALLS,
   ID_STATUS_PEAKMEMORY,
};

// ----------------------------------------------------------------------------
// CStatusDialog
// ----------------------------------------------------------------------------

CStatusDialog::CStatusDialog(wxWindow * Parent)
    : wxDialog(
        Parent, 
        wxID_ANY, 
		GetResourceString(L"LOCALIZED_STATUS"),
        wxDefaultPosition, 
        wxDefaultSize, 
        wxCAPTION | wxCLOSE_BOX | wxSYSTEM_MENU)
{
    // build default coords
    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;

    // Get last location and size of command window from configuration settings.
    GetConfigurationQuadruple(L"Status", x, y, w, h);
    checkwindow(&x, &y, &w, &h);

    // now set position
    Move(x, y);

    struct STATICBOX
    {
        wxString        Category;
		wxString        FieldName[4];
        wxStaticText * *    FieldValue[4];
    } data[] = {
        {
            GetResourceString(L"LOCALIZED_STATUS_PEN"),
            {
                GetResourceString(L"LOCALIZED_STATUS_CONTACT"),
                GetResourceString(L"LOCALIZED_STATUS_WIDTH"), 
                GetResourceString(L"LOCALIZED_STATUS_STYLE"),
				L"",
            },
            {
                &m_PenContact,
                &m_PenWidth,
                &m_PenStyle,
            },
        },
        {
            GetResourceString(L"LOCALIZED_STATUS_ORIENTATION"),
            {
				GetResourceString(L"LOCALIZED_STATUS_HEADING"),
				GetResourceString(L"LOCALIZED_STATUS_PITCH"), 
				GetResourceString(L"LOCALIZED_STATUS_ROLL"),
            },
            {
                &m_TurtleHeading,
                &m_TurtlePitch,
                &m_TurtleRoll,
            },
        },
        {
			GetResourceString(L"LOCALIZED_STATUS_TURTLE"),
            {
				GetResourceString(L"LOCALIZED_STATUS_POSITION"),
				GetResourceString(L"LOCALIZED_STATUS_WHICH"),
				GetResourceString(L"LOCALIZED_STATUS_VISIBILITY"),
            },
            {
                &m_TurtlePosition,
                &m_TurtleId,
                &m_TurtleVisibility,
            },
        },
        {
			GetResourceString(L"LOCALIZED_STATUS_COLOR"),
            {
				GetResourceString(L"LOCALIZED_STATUS_PENCOLOR"),
				GetResourceString(L"LOCALIZED_STATUS_FLOODCOLOR"),
				GetResourceString(L"LOCALIZED_STATUS_SCREENCOLOR"),
            },
            {
                &m_PenColor,
                &m_FloodColor,
                &m_ScreenColor,
            },
        },
        {
			GetResourceString(L"LOCALIZED_STATUS_KERNEL"),
            {
				GetResourceString(L"LOCALIZED_STATUS_CALLS"),
				GetResourceString(L"LOCALIZED_STATUS_PEAKMEMORY"),
				GetResourceString(L"LOCALIZED_STATUS_VECTORS")+L":",
				GetResourceString(L"LOCALIZED_STATUS_POLYGONS")+L":",
            },
            {
                &m_TotalCalls,
                &m_PeakMemory,
                &m_TotalVectors,
                &m_TotalPolygons,
            },
        },
    };

    wxBoxSizer *topLevelSizer = new wxBoxSizer(wxVERTICAL);

    for (size_t i = 0; i < ARRAYSIZE(data); i++)
    {
        wxStaticBoxSizer * staticBoxSizer = new wxStaticBoxSizer(
            wxHORIZONTAL,
            this, 
			wxString(data[i].Category));

        topLevelSizer->Add(staticBoxSizer, 0, wxALL | wxEXPAND, 5);

        wxBoxSizer * fieldNameSizer  = new wxBoxSizer(wxVERTICAL);
        staticBoxSizer->Add(fieldNameSizer);

        wxBoxSizer * fieldValueSizer = new wxBoxSizer(wxVERTICAL);
        staticBoxSizer->Add(fieldValueSizer);

        for (size_t j = 0; j < ARRAYSIZE(data[i].FieldName); j++)
        {
            if (data[i].FieldName[j].Length()==0)
            {
                // we've done all the fields for this static box
                break;
            }

            wxStaticText * fieldName = new wxStaticText(
                this,
                wxID_ANY,
				wxString(data[i].FieldName[j]),
                wxDefaultPosition,
                wxDefaultSize, 
                wxALIGN_LEFT);

            fieldNameSizer->Add(fieldName, 0, wxEXPAND);

            wxStaticText * fieldValue = new wxStaticText(
                this,
                wxID_ANY,
                wxEmptyString,
                wxDefaultPosition,
                wxDefaultSize, 
                wxALIGN_LEFT);

            fieldValueSizer->Add(
                fieldValue,
                0, 
                wxEXPAND | wxLEFT | wxRIGHT,
                5);

            if(data[i].FieldValue[j]!=0){
                *data[i].FieldValue[j] = fieldValue;
            }
        }
    }

    SetSizer(topLevelSizer);

    // Populate with long data to determine the maximum
    // extents which we'll need to show the data without
    // truncation.
    SetPenContact(true);
    SetPenWidth(100);
    SetPenStyle(GetResourceString(L"LOCALIZED_STATUS_PENREVERSE"));
    SetTurtleHeading(350.1234);
    SetTurtlePitch(350.1234);
    SetTurtleRoll(350.1234);
    SetTurtlePosition(8888, 8888, 8888);
    SetTurtleId(1000);
    SetTurtleVisibility(true);
    SetPenColor(255, 255, 255);
    SetFloodColor(255, 255, 255);
    SetScreenColor(255, 255, 255);
    SetCalls(8888888);
    SetPeakMemory(8888888);
    SetVectors(8888888);
    SetPolygons(8888888);

    topLevelSizer->SetSizeHints(this);
    topLevelSizer->Fit(this);
}

void CStatusDialog::PopulateAllFields()
{
    // flag so that updates are sent
    status_flag = true;

    // update all fields
    update_status_evals();
    update_status_floodcolor();
    update_status_memory();
    update_status_pencolor();
    update_status_pencontact();
    update_status_penstyle();
    update_status_penwidth();
    update_status_screencolor();
    update_status_turtleheading();
    update_status_turtlepitch();
    update_status_turtleposition();
    update_status_turtleroll();
    update_status_turtlevisability();
    update_status_turtlewhich();
    update_status_vectors();
}

void CStatusDialog::SetPenContact(bool PenIsUp)
{
    wxString text;

    if (PenIsUp)
    {
        text = GetResourceString(L"LOCALIZED_STATUS_PENUP");
    }
    else
    {
        text = GetResourceString(L"LOCALIZED_STATUS_PENDOWN");
    }

    m_PenContact->SetLabel(text);
}

void CStatusDialog::SetPenWidth(int PenWidth)
{
    wxString penWidthString =wxString::Format(L"%d", PenWidth);

    m_PenWidth->SetLabel(penWidthString);
}

void CStatusDialog::SetPenStyle(const wchar_t * PenStyle)
{
    m_PenStyle->SetLabel(wxString(PenStyle));
}


void CStatusDialog::SetTurtleHeading(double Heading)
{
    wxString headingString = wxString::Format(L"%1.2f", Heading);

    m_TurtleHeading->SetLabel(headingString);
}


void CStatusDialog::SetTurtlePitch(double Pitch)
{
    wxString pitchString =wxString::Format(L"%1.2f", Pitch);

    m_TurtlePitch->SetLabel(pitchString);
}

void CStatusDialog::SetTurtleRoll(double Roll)
{
    wxString rollString = wxString::Format(L"%1.2f", Roll);

    m_TurtleRoll->SetLabel(rollString);
}

void CStatusDialog::SetTurtlePosition(double X, double Y, double Z)
{
    wxString positionString = wxString::Format(L"%1.0f,%1.0f,%1.0f", X, Y, Z);

    m_TurtlePosition->SetLabel(positionString);
}

void CStatusDialog::SetTurtleId(int TurtleId)
{
    wxString turtleIdString=wxString::Format(L"%d", TurtleId);

    m_TurtleId->SetLabel(turtleIdString);
}

void CStatusDialog::SetTurtleVisibility(bool IsShown)
{
    wxString text;

    if (IsShown)
    {
        text = GetResourceString(L"LOCALIZED_STATUS_PENSHOWN");
    }
    else
    {
        text = GetResourceString(L"LOCALIZED_STATUS_PENHIDDEN");
    }

    m_TurtleVisibility->SetLabel(text);
}

void CStatusDialog::SetPenColor(int Red, int Green, int Blue)
{
    wxString colorString = wxString::Format(L"%d,%d,%d", Red, Green, Blue);

    m_PenColor->SetLabel(colorString);
}

void CStatusDialog::SetScreenColor(int Red, int Green, int Blue)
{
    wxString colorString=wxString::Format(L"%d,%d,%d", Red, Green, Blue);

    m_ScreenColor->SetLabel(colorString);
}

void CStatusDialog::SetFloodColor(int Red, int Green, int Blue)
{
    wxString colorString = wxString::Format(wxString(L"%d,%d,%d"), Red, Green, Blue);

    m_FloodColor->SetLabel(colorString);
}

void CStatusDialog::SetCalls(long long TotalCalls)
{
    // Use operator<< instead of wxString::Printf() to format the
    // "long long", as the C runtime on Windows XP does not support
    // the ANSI C99 "%lld" format sequence and would treat TotalCalls
    // as a 32-bit number.
    wxString totalCallsString=wxString::Format(L"%lld",TotalCalls);

    m_TotalCalls->SetLabel(totalCallsString);
}

void CStatusDialog::SetPeakMemory(int TotalNodes)
{
    wxString peakMemoryString = wxString::Format(L"%d "+ GetResourceString(L"LOCALIZED_STATUS_NODES"), TotalNodes);

    m_PeakMemory->SetLabel(peakMemoryString);
}

void CStatusDialog::SetVectors(long TotalVectors)
{
    wxString totalVectorsString;
    if (TotalVectors < 0)
    {
        totalVectorsString = GetResourceString(L"LOCALIZED_STATUS_NOT_APPLICABLE");
    }
    else
    {
        totalVectorsString = wxString::Format(L"%ld", TotalVectors);
    }

    m_TotalVectors->SetLabel(totalVectorsString);
}

void CStatusDialog::SetPolygons(long TotalPolygons)
{
    wxString totalPolygonsString;

    if (TotalPolygons < 0)
    {
        totalPolygonsString = GetResourceString(L"LOCALIZED_STATUS_NOT_APPLICABLE");
    }
    else
    {
        totalPolygonsString=wxString::Format(L"%ld", TotalPolygons);
    }

    m_TotalPolygons->SetLabel(totalPolygonsString);
}

void CStatusDialog::OnClose(wxCloseEvent& Event)
{
    // No longer accept updates to the status fields
    status_flag = false;

#ifdef __WXMSW__ // utils.cpp only builds on Windows

    // Get location of our window on the screen so we can
    // come back up in the same spot next time we are invoked.

    // build default coords
    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;

    GetPosition(&x, &y);

    // save the current location
    SetConfigurationQuadruple(L"Status", x, y, w, h);

#endif

#ifdef UNILOGO_WXWIDGETS
    CMainFrame * mainFrame = CUniLogo::GetMainFrame();

    mainFrame->ClearStatusDialog();
    mainFrame->GetCommander()->UpdateStatusButtonState();
#endif

    // default processing will destroy the dialog box
    Event.Skip();
}

BEGIN_EVENT_TABLE(CStatusDialog, wxDialog)
    EVT_CLOSE(CStatusDialog::OnClose)
END_EVENT_TABLE()

void update_status_turtleposition(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetTurtlePosition(
            g_SelectedTurtle->Position.x,
            g_SelectedTurtle->Position.y,
            g_SelectedTurtle->Position.z);
    }
}


void update_status_pencolor(void)
{
    if (status_flag)
    {
        const Color & penColor = GetPenStateForSelectedTurtle().Color;

        GetStatusDialog()->SetPenColor(
            penColor.red,
            penColor.green,
            penColor.blue);
    }
}

void update_status_floodcolor(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetFloodColor(dfld.red, dfld.green, dfld.blue);
    }
}

void update_status_screencolor(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetScreenColor(dscn.red, dscn.green, dscn.blue);
    }
}

void update_status_penwidth(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetPenWidth(GetPenStateForSelectedTurtle().Width);
    }
}


void update_status_turtleheading(void)
{
    if (status_flag)
    {
        FLONUM heading;
        if (current_mode == mode_type::perspectivemode)
        {
            heading = rotation_z();
        }
        else
        {
            heading = g_SelectedTurtle->Heading;
        }

        GetStatusDialog()->SetTurtleHeading(heading);
    }
}

void update_status_penstyle(void)
{
    if (status_flag)
    {
        // TODO: merge with get_node_pen_mode()
        const wchar_t * penStyle;
        if (GetPenStateForSelectedTurtle().Mode == XOR_PUT)
        {
            penStyle = GetResourceString(L"LOCALIZED_STATUS_PENREVERSE");
        }
        else
        {
            penStyle = GetResourceString(L"LOCALIZED_STATUS_PENNORMAL");
        }

        if (GetPenStateForSelectedTurtle().IsErasing)
        {
            penStyle = GetResourceString(L"LOCALIZED_STATUS_PENERASE");
        }

        GetStatusDialog()->SetPenStyle(penStyle);
    }
}

void update_status_pencontact(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetPenContact(g_SelectedTurtle->IsPenUp);
    }
}

void update_status_turtlevisability(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetTurtleVisibility(g_SelectedTurtle->IsShown);
    }
}

void update_status_turtlepitch(void)
{
    if (status_flag)
    {
        FLONUM pitch;

        if (current_mode == mode_type::perspectivemode)
        {
            pitch = rotation_x();
        }
        else
        {
            pitch = 0.0;
        }

        GetStatusDialog()->SetTurtlePitch(pitch);
    }
}

void update_status_turtleroll(void)
{
    if (status_flag)
    {
        FLONUM roll;

        if (current_mode == mode_type::perspectivemode)
        {
            roll = rotation_y();
        }
        else
        {
            roll = 0.0;
        }

        GetStatusDialog()->SetTurtleRoll(roll);
    }
}

void update_status_turtlewhich(void)
{
    if (status_flag)
    {
        int turtleId = GetSelectedTurtleIndex();
        GetStatusDialog()->SetTurtleId(turtleId);
    }
}

void update_status_evals(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetCalls(eval_count);
    }
}

void update_status_vectors(void)
{
    if (status_flag)
    {
        if (ThreeD.m_iPolyCount)
        {
            GetStatusDialog()->SetPolygons(ThreeD.m_iPolyCount);
            GetStatusDialog()->SetVectors(-1L);
        }
        else
        {
            GetStatusDialog()->SetPolygons(-1L);
            GetStatusDialog()->SetVectors(vector_count);
        }
    }
}

void update_status_memory(void)
{
    if (status_flag)
    {
        GetStatusDialog()->SetPeakMemory(memory_count * SEG_SIZE);
    }
}
