#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "ActiveArea.h"
   #include "UniLogo.h"
   #include "LogoCore.h"
   #include "Graphics.h"
   #include "Eval.h"
   #include "Error.h"
   #include "Utils.h"
   #include "LogoData.h"
   #include "Init.h"
//   #include "debugheap.h"
#endif

// Active area dimensions
int g_PrinterAreaXLow;
int g_PrinterAreaXHigh;
int g_PrinterAreaYLow;
int g_PrinterAreaYHigh;
int g_PrinterAreaPixels;

bool IsActiveAreaOneToOneWithScreen()
{
    return ((g_PrinterAreaXLow  == -BitMapWidth  / 2) &&
        (g_PrinterAreaXHigh == +BitMapWidth  / 2) &&
        (g_PrinterAreaYLow  == -BitMapHeight / 2) &&
        (g_PrinterAreaYHigh == +BitMapHeight / 2))
    ;
}

NODE *lsetactivearea(NODE *args)
{
    NODE * vector = int_vector_4_arg(args);
    while (NOT_THROWING)
    {
        // All arguments are integers.
        const NODE * xLowNode  = car(vector);
        const NODE * yLowNode  = car(cdr(vector));
        const NODE * xHighNode = car(cdr(cdr(vector)));
        const NODE * yHighNode = car(cdr(cdr(cdr(vector))));

        const int xLow  =(int) getint(xLowNode);
        const int yLow  =(int) getint(yLowNode);
        const int xHigh =(int) getint(xHighNode); 
        const int yHigh =(int) getint(yHighNode);

        // Confirm that the four integers defines a positive area.
        if (xLow < xHigh && yLow < yHigh)
        {
            // Now that we have validated the input, we can commit to it
            g_PrinterAreaXLow  = xLow;
            g_PrinterAreaYLow  = yLow;
            g_PrinterAreaXHigh = xHigh; 
            g_PrinterAreaYHigh = yHigh; 

            SetConfigurationInt(L"Printer.XLow",   g_PrinterAreaXLow);
            SetConfigurationInt(L"Printer.XHigh",  g_PrinterAreaXHigh);
            SetConfigurationInt(L"Printer.YLow",   g_PrinterAreaYLow);
            SetConfigurationInt(L"Printer.YHigh",  g_PrinterAreaYHigh);
            break;
        }

        // This vector of four integers does not define a positive area.
        // Throw a recoverable bad data error to give the programmer
        // a chance to replace it with good data.
        setcar(args, err_logo(ERR_TYPES::BAD_DATA, vector));
        vector = int_vector_4_arg(args);
    }

    return Unbound;
}

NODE *lactivearea(NODE *)
{
    return cons_list(
        make_intnode((FIXNUM) g_PrinterAreaXLow),
        make_intnode((FIXNUM) g_PrinterAreaYLow),
        make_intnode((FIXNUM) g_PrinterAreaXHigh),
        make_intnode((FIXNUM) g_PrinterAreaYHigh));
}
