#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #ifdef _WINDOWS
      #include <windows.h>

      #ifdef min // MS compilers #define min in windows.h
        #undef min
      #endif
   #endif

   #include <string.h>
   #include <algorithm>

   #include "Devices.h"
   #include "StringPrintedNode.h"
   #include "ArgumentUtils.h"
   #include "LogoCore.h"
   #include "Graphics.h"
   #include "Graphwin.h"
   #include "Init.h"
   #include "LogoData.h"
   #include "LocalizedStrings.h"
   #include "Lists.h"
   #include "Eval.h"
   #include "Error.h"
   #include "ScreenWindow.h"
   #include "MessageBox.h"
//   #include "debugheap.h"
#endif

// global variables
KEYBOARDCAPTURE KeyboardCapture = KEYBOARDCAPTURE::Off; // Flag to signal Keyboard is enabled

int keyboard_value = 0;                // Value of Keyboard key
bool MouseCaptureIsEnabled = false;    // Flag to signal Mouse is enabled
int mouse_posx = 0;                    // Value of Mouse position x
int mouse_posy = 0;                    // Value of Mouse position y

wxString mouse_lbuttondown;        // Mouse Left button down cb
wxString mouse_lbuttonup;          // Mouse Right button up cb
wxString mouse_rbuttondown;        // Mouse Left button down cb
wxString mouse_rbuttonup;          // Mouse Right button up cb
wxString mouse_mousemove;          // Mouse Move cb
wxString keyboard_keydown;         // KeyBoard key down
wxString keyboard_keyup;           // KeyBoard key up

#ifdef _WINDOWS
static HANDLE ComId =  0;
#endif
static bool   ComIsOpen = false;

// function definitions
void UninstallKeyboardAndMouseEvents()
{
	//keyboard_status.clear();
	keyboard_keydown.clear();
	keyboard_keyup.clear();
	mouse_lbuttondown.clear();
	mouse_lbuttonup.clear();
	mouse_rbuttondown.clear();
	mouse_rbuttonup.clear();
	mouse_mousemove.clear();

}

NODE *lmouseon(NODE *args)
{
	mouse_lbuttondown = ArgumentUtils::cnv_strnode_string(args);

	mouse_lbuttonup = ArgumentUtils::cnv_strnode_string(args = cdr(args));

	mouse_rbuttondown = ArgumentUtils::cnv_strnode_string(args = cdr(args));

	mouse_rbuttonup = ArgumentUtils::cnv_strnode_string(args = cdr(args));

	mouse_mousemove = ArgumentUtils::cnv_strnode_string(args = cdr(args));

    // most of mouse code is in DEFWNDPROC when this flag is on
    MouseCaptureIsEnabled = true;

    return Unbound;
}

NODE *lmouseoff(NODE *)
{
    // tell handler not to do anything with messages for mouse
    MouseCaptureIsEnabled = false;

    return Unbound;
}

void mouse_uninit()
{

}

NODE *lkeyboardon(NODE *args)
{
    // get args
    if (cdr(args) == NIL)
    {
		keyboard_keyup = ArgumentUtils::cnv_strnode_string(args);

        // most keyboard processing is done in DEFWNDPROC
        KeyboardCapture = KEYBOARDCAPTURE::KeyDown;
    }
    else
    {
		keyboard_keydown = ArgumentUtils::cnv_strnode_string(args);

		keyboard_keyup = ArgumentUtils::cnv_strnode_string( cdr(args));

        // most keyboard processing is done in DEFWNDPROC
        KeyboardCapture = KEYBOARDCAPTURE::KeyDownKeyUp;

    }

    return Unbound;
}

NODE *lkeyboardoff(NODE *)
{
    // tell handler not to do anything with messages for keyboard
    KeyboardCapture = KEYBOARDCAPTURE::Off;

    return Unbound;
}

void keyboard_uninit()
{

}

NODE *lmousepos(NODE *)
{

    // return current mouse position
    return cons_list(
        make_intnode(  (mouse_posx + GetScreenHorizontalScrollPosition()) / the_zoom - xoffset),
        make_intnode(-((mouse_posy + GetScreenVerticalScrollPosition())   / the_zoom - yoffset)));

}

NODE *lkeyboardvalue(NODE *)
{
    // return current keyboard value
    return make_intnode(keyboard_value);
}

NODE *lportclose(NODE *)
{
    // if port closed output error else close it
    if (!ComIsOpen)
    {
        ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_CANTCLOSEPORT"));
    }
    else
    {
        ComIsOpen = false;
#ifdef _WINDOWS
        CloseHandle(ComId);
#endif
    }

    return Unbound;
}

