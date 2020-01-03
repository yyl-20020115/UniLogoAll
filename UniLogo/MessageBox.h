#ifndef __MESSAGEBOX_H__
#define __MESSAGEBOX_H__

#include "LogoCore.h"

// Functions
extern void ShowMessage(const wxString& Title, const wxString& Message);
extern void ShowMessageAndStop(const wxString& Title, const wxString& Message);
extern void ShowErrorMessageAndStop(const wxString& Message);
extern void ShowErrorMessage(const wxString& Message);
extern void ShowErrorMessage(ERR_TYPES ErrorCode);

#endif 
