#ifndef __IBMTERM_H__
#define __IBMTERM_H__

#include "LogoCore.h"

// Functions
extern bool check_stop(bool scan_for_messages);
extern void pen_down(void);
extern void pen_reverse(void);
extern void pen_erase(void);
extern void set_list_pen_pattern(NODE *arg);
extern void get_pen_pattern(char *pat);
extern NODE *get_node_pen_pattern(void);
extern NODE *get_node_pen_mode(void);
extern void erase_screen(void);
extern bool button(void);
extern void init_tone();
extern void uninit_tone();
//extern void tone(FIXNUM pitch, FIXNUM duration);
extern bool tone(int frequency,int duration, unsigned int sampleRate = 44100, double volumeRate = 0.5);
#endif 

