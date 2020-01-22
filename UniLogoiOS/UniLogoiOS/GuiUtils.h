#ifndef __GUIUTILS_H__
#define __GUIUTILS_H__

#include <stddef.h>
#include <wx/string.h>

class wxMenu;
class wxMenuBar;
class wxTopLevelWindow;

struct MENUITEM 
{
	const wxString&  MenuText;
    int           MenuId;
};
#ifndef __APPLE__
void SetUniLogoIcon(
    wxTopLevelWindow & TopLevelWindow
    );
#endif

void
FillMenu(
    wxMenu *          Menu,
    const MENUITEM *  MenuItems,
    size_t            MenuItemsLength
    );

void
AppendChildMenu(
    wxMenuBar *       MainMenu,
    const wxString&      ChildMenuText,
    const MENUITEM *  ChildMenuItems,
    size_t            ChildMenuItemsLength
    );
#endif
