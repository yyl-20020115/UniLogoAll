#ifndef __LOGORC_H__
#define __LOGORC_H__

#ifndef WM_USER
#define WM_USER                         0x0400
#endif

#define WM_MYSCROLLBARCALLBACK         WM_USER + 0
#define WM_CHECKQUEUE                  WM_USER + 1

#define WM_NETWORK_CONNECTSENDACK      WM_USER + 2
#define WM_NETWORK_CONNECTSENDFINISH   WM_USER + 3
#define WM_NETWORK_LISTENRECEIVEACK    WM_USER + 4

#endif
