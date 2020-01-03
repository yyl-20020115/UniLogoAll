#ifndef __LOGO_MATH_H__
#define __LOGO_MATH_H__

extern int numberp(NODE *snd);
extern NODE *lrandom(NODE *arg);
extern NODE *lrerandom(NODE *arg);
extern NODE *ladd(NODE *args);
extern NODE *lsub(NODE *args);
extern NODE *lmul(NODE *args);
extern NODE *ldivide(NODE *args);
extern NODE *lremainder(NODE *args);
extern NODE *lmodulo(NODE *args);
extern NODE *lbitand(NODE *args);
extern NODE *lbitor(NODE *args);
extern NODE *lbitxor(NODE *args);
extern NODE *lashift(NODE *args);
extern NODE *llshift(NODE *args);
extern NODE *lbitnot(NODE *args);
extern NODE *lsin(NODE *args);
extern NODE *lasin(NODE *args);
extern NODE *lcos(NODE *args);
extern NODE *lacos(NODE *args);
extern NODE *ltan(NODE *args);
extern NODE *latan(NODE *args);
extern NODE *lradsin(NODE *args);
extern NODE *lradasin(NODE *args);
extern NODE *lradcos(NODE *args);
extern NODE *lradacos(NODE *args);
extern NODE *lradtan(NODE *args);
extern NODE *lradatan(NODE *args);
extern NODE *lsqrt(NODE *args);
extern NODE *linteg(NODE *args);
extern NODE *lround(NODE *args);
extern NODE *lexp(NODE *args);
extern NODE *llog10(NODE *args);
extern NODE *lln(NODE *args);
extern NODE *lpower(NODE *args);
extern NODE *true_or_false(bool tf);
extern NODE *llessp(NODE *args);
extern NODE *llessequalp(NODE *args);
extern NODE *lgreaterp(NODE *args);
extern NODE *lgreaterequalp(NODE *args);
extern long compare_node(NODE *n1, NODE *n2, bool ignorecase);
extern bool equalp_help(NODE *arg1, NODE *arg2, bool ingc);
extern NODE *lequalp(NODE *args);
extern NODE *lnotequalp(NODE *args);
extern NODE *l_eq(NODE *args);
extern NODE *lbeforep(NODE *args);

#endif
