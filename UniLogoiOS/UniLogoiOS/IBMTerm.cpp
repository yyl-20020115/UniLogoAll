#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "IBMTerm.h"
   #include "Error.h"
   #include "WorkSpace.h"
   #include "LogoData.h"
   #include "Graphwin.h"
   #include "LogoEventQueue.h"

   #include "LocalizedStrings.h"
#endif
#ifdef LINUX
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <linux/kd.h>
#endif

bool check_stop(bool scan_for_messages)
{
    if (scan_for_messages)
    {
        MyMessageScan();
    }

    if (IsTimeToHalt)
    {
		if (!CheckDoingEvents()) {
			IsTimeToHalt = false;
		}
        
        emptyqueue();
        err_logo(ERR_TYPES::STOP_ERROR, NIL);
        return true;
    }

    if (IsTimeToPause)
    {
        IsTimeToPause = false;
        to_pending = false;
        lpause(NIL);
    }

    return false;
}


void pen_down()
{
    PENSTATE & penState = GetPenStateForSelectedTurtle();

    penState.Mode      = COPY_PUT;
    penState.IsErasing = false;
}

void pen_reverse()
{
    PENSTATE & penState = GetPenStateForSelectedTurtle();

    penState.Mode      = XOR_PUT;
    penState.IsErasing = false;
}

void pen_erase()
{
    PENSTATE & penState = GetPenStateForSelectedTurtle();

    if (!penState.IsErasing)
    {
        penState.Mode      = COPY_PUT;
        penState.IsErasing = true;
    }
}

void set_list_pen_pattern(NODE *arg)
{
    unsigned char pat[8];

    NODE * cur_num = arg;
    for (int count = 0; count < 8; count++)
    {
        NODE * temp = cnv_node_to_numnode(car(cur_num));
        pat[count] = (char) getint(temp);
        if (cdr(cur_num) != NIL)
        {
            cur_num = cdr(cur_num);
        }
        gcref(temp);
    }
    // setfillpattern(pat, getcolor());
}

void get_pen_pattern(char * /* pat */)
{
    // getfillpattern(pat);
}

NODE *get_node_pen_pattern()
{
    /*
      unsigned char pat[8];

      getfillpattern(pat);
      return(cons(make_intnode((FIXNUM)(pat[0])),
          cons(make_intnode((FIXNUM)(pat[1])),
          cons(make_intnode((FIXNUM)(pat[2])),
          cons(make_intnode((FIXNUM)(pat[3])),
          cons(make_intnode((FIXNUM)(pat[4])),
          cons(make_intnode((FIXNUM)(pat[5])),
          cons(make_intnode((FIXNUM)(pat[6])),
          cons(make_intnode((FIXNUM)(pat[7])),
          NIL)))))))));
    */
    return NIL;
}

NODE *get_node_pen_mode()
{
    const wchar_t * mode;

    if (GetPenStateForSelectedTurtle().IsErasing)
    {
        mode = GetResourceString(L"LOCALIZED_PENMODE_ERASE");
    }
    else if (GetPenStateForSelectedTurtle().Mode == XOR_PUT)
    {
        mode = GetResourceString(L"LOCALIZED_PENMODE_REVERSE");
    }
    else
    {
        mode = GetResourceString(L"LOCALIZED_PENMODE_PAINT");
    }

    return make_static_strnode(mode);
}

void erase_screen()
{
    ibm_clear_screen();
}

bool button()
{
    return false;
}


//void tone(FIXNUM frequency, FIXNUM duration)
//{
//    if (frequency < 37)
//    {
//        frequency = 37;
//    }
//
//#ifdef _WINDOWS
//    // use the Win32 Beep
//    Beep(frequency, duration);
//
//#endif
//}