NODE *lportopen(NODE *args)
{
    CStringPrintedNode comport(car(args));

    // if port open output error else open it
    if (ComIsOpen)
    {
        ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTALREADYOPEN"));
    }
    else
    {
#ifdef _WINDOWS
        ComId = CreateFile(
			(const wxString&)comport,
            GENERIC_READ | GENERIC_WRITE,
            0,
            NULL,
            OPEN_EXISTING,
            0,
            NULL);

        SetupComm(ComId, 4096, 4096);

        SetCommMask(ComId, 0);

        PurgeComm(ComId, PURGE_TXABORT | PURGE_RXABORT | PURGE_TXCLEAR | PURGE_RXCLEAR);

        COMMTIMEOUTS CommTimeOuts;
        CommTimeOuts.ReadIntervalTimeout = MAXDWORD;
        CommTimeOuts.ReadTotalTimeoutMultiplier = 0;
        CommTimeOuts.ReadTotalTimeoutConstant = 0;
        CommTimeOuts.WriteTotalTimeoutMultiplier = 0;
        CommTimeOuts.WriteTotalTimeoutConstant = 0;
        SetCommTimeouts(ComId, &CommTimeOuts);

        DCB dcb;
        GetCommState(ComId, &dcb); // If we don't do this it won't work in Win95 !!!
        SetCommState(ComId, &dcb);

        if (ComId < 0)
        {
            ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_CANTOPENPORT"));
        }
        else
        {
            ComIsOpen = true;
        }
#endif
    }

    return Unbound;
}

NODE *lportflush(NODE * /* args */)
{
    if (!ComIsOpen)
    {
        ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTNOTOPEN"));
    }
    else
    {
#ifdef _WINDOWS
        int err = FlushFileBuffers(ComId);
        if (err == 0)
        {
            ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_CANTFLUSHPORT"));
        }
#endif
    }

    return Unbound;
}

NODE *lportmode(NODE *args)
{
    CStringPrintedNode commode(car(args));

    // if closed output error else set mode
    if (!ComIsOpen)
    {
        ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTNOTOPEN"));
    }
    else
    {
#ifdef _WINDOWS
        // build dcb, if no error continue
		DCB dcb = { 0 };
        //memset(&dcb, 0, sizeof(DCB));
        dcb.DCBlength = sizeof(DCB);
        int err = BuildCommDCB((const wxString&)commode, &dcb);

        if (err == 0)
        {
            ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_CANTDCBONPORT"));
        }
        else
        {
            // now set Id in dcb and set the state
            DCB dcbold;

            GetCommState(ComId, &dcbold);

            dcbold.BaudRate = dcb.BaudRate;
            dcbold.ByteSize = dcb.ByteSize;
            dcbold.Parity   = dcb.Parity;
            dcbold.StopBits = dcb.StopBits;

            err = SetCommState(ComId, &dcbold);
            if (err == 0)
            {
                ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_CANTSETPORT"));
            }
        }
#endif
    }

    return Unbound;
}

static
int min3(int a, int b, int c)
{
    return std::min(std::min(a, b), c);
}

NODE *lportwritearray(NODE *args)
{
    NODE * val = nonnegative_int_arg(args);
    NODE * obj = cadr(args);

    while (nodetype(obj) != ARRAY && NOT_THROWING)
    {
        setcar(cdr(args), err_logo(ERR_TYPES::BAD_DATA, obj));
        obj = cadr(args);
    }

    if (NOT_THROWING)
    {
        // if closed the error, else continue
        if (!ComIsOpen)
        {
            ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTNOTOPEN"));
        }
        else
        {
            // get min of max array and the array
			wchar_t txbuffer[MAX_BUFFER_SIZE + 1] = { 0 };
            int count = min3((int)getint(val), getarrdim(obj), sizeof(txbuffer)/sizeof(wchar_t));

            // fill buffer with elements of the array
            for (int i = 0; i < count; i++)
            {
                NODE * item = getarrptr(obj)[i];
                NODE * intItem = cnv_node_to_intnode(item);
                if (nodetype(intItem) == INTEGER)
                {
                    txbuffer[i] = (int)getint(intItem);
                }
                else
                {
                    // This NODE value could be coerced into a byte.
                    // In this case, it would be more correct to throw a
                    // BAD_DATA error, but that could break compatibility
                    // with older programs.  Instead we replace it with a
                    // value that is likely to be "safe" for COM ports.
                    txbuffer[i] = L' ';
                }
                gcref(intItem);
            }

#ifdef _WINDOWS
            // now write buffer
            DWORD errorCode;
            ClearCommError(ComId, &errorCode, NULL);

            DWORD actual;
            int status = WriteFile(ComId, txbuffer, count, &actual, NULL);

            // if problem GetComError will Put up Message box
            if (status == 0)
            {
                ClearCommError(ComId, &errorCode, NULL);
            }

            // return byte count sent
            return make_intnode(status);
#endif
        }
    }

    return Unbound;
}

