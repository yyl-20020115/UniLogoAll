#ifndef __MAINWIND_H__
#define __MAINWIND_H__

#include <stdio.h>
#include "LogoCore.h"
#include <wx/string.h>
// function declarations
ERR_TYPES
DumpBitmapFile(
    const wxString& Filename,
    int          MaxBitCount
    );

ERR_TYPES
LoadBitmapFile(
    const wxString& Filename,
    unsigned int & dwPixelWidth,
    unsigned int & dwPixelHeight
    );

void
PaintToScreen(
    class wxDC     & PaintDeviceContext,
    class wxRegion   UpdateRegion,
    int              ScrollX,
    int              ScrollY
    );

#endif
