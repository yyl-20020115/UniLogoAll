#ifndef __LISTS_H__
#define __LISTS_H__

extern NODE *list_arg(NODE *args);
extern NODE *lbutfirst(NODE *args);
extern NODE *lbutlast(NODE *args);
extern NODE *lfirst(NODE *args);
extern NODE *lfirsts(NODE *args);
extern NODE *lbfs(NODE *args);
extern NODE *llast(NODE *args);
extern NODE *llist(NODE *args);
extern NODE *lemptyp(NODE *arg);
extern NODE *lascii(NODE *args);
extern NODE *lrawascii(NODE *args);
extern NODE *lbackslashedp(NODE *args);
extern NODE *lchar(NODE *args);
extern NODE *lcount(NODE *args);
extern NODE *lfput(NODE *args);
extern NODE *llput(NODE *args);
extern NODE *string_arg(NODE *args);
extern NODE *lword(NODE *args);
extern NODE *lsentence(NODE *args);
extern NODE *lwordp(NODE *arg);
extern NODE *llistp(NODE *arg);
extern NODE *lnumberp(NODE *arg);
extern NODE *larrayp(NODE *arg);
extern NODE *lmemberp(NODE *args);
extern NODE *lsubstringp(NODE *args);
extern NODE *lmember(NODE *args);
extern NODE *integer_arg(NODE *args);
extern NODE *ranged_integer_arg(NODE *args, int MinValue, int MaxValue);
extern NODE *nonnegative_int_arg(NODE *args);
extern NODE *positive_int_arg(NODE *args);
extern FIXNUM int_arg(NODE *args);
extern NODE *litem(NODE *args);
extern NODE *lsetitem(NODE *args);
extern NODE *l_setitem(NODE *args);
extern NODE *larray(NODE *args);
extern FLONUM float_arg(NODE *args);
extern NODE *lform(NODE *args);
extern NODE *l_setfirst(NODE *args);
extern NODE *l_setbf(NODE *args);

#endif

