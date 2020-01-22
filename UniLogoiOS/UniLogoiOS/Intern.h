#ifndef __INTERN_H__
#define __INTERN_H__

// global variables
extern NODE **hash_table;

// function declarations
extern NODE *make_instance(NODE *casend, NODE *lownd);
extern NODE *intern(NODE *nd);
extern void init_intern();
extern void release_all_objects();

#endif
