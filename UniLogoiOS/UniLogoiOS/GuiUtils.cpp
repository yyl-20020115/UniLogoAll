#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "GuiUtils.h"

   #include <wx/menu.h>
   #include <wx/icon.h>
   #include <wx/toplevel.h>

   #include "StringAdapter.h"
#endif

#ifndef __APPLE__
void SetUniLogoIcon(
    wxTopLevelWindow & TopLevelWindow
    )
{
#ifdef __WXMSW__
    // On Windows use the .ico in the resource.
    // Since we have already paid the size cost of compiling
    // the icons into a resource, there's no reason to compile
    // them into the executable a second time as an .XPM.

    // Note that, for any given DPI mode, only two of these
    // icon sizes are required: SM_CXICON x SM_CYICON and
    // SM_CXSMICON x SM_CYSMICON.  We could reduce the memory
    // overhead by calling GetSystemMetrics and only adding
    // these two to the bundle.
    wxString name(L"UniLogo");
    wxIcon icon16x16(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 16, 16));
    wxIcon icon20x20(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 20, 20));
    wxIcon icon24x24(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 24, 24));
    wxIcon icon32x32(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 32, 32));
    wxIcon icon40x40(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 40, 40));
    wxIcon icon48x48(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 48, 48));
    wxIcon icon64x64(wxIcon(name, wxBITMAP_TYPE_ICO_RESOURCE, 64, 64));

#else
    #include "unilogo-16x16.xpm"
    #include "unilogo-20x20.xpm"
    #include "unilogo-32x32.xpm"
    #include "unilogo-40x40.xpm"
    #include "unilogo-48x48.xpm"
    #include "unilogo-64x64.xpm"

    wxIcon icon16x16(unilogo_16x16_xpm);
    wxIcon icon20x20(unilogo_20x20_xpm);
    wxIcon icon24x24(unilogo_20x20_xpm);
    wxIcon icon32x32(unilogo_32x32_xpm);
    wxIcon icon40x40(unilogo_40x40_xpm);
    wxIcon icon48x48(unilogo_48x48_xpm);
    wxIcon icon64x64(unilogo_64x64_xpm);
#endif

    wxIconBundle icons;
    icons.AddIcon(icon16x16);
    icons.AddIcon(icon20x20);
    icons.AddIcon(icon24x24);
    icons.AddIcon(icon32x32);
    icons.AddIcon(icon40x40);
    icons.AddIcon(icon48x48);
    icons.AddIcon(icon64x64);

    TopLevelWindow.SetIcons(icons);
}
#endif

wxString ModifyMenuTextForNonWindows(wxString text)
{
    if(text.length()>0)
    {
        int i = text.Find(L'\t');
        if(i>=0){
#if defined(__WXGTK__)
            text[i] = L'\0';
#elif defined(__WXMSW__)
            //do nothing
#else
            text[i] = L' ';
#endif
        }
    }
    return text;
}
void

#ifndef __WXOSX_IPHONE__
FillMenu(
    wxMenu *          Menu,
    const MENUITEM *  MenuItems,
    size_t            MenuItemsLength
    )
{
    for (size_t i = 0; i < MenuItemsLength; i++)
    {
        if (MenuItems[i].MenuText.length()>0)
        {
            Menu->Append(
                MenuItems[i].MenuId,
				ModifyMenuTextForNonWindows(MenuItems[i].MenuText));
        }
        else
        {
            Menu->AppendSeparator();
        }
    }
}

void
AppendChildMenu(
    wxMenuBar *       MainMenu,
    const wxString&   ChildMenuText,
    const MENUITEM *  ChildMenuItems,
    size_t            ChildMenuItemsLength
    )
{
    // create the popup menu
	wxMenu * childMenu = new wxMenu();// wxMenuBase::New();

    // append the child menu to the main menu
    MainMenu->Append(childMenu, ModifyMenuTextForNonWindows(ChildMenuText));

    // fill the child menu with its items
    FillMenu(childMenu, ChildMenuItems, ChildMenuItemsLength);

}

#endif
