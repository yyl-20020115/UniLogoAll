#ifndef __FONTUTILS_H__
#define __FONTUTILS_H__

#include <wx/font.h>

void GetConfigurationFont(
    const wchar_t * ConfigName,
    wxFont &     Font
    );

void SetConfigurationFont(
    const wchar_t *   ConfigName,
    const wxFont & Font
    );

const wxFont GetLabelFont();

#endif // _FONTUTILS_H_
