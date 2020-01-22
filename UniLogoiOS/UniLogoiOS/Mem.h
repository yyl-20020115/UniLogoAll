#ifndef __MEM_H__
#define __MEM_H__

#include "LogoCore.h"

// global variables
extern int memory_count;

// function declarations
extern NODE *newnode(NODETYPES type);
extern void gc(NODE *nd);
extern NODE *lnodes(NODE *args);
extern void fill_reserve_tank(void);
extern void use_reserve_tank(void);
extern void check_reserve_tank(void);
extern void free_segment_list(void);

#endif 
