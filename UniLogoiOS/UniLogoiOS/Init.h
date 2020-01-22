#ifndef __INIT_H__
#define __INIT_H__

#include "LocalizedNode.h"

struct NODE;

extern CLocalizedNode Truex;
extern CLocalizedNode Falsex;
extern NODE *Left_Paren;
extern NODE *Right_Paren;
extern NODE *Null_Word;
extern CLocalizedNode Toplevel;
extern CLocalizedNode System;
extern CLocalizedNode Error;
extern CLocalizedNode End;
extern CLocalizedNode Redefp;
extern CLocalizedNode Caseignoredp;
extern CLocalizedNode Erract;
extern CLocalizedNode Printdepthlimit;
extern CLocalizedNode Printwidthlimit;
extern NODE *Pause;
extern NODE *If;
extern NODE *Ifelse;
extern CLocalizedNode To;
extern NODE *Macro;
extern NODE *Unbound;
extern NODE *Minus_Sign;
extern NODE *Minus_Tight;
extern CLocalizedNode Startup;
extern NODE *Query;
extern NODE *Output;
extern NODE *Stop;
extern NODE *Goto;
extern NODE *Tag;

extern NODE *g_ParseErrorNotEnoughInputs;

extern void init(void);
extern void uninit(void);

#endif