NODE *lportreadarray(NODE *args)
{
    NODE * val = nonnegative_int_arg(args);
    NODE * obj = cadr(args);
    val=val;
    while ((obj == NIL || obj == Null_Word) && NOT_THROWING)
    {
        setcar(cdr(args), err_logo(ERR_TYPES::BAD_DATA, obj));
        obj = cadr(args);
    }

    if (NOT_THROWING)
    {
        if (nodetype(obj) == ARRAY)
        {
            // if closed the error, else continue
            if (!ComIsOpen)
            {
                ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTNOTOPEN"));
            }
            else
            {
                // don't overflow buffer

#ifdef _WINDOWS
                wchar_t rxbuffer[MAX_BUFFER_SIZE + 1] = { 0 };
                int count = min3(getarrdim(obj), getint(val), sizeof(rxbuffer)/sizeof(wchar_t));
                // Clear any errors
                DWORD errorCode;
                COMSTAT Stat;
                ClearCommError(ComId, &errorCode, &Stat);

                // do the read (let it fail if nothing is there, it should not hang)
                DWORD actual;
                ReadFile(ComId, rxbuffer, count, &actual, NULL);

                // now fill in the array
                for (DWORD i = 0; i < actual; i++)
                {
                    // Free whatever value happens to be in the array.
                    deref(getarrptr(obj)[i]);

                    // Set the new value.
                    getarrptr(obj)[i] = vref(make_intnode(rxbuffer[i]));
                }

                // return actual transfered, which may be 0.
                return make_intnode(actual);
#endif
            }
        }
    }

    return make_intnode(0);
}

NODE *lportwritechar(NODE *args)
{
    // get arg
    wchar_t txchar[1]={0};
    txchar[0] = (wchar_t)getint(nonnegative_int_arg(args));

    // if not open output error, else continue

    if (!ComIsOpen)
    {
        ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTNOTOPEN"));
    }
    else
    {
#ifdef _WINDOWS
        // write the 1 byte
        DWORD status;
        if (!WriteFile(ComId, txchar, 1, &status, NULL))
        {
            status = -1;
        }

        // if problem GetComError will Put up Message box
        if (status != 1)
        {
            DWORD errorCode;
            ClearCommError(ComId, &errorCode, NULL);
        }

        // return byte count sent
        return make_intnode(status);
#endif
    }

    return Unbound;
}

NODE *lportreadchar(NODE *)
{
    // if closed output error, else continue
    if (!ComIsOpen)
    {
        ShowErrorMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_PORTNOTOPEN"));
    }
    else
    {
#ifdef _WINDOWS
        // Clear Comm Error in case last operation failed otherwise we won't get anything
        DWORD errorCode;
        ClearCommError(ComId, &errorCode, NULL);

        // ReadFile will return immediately even if there is nothing to read
		wchar_t rxchar;
        DWORD actual;
        ReadFile(ComId, &rxchar, 1, &actual, NULL);

        // if something was read then return it else return -1
        if (actual == 1)
        {
            return make_intnode(rxchar);
        }
        else
        {
            return make_intnode(-1);
        }
#endif
    }

    return Unbound;
}

NODE *loutportb(NODE *args)
{
    // get args
    FIXNUM portid = getint(nonnegative_int_arg(args));
    FIXNUM value = getint(nonnegative_int_arg(cdr(args)));
    portid=portid;
    value=value;
    return Unbound;
}

