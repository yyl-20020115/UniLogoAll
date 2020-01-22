#ifndef __WORKSPACE_H__
#define __WORKSPACE_H__

#include <stdio.h> // for fpos_t
struct NODE;

// functions
extern void untreeify_procnode(NODE * procnode);
extern NODE *ltext(NODE *args);
extern NODE *lfulltext(NODE *args);
extern NODE *ldefine(NODE *args);
extern NODE *ldefmacro(NODE *args);
extern NODE *anonymous_function(NODE *text);
extern NODE *lto(NODE *args);
extern NODE *lmacro(NODE *args);
extern NODE *lmake(NODE *args);
extern NODE *lcontents(NODE *arg);
extern NODE *lstepped(NODE *arg);
extern NODE *ltraced(NODE *arg);
extern NODE *lburied(NODE *arg);
extern NODE *lprocedures(NODE *arg);
extern NODE *lnames(NODE *arg);
extern NODE *lplists(NODE *arg);
extern NODE *lpo(NODE *arg);
extern NODE *lpot(NODE *arg);
extern NODE *lerase(NODE *arg);
extern NODE *lbury(NODE *arg);
extern NODE *ltrace(NODE *arg);
extern NODE *lstep(NODE *arg);
extern NODE *lunbury(NODE *arg);
extern NODE *luntrace(NODE *arg);
extern NODE *lunstep(NODE *arg);
extern NODE *ledit(NODE *args);
extern bool endedit(void);
extern bool something_is_unburied();
extern NODE *lthing(NODE *args);
extern NODE *lnamep(NODE *args);
extern NODE *lprocedurep(NODE *args);
extern NODE *lproplistp(NODE *args);
extern NODE *lprimitivep(NODE *args);
extern NODE *ldefinedp(NODE *args);
extern NODE *lmacrop(NODE *args);
extern NODE *larity(NODE *args);
extern NODE *lcopydef(NODE *args);
extern NODE *get_all_proc_names();
extern NODE *get_all_variable_names();


// global variables
extern bool   to_pending;
extern bool   yield_flag;
extern bool   IsDirty;
extern bool   bExpert;

extern long int g_CharactersSuccessfullyParsedInEditor;

#endif 
