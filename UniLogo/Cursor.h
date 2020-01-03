#ifndef __CURSOR_H__
#define __CURSOR_H__

struct NODE;

// function declarations
extern void init_cursors();
extern NODE *lsetcursorwait(NODE *);
extern NODE *lsetcursorarrow(NODE *);

#endif 
