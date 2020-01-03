#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "AboutUniLogo.h"

   #include <wx/sizer.h>
   #include <wx/stattext.h>
   #include <wx/button.h>

   #include "LocalizedStrings.h"
#endif

// ----------------------------------------------------------------------------
// CAboutUniLogo
// ----------------------------------------------------------------------------


CAboutUniLogo::CAboutUniLogo(wxWindow * Parent)
    : wxDialog(Parent, wxID_ANY, GetResourceString(L"LOCALIZED_ABOUTUNI"))
{
	// The text in all of the static controls
	static const wxString staticText[] = {
		GetResourceString(L"LOCALIZED_GENERAL_PRODUCTNAME") + 
		L" " LOCALIZED_ABOUTUNI_VERSION
		L" " UNILOGO_VERSION 
	    L"\n"
        L"Copyright @ 2011-2020 NOC",
	};

    wxBoxSizer *sizerTop = new wxBoxSizer(wxVERTICAL);

    for (size_t i = 0; i < ARRAYSIZE(staticText); i++)
    {
		if (!staticText->IsSameAs(ResourceStringSpaceHolder)) {
			wxStaticText *info = new wxStaticText(
				this,
				wxID_ANY,
				wxString(L"  ") + (staticText[i]) + wxString(L"  "),
				wxDefaultPosition,
				wxDefaultSize,
				wxALIGN_CENTRE | wxSUNKEN_BORDER);

			sizerTop->Add(info, 0, wxALL | wxEXPAND, 5);
		}
    }



    wxButton *okButton = new wxButton(
        this,
        wxID_CANCEL,
		GetResourceString(L"LOCALIZED_ABOUTUNILOGO_OK"));
    sizerTop->Add(okButton, 0, wxALIGN_CENTER | wxALL, 5);

    SetSizer(sizerTop);

    sizerTop->SetSizeHints(this);
    sizerTop->Fit(this);

    // make the "Ok" button the default
    okButton->SetFocus();
    okButton->SetDefault();
}
