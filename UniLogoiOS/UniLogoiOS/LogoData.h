#ifndef __LOGODATA_H__
#define __LOGODATA_H__

#include "LogoCore.h"

extern wchar_t ecma_set(int ch);
extern wchar_t ecma_clear(int ch);
extern bool ecma_get(int ch);
extern void init_ecma_array(void);
extern bool is_special_character(wchar_t ch);
extern wchar_t *strnzcpy(wchar_t *dst, const wchar_t *src, size_t len);
extern wchar_t *word_strnzcpy(wchar_t * dst, NODE *kludge, size_t len);
extern wchar_t *noparity_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t *mend_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t *mend_nosemi(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t *quote_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t *colon_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t capital(wchar_t ch);
extern wchar_t uncapital(wchar_t ch);
extern wchar_t *low_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t *cap_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern wchar_t * NormalizeCaseForDisplay(wchar_t *dst, const wchar_t * src, size_t len);
extern wchar_t *noparitylow_strnzcpy(wchar_t * dst, const wchar_t * src, size_t len);
extern int low_strncmp(const wchar_t * s1, const wchar_t * s2, size_t len);
extern int noparity_strncmp(const wchar_t * s1, const wchar_t * s2, size_t len);
extern int noparitylow_strncmp(const wchar_t * s1, const wchar_t * s2, size_t len);
extern NODE *make_strnode_no_copy(const wchar_t *strptr, unsigned int *strhead, size_t len, NODETYPES typ);
extern NODE *make_strnode(const wchar_t *string, int len, NODETYPES typ, wchar_t * (*copy_routine) (wchar_t *, const wchar_t *, size_t));
extern NODE *make_strnode(const wchar_t *string);
extern NODE *make_strnode_from_wordlist(NODE * wordlist, int len, NODETYPES typ);
extern NODE *make_lowercase_strnode_from_strnode(NODE * OriginalNode);
extern void make_runparse(NODE *ndi);
extern NODE *make_quote(NODE *qnd);
extern NODE *maybe_quote(NODE *nd);
extern NODE *make_caseobj(NODE *cstrnd, NODE *obj);
extern NODE *make_colon(NODE *cnd);
extern NODE *make_intnode(FIXNUM i);
extern NODE *make_floatnode(FLONUM f);
extern NODE *cnv_node_to_intnode(NODE *ndi);
extern NODE *cnv_node_to_numnode(NODE *ndi);
extern NODE *cnv_node_to_strnode(NODE *nd);
extern NODE *make_static_strnode(const wchar_t *strptr);
extern NODE *cons(NODE *x, NODE *y);
extern NODE *cons_list(void);
extern NODE *cons_list(NODE * node1);
extern NODE *cons_list(NODE * node1, NODE * node2);
extern NODE *cons_list(NODE * node1, NODE * node2, NODE * node3);
extern NODE *cons_list(NODE * node1, NODE * node2, NODE * node3, NODE * node4);
extern NODE *cons_list(NODE * node1, NODE * node2, NODE * node3, NODE * node4, NODE * node5);
extern int list_length(const NODE * List);
extern NODE *make_array(int len);
extern NODE *llowercase(NODE *args);
extern NODE *luppercase(NODE *args);
extern NODE *getprop(NODE *plist, NODE *name, bool before);
extern NODE *lgprop(NODE *args);
extern NODE *lpprop(NODE *args);
extern NODE *lremprop(NODE *args);
extern NODE *lplist(NODE *args);
extern NODE *llogoversion(NODE *args);
extern bool variableIsTrue(NODE *variable);
extern bool isCaseIgnored();
extern bool canRedefinePrimitives();

#endif // __LOGODATA_H_
