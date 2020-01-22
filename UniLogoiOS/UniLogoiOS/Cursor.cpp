#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include <wx/cursor.h>
   #include <wx/window.h>

   #include "Cursor.h"
   #include "Init.h"
   #include "ScreenWindow.h"
   #include "LogoCore.h"
#endif


NODE *lsetcursorwait(NODE *)
{
	wxWindow* mainWindow = GetMainWxWindow();

	if (mainWindow != 0)
	{
		mainWindow->SetCursor(*wxHOURGLASS_CURSOR);
	}
    return Unbound;
}

NODE *lsetcursorarrow(NODE *)
{
	wxWindow* mainWindow = GetMainWxWindow();

	if (mainWindow != 0)
	{
		mainWindow->SetCursor(wxNullCursor);
	}
    return Unbound;
}

void init_cursors()
{
}
