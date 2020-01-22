#ifndef __DLL_H__
#define __DLL_H__

extern NODE *ldllload(NODE *arg);
extern NODE *ldllcall(NODE *arg);
extern NODE *ldllfree(NODE *arg);
extern void uninitialize_dlls();

#endif 
