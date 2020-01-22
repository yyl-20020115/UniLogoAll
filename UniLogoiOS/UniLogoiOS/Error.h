#ifndef __ERROR_H__
#define __ERROR_H__

#include "LogoCore.h"

extern void clear_is_running_erract_flag();
extern void err_print(void);
extern NODE *err_logo(ERR_TYPES error_type, NODE *error_desc);
extern NODE *err_logo(ERR_TYPES error_type, NODE *error_desc, bool uplevel);
extern NODE *lerror(NODE *arg);
extern NODE *lpause(NODE *arg);
extern NODE *lhalt(NODE *arg);
extern NODE *lyield(NODE *arg);
extern NODE *lnoyield(NODE *arg);
extern NODE *lcontinue(NODE *args);
extern void uninitialize_error(void);

extern NODE *throw_node;

#endif 
