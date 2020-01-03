#ifndef __STARTUP_H__
#define __STARTUP_H__

#include <wx/defs.h> // for wxUint32

#include "Graphics.h"

// global variable declarations
extern Color dfld;
extern Color dscn;

extern wxString g_LibPathName;
extern wxString g_HelpFileName;
extern wxString TempPathName;
extern wxString TempBmpName;
extern wxString TempClipName;

extern wxUint32 scolor;  // screen color
extern wxUint32 fcolor;  // flood color
extern wxUint32 pcolor;  // pen color

#ifndef MAX_PATH
  #define MAX_PATH (260)
#endif 

extern wxString g_UnilogoBaseDirectory;

//extern void MakeHelpPathName(wchar_t *szFileName, const wchar_t *);
extern void init_graphics();
extern void uninit_graphics();
extern void init_cursors();
#ifdef WIN32
#define STDCALL __stdcall
#else
#define STDCALL 
#endif

typedef unsigned long STDCALL FullTextCallBack(unsigned long, wchar_t*);
typedef unsigned int STDCALL FullTextCallBackReversed(wchar_t*, unsigned int);

extern wxString GetFullText(FullTextCallBack* ftcb, int maxBufferSize = 4096);
extern wxString GetFullTextReversed(FullTextCallBackReversed* ftcb, int maxBufferSize = 4096);

#endif // __STARTUP_H_
