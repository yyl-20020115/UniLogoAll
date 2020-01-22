#ifndef __ACTIVEAREA_H__
#define __ACTIVEAREA_H__

struct NODE;

// function definitions
extern bool IsActiveAreaOneToOneWithScreen(void);
extern NODE *lsetactivearea(NODE *arg);
extern NODE *lactivearea(NODE *arg);

// global variables
extern int g_PrinterAreaXLow;
extern int g_PrinterAreaXHigh;
extern int g_PrinterAreaYLow;
extern int g_PrinterAreaYHigh;
extern int g_PrinterAreaPixels;

#endif