// A special case for reading the joystick port.
// Reading it directly is impossible from user-mode,
// but we can read what's used to be available at 0x201 using the Win32 API.
static int simulate_inport(int portid) {
    int value = 0;
    if (portid == 0x201)
    {
#ifdef _WINDOWS
        // hardware port for the joystick port
        UINT totalJoysticks = joyGetNumDevs();
        if (totalJoysticks != 0)
        {
            JOYCAPS joystickCapabilities;
        
            MMRESULT result = joyGetDevCaps(
                JOYSTICKID1,
                &joystickCapabilities,
                sizeof joystickCapabilities);
            if (result == JOYERR_NOERROR)
            {
                JOYINFOEX joystickInfo;
                joystickInfo.dwSize  = sizeof joystickInfo;
                joystickInfo.dwFlags = JOY_RETURNBUTTONS;
            
                result = joyGetPosEx(JOYSTICKID1, &joystickInfo);
                if (result == JOYERR_NOERROR)
                {
                    // Reassemble the original value from the hardware port
                    // It doesn't have to be exact, just good enough.
                    int button1Released = (joystickInfo.dwButtons & JOY_BUTTON1) == 0;
                    int button2Released = (joystickInfo.dwButtons & JOY_BUTTON2) == 0;
                    int button3Released = (joystickInfo.dwButtons & JOY_BUTTON3) == 0;
                    int button4Released = (joystickInfo.dwButtons & JOY_BUTTON4) == 0;

                    value =
                        (button1Released << 4) |
                        (button2Released << 5) |
                        (button3Released << 6) |
                        (button4Released << 7);
                }
            }
        }
#endif
    }

    return value;
}

NODE *linportb(NODE *args)
{
    FIXNUM portid = getint(nonnegative_int_arg(args));
    unsigned char value = simulate_inport((int)portid) & 0xFF;

    return make_intnode(value);
}

NODE *loutport(NODE *args)
{
    // get args
    FIXNUM portid = getint(nonnegative_int_arg(args));
    FIXNUM value = getint(nonnegative_int_arg(cdr(args)));
    portid=portid;
    value=value;
    return Unbound;
}

NODE *linport(NODE *args)
{
    FIXNUM portid = getint(nonnegative_int_arg(args));

    short value = simulate_inport((int)portid) & 0xFFFF;
    return make_intnode(value);
}

NODE *lingameport(NODE *args)
{
    FIXNUM mask = getint(nonnegative_int_arg(args));
    mask=mask;
    // The second input was a "portid" in MSWLogo and documented as the
    // hardware port to read from.  In MSWLogo, this function was implemented
    // using x86 assembly which executed, among other things, "cli" to suspend
    // interrupts, an "in" instruction to direct directly from the hardware
    // port, then "sti" to restore interrupts.  This is all now illegal from
    // user mode, so UniLogo uses the "joy" API to emulate it.  The portid
    // input is parsed for backward compatibility.
    if (cdr(args) != NIL)
    {
        getint(nonnegative_int_arg(cdr(args)));
    }

    int value = -1;
#ifdef _WINDOWS
    UINT totalJoysticks = joyGetNumDevs();
    if (totalJoysticks != 0)
    {
        JOYCAPS joystickCapabilities;

        MMRESULT result = joyGetDevCaps(
            JOYSTICKID1,
            &joystickCapabilities,
            sizeof joystickCapabilities);
        if (result == JOYERR_NOERROR)
        {
            JOYINFOEX joystickInfo;
            joystickInfo.dwSize  = sizeof joystickInfo;
            joystickInfo.dwFlags = JOY_RETURNX | JOY_RETURNY | JOY_RETURNZ | JOY_RETURNR;

            result = joyGetPosEx(JOYSTICKID1, &joystickInfo);
            if (result == JOYERR_NOERROR)
            {
                if (mask == 1)
                {
                    if (joystickCapabilities.wXmin != joystickCapabilities.wXmax)
                    {
                        value =
                            (joystickInfo.dwXpos - joystickCapabilities.wXmin) * 1000 /
                            (joystickCapabilities.wXmax - joystickCapabilities.wXmin);
                    }
                }
                else if (mask == 2)
                {
                    if (joystickCapabilities.wYmin != joystickCapabilities.wYmax)
                    {
                        value = 
                            (joystickInfo.dwYpos - joystickCapabilities.wYmin) * 1000 /
                            (joystickCapabilities.wYmax - joystickCapabilities.wYmin);
                    }
                }
                else if (mask == 4)
                {
                    if (joystickCapabilities.wRmin != joystickCapabilities.wRmax)
                    {
                        value = 
                            (joystickInfo.dwRpos - joystickCapabilities.wRmin) * 1000 /
                            (joystickCapabilities.wRmax - joystickCapabilities.wRmin);
                    }
                }
                else if (mask == 8)
                {
                    if (joystickCapabilities.wZmin != joystickCapabilities.wZmax)
                    {
                        value = 
                            (joystickInfo.dwZpos - joystickCapabilities.wZmin) * 1000 /
                            (joystickCapabilities.wZmax - joystickCapabilities.wZmin);
                    }
                }
            }
        }
    }
#endif
    return make_intnode(value);
}
