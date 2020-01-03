#ifndef __TERM_H__
#define __TERM_H__

struct NODE;
extern NODE *lcleartext(NODE *args);
extern NODE *lcursor(NODE *args);
extern NODE *lsetcursor(NODE *args);
extern NODE *lsetmargins(NODE *args);
extern NODE *lstandout(NODE *args);

#endif 
