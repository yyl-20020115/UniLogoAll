#ifndef __SCREENWINDOW_H__
#define __SCREENWINDOW_H__

#ifdef _WINDOWS
  #include <windows.h>
#endif 

#include "LogoData.h"

#ifdef _WINDOWS
HWND GetScreenWindow();
HWND GetMainWindow();
HWND GetCommanderWindow();
#endif

class wxWindow * GetMainWxWindow();
class wxWindow * GetScreenWxWindow();
class wxWindow * GetEditorWxWindow();
class wxWindow * GetParentWindowForDialog();

int GetScreenHorizontalScrollPosition();
int GetScreenVerticalScrollPosition();
void SetScreenScrollPosition(int X, int Y);

bool IsEditorOpen();

// This is called when UniLogo attempts to load a file, such
// as one that was passed on the command line, and an error
// is encountered while evaluating the contents.
void OpenEditorToLocationOfFirstError(const wchar_t *FileName);

#ifdef _WINDOWS
// Returns the device context for the main drawing surface (the screen).
HDC GetScreenDeviceContext();

// Returns the device context for MemoryBitMap
HDC GetMemoryDeviceContext();

// Locates the window for which the message was generated and attempts to
// translate it as a keyboard accelerator (keyboard shortcut) using that
// window's accelerator table.
//
// Returns true if the message was translated (in which case it does
// not need to be handled further).  Returns false, otherwise (in which
// case it should be translated and dispatched).
//
// Note that this routine exists because the Logo engine is executed from
// the context of the message pump and we still want to be able to process
// user input while it's running.
bool TranslateKeyboardShortcut(MSG & Message);

#endif

// Returns a device context of a bitmap that is distinct from MemoryBitMap,
// but has the same characteristics (bit depth, width, height, etc.)
class wxDC * GetBackBufferDeviceContext();

// Returns a device context of the main bitmap.
class wxDC * GetWxMemoryDeviceContext();

// Returns a device context of the main bitmap.
class wxDC * GetWxScreenDeviceContext();

// Instructs the UI to update its state to reflect that UniLogo has either
// begin or stopped executing Logo instructions.
void UpdateUiExecutionState();

void OpenStatusWindow();
void CloseStatusWindow();
class CStatusDialog * GetStatusDialog();

void AdjustScrollPositionToZoomFactor(FLONUM NewZoomFactor);
void UndockCommanderWindow();
void DockCommanderWindow();
int  ShowEditorForFile(const wchar_t *FileName, NODE *args);

// ShowProcedureMiniEditor is called when TO is executed and
// the input is expected to come from stdin (which is typically
// implemented as a modal dialog box.
//
// ToLine     - A text buffer that holds the TO instruction that
//              is being executed.
// ReadBuffer - A buffer to hold a new definition that was read.
//
void
ShowProcedureMiniEditor(
    const wxString&        ToLine,
    class CDynamicBuffer & ReadBuffer
    );

void TraceOutput(const wchar_t * FormatString, ...);

#endif
