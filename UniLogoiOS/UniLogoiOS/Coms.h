#ifndef __COMS_H__
#define __COMS_H__

#include "LogoCore.h"

// function variables
extern NODE *make_cont(labels cont, NODE *val);
extern NODE *loutput(NODE *arg);
extern NODE *lstop(NODE *arg);
extern NODE *lthrow(NODE *arg);
extern NODE *lcatch(NODE *args);
extern NODE *lgoto(NODE *arg);
extern NODE *ltag(NODE *arg);
extern bool  boolean_arg(NODE *args);
extern NODE *lnot(NODE *args);
extern NODE *land(NODE *args);
extern NODE *lor(NODE *args);
extern NODE *runnable_arg(NODE *args);
extern NODE *lif(NODE *args);
extern NODE *lifelse(NODE *args);
extern NODE *lrun(NODE *args);
extern NODE *lrunresult(NODE *args);
extern NODE *lrepeat(NODE *args);
extern NODE *lrepcount(NODE *args);
extern NODE *lforever(NODE *args);
extern NODE *ltest(NODE *args);
extern NODE *liftrue(NODE *args);
extern NODE *liffalse(NODE *args);
extern NODE *lbye(NODE *args);
extern NODE *lwait(NODE *args);
extern NODE *ltime(NODE *args);
extern NODE *ltimemilli(NODE *args);
extern NODE *lshell(NODE *args);

// global variables
extern FIXNUM ift_iff_flag;



#endif // __COMS_H_
