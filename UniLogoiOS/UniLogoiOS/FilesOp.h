#ifndef __FILES_OP_H__
#define __FILES_OP_H__

#include <wx/string.h>
#include "CFileTextStream.h"

extern void filesave(const wxString&  Filename, FileTextStreamType Ftt);
extern bool fileload(const wxString&  Filename, bool CheckBOM, FileTextStreamType* Ftt);

#endif // __FILESWND_H_
