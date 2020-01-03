#ifndef __EVAL_H__
#define __EVAL_H__

#include "LogoCore.h"

// functions
extern NODE *load_procedure_if_necessary(NODE * ProcNode);
extern NODE *err_eval_driver(NODE *seq);
extern NODE *spop(NODE *stack);
extern NODE *spush(NODE *obj, NODE *stack);
extern void eval_driver(NODE *line);
extern NODE *lapply(NODE *args);
extern NODE *lqm(NODE *args);
extern NODE *llocal(NODE *args);
extern bool process_special_conditions(void);
extern void do_execution(const wchar_t *string);
extern void start_execution(void);
extern void stop_execution(void);
extern bool is_executing(void);
extern void uninitialize_eval(void);


// global variables
extern FIXNUM repcountup;
extern long long eval_count;
extern bool stepflag;
extern bool traceflag;

extern NODE *fun;
extern NODE *ufun;
extern NODE *last_ufun;
extern NODE *this_line;
extern NODE *last_line;
extern NODE *didnt_get_output;
extern NODE *output_node;
extern NODE *last_call;
extern NODE *didnt_output_name;
extern CTRLTYPE stopping_flag;
extern FIXNUM tailcall;
extern FIXNUM dont_fix_ift;

extern FIXNUM g_ValueStatus;
const FIXNUM VALUE_STATUS_NotOk               = 0; // no value allowed (body of cmd)
const FIXNUM VALUE_STATUS_Required            = 1; // value required (arg)
const FIXNUM VALUE_STATUS_OutputOk            = 2; // OUTPUT ok (body of oper)
const FIXNUM VALUE_STATUS_MaybeOk             = 3; // val or no val ok (fn inside catch)
const FIXNUM VALUE_STATUS_NoValueInMacro      = 4; // no value in macro (repeat)
const FIXNUM VALUE_STATUS_ValueMaybeOkInMacro = 5; // value maybe ok in macro (catch)

extern int g_CatchErrorCount;

#endif 
