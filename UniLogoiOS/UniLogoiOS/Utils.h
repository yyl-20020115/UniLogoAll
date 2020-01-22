#ifndef __UTILS_H__
#define __UTILS_H__
#include <wx/string.h>
void SetConfigurationInt(
    const wxString&     Name,
    int                 Value
    );

int GetConfigurationInt(
    const wxString&     Name,
    int                 DefaultValue
    );

void SetConfigurationString(
    const wxString&        Name,
    const wxString&        Value
    );

wxString GetConfigurationString(
    const wxString&        Name,
    const wxString&        DefaultValue
    );

void GetConfigurationQuadruple(
    const wxString&     Name,
    int &               Value1,
    int &               Value2,
    int &               Value3,
    int &               Value4
    );

void SetConfigurationQuadruple(
    const wxString&     Name,
    int                 Value1,
    int                 Value2,
    int                 Value3,
    int                 Value4
    );

#ifdef _WINDOWS
void GetConfigurationFont(
    const wxString&   Name,
    LOGFONT&   LogFont
    );

void SetConfigurationFont(
    const wxString&   Name,
    const LOGFONT &   LogFont
    );
#endif
#endif
