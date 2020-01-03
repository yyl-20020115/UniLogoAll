#ifndef __UNIX_UTILS_H__
#define __UNIX_UTILS_H__

#include <setjmp.h>
#include "Print.h" // for MESSAGETYPE

struct NODE;

// function declarations
extern int printfx(const wxString& fmt);
extern int printfx(const wxString& fmt, const wxString& str);
extern void unblock_input(void);
extern void putcombochar(MESSAGETYPE type, wchar_t c);
extern NODE *lchdir(NODE *arg);
extern NODE *lpopdir(NODE *arg);
extern NODE *lmkdir(NODE *arg);
extern NODE *lrmdir(NODE *arg);
extern NODE *ldirectories(NODE *arg);
extern NODE *lfiles(NODE *arg);
extern void uninitialize_combobox(void);

// global variables
extern jmp_buf iblk_buf;


#endif 
