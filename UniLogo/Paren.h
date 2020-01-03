#ifndef __PAREN_H__
#define __PAREN_H__

extern struct NODE *the_generation;

extern void untreeify_body(struct NODE *body);
extern void treeify_body(struct NODE *body);
extern void treeify_line(struct NODE *list);

#endif 
