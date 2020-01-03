#ifndef __DEVICES_H__
#define __DEVICES_H__

struct NODE;

enum class KEYBOARDCAPTURE:int
{
    Off,
    KeyDown,
    KeyDownKeyUp,
};

// global variables
//extern class wxString keyboard_status;
extern class wxString keyboard_keydown;
extern class wxString keyboard_keyup;
extern class wxString mouse_lbuttondown;
extern class wxString mouse_lbuttonup;
extern class wxString mouse_rbuttondown;
extern class wxString mouse_rbuttonup;
extern class wxString mouse_mousemove;

extern void UninstallKeyboardAndMouseEvents();

extern KEYBOARDCAPTURE KeyboardCapture;
extern int keyboard_value;
extern bool MouseCaptureIsEnabled;
extern int mouse_posx;
extern int mouse_posy;

// function declarations
extern bool CheckOnScreenControls();
extern NODE *ldebugwindows(NODE *args);
extern NODE *lmouseon(NODE *args);
extern NODE *lmouseoff(NODE *arg);
extern NODE *lkeyboardon(NODE *args);
extern NODE *lkeyboardoff(NODE *arg);

extern NODE *lportopen(NODE *args);
extern NODE *lportclose(NODE *arg);
extern NODE *lportreadchar(NODE *arg);
extern NODE *lportwritechar(NODE *args);
extern NODE *lportreadarray(NODE *args);
extern NODE *lportwritearray(NODE *args);
extern NODE *lportflush(NODE *args);
extern NODE *lportmode(NODE *args);
extern NODE *linportb(NODE *args);
extern NODE *loutportb(NODE *args);
extern NODE *linport(NODE *args);
extern NODE *loutport(NODE *args);
extern NODE *lingameport(NODE *args);

#endif // __DEVWIND_H_
