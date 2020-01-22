#ifndef __MM_H__
#define __MM_H__

// types
struct NODE;

// global variables
extern class wxString mci_callback;
extern class wxString timer_callback[];

// function declarations
extern NODE *lmci(NODE *arg);
extern NODE *lmidiopen(NODE *arg);
extern NODE *lmidiclose(NODE *arg);
extern NODE *lmidimessage(NODE *arg);
extern NODE *lsound(NODE *arg);
extern NODE *lplaywave(NODE *args);
extern NODE *lsettimer(NODE *arg);
extern NODE *lcleartimer(NODE *arg);
extern bool IsAnyTimerActive();
extern void init_timers();
extern void halt_all_timers();
extern void clear_all_timers();
extern void uninitialize_timers();

#endif

