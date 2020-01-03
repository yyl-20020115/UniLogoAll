#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
    #include "Term.h"

    #include "StringPrintedNode.h"
    #include "Commander.h"
    #include "Init.h"
    #include "LogoData.h"
#endif

NODE *lcleartext(NODE *)
{
    ClearComboBox();
    return Unbound;
}


NODE *lcursor(NODE *)
{
    // return cons_list(
    //    make_intnode((FIXNUM)(x_coord-x_margin)),
    //    make_intnode((FIXNUM)(y_coord-y_margin)));

    return cons_list(make_intnode(0), make_intnode(0));
}

NODE *lsetcursor(NODE *  /*args*/)
{
    /*
      NODE *arg;

      arg = pos_int_vector_arg(args); // can now return floats
      if (NOT_THROWING)
      {
      x_coord = x_margin + getint(car(arg));
      y_coord = y_margin + getint(cadr(arg));

      ibm_gotoxy(x_coord, y_coord);

      fflush(stdout);
      }
    */
    return Unbound;
}

NODE *lsetmargins(NODE *  /*args*/)
{
    /*
      NODE *arg;

      arg = pos_int_vector_arg(args); // can now return floats
      if (NOT_THROWING)
      {
      x_margin = getint(car(arg));
      y_margin = getint(cadr(arg));
      lcleartext(NIL);
      }
    */
    return Unbound;
}

NODE *lstandout(NODE *args)
{
    CStringPrintedNode text(car(args));
    return make_strnode((const wxString&)text);
}
