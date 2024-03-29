// This file implements functions for saving and reading global configuration
// options.  It has a Windows-specific native implementation in addition to the
// WX_PURE portion to ensure that configuration set in older version of UniLogo
// continue to work.  This could be rewritten to be platform-independent if the
// installer included some migration logic to move from the legacy UniLogo format
// to a wxWidgets-compatible format.

#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER

    #ifdef _WINDOWS
        #include <windows.h>
    #endif

    #include <stdio.h>
    #include <string.h>
    #include <wx/config.h>
    #include "StringAdapter.h"

    #include "LocalizedStrings.h"
//    #include "debugheap.h"

#endif

#ifdef _WINDOWS

//NOTICE: registry entry changed to make unicode version a different product.
// the name of the UniLogo registry key under HKCU
const wchar_t UNILOGO_REGISTRY_KEY_NAME[] = L"Software\\UniLogo";

// manifest constants to help protect against typos
const wchar_t FONTPROPERTY_FaceName[]       = L"FaceName";
const wchar_t FONTPROPERTY_Height[]         = L"Height";
const wchar_t FONTPROPERTY_Weight[]         = L"Weight";
const wchar_t FONTPROPERTY_Italic[]         = L"Italic";
const wchar_t FONTPROPERTY_CharSet[]        = L"CharSet";
const wchar_t FONTPROPERTY_OutPrecision[]   = L"OutPrecision";
const wchar_t FONTPROPERTY_ClipPrecision[]  = L"ClipPrecision";
const wchar_t FONTPROPERTY_Quality[]        = L"Quality";
const wchar_t FONTPROPERTY_PitchAndFamily[] = L"PitchAndFamily";

static HKEY OpenUniLogoKeyForSettingValue()
{
    HKEY unilogoKey = 0;

    // Use RegCreateKeyEx() instead of RegOpenKeyEx() because
    // the key may not already exist.  For example, if UNIlogo 
    // were "installed" with XCOPY or by uncompressing a ZIP file.

    LONG result = RegCreateKeyEx(
        HKEY_CURRENT_USER,
        UNILOGO_REGISTRY_KEY_NAME,
        0,      // reserved
        NULL,   // ignored
        REG_OPTION_NON_VOLATILE,
        KEY_SET_VALUE,
        NULL,   // default security attributes
        &unilogoKey,
        NULL);  // don't care if the key already existed
    if (result != ERROR_SUCCESS)
    {
        // failed!
        unilogoKey = NULL;
    }

    return unilogoKey;
}

static HKEY OpenUniLogoKeyForGettingValue()
{
    HKEY unilogoKey = 0;

    LONG result = RegOpenKeyEx(
        HKEY_CURRENT_USER,
        UNILOGO_REGISTRY_KEY_NAME,
        0, // reserved
        KEY_QUERY_VALUE,
        &unilogoKey);
    if (result != ERROR_SUCCESS)
    {
        // failed!
        unilogoKey = NULL;
    }

    return unilogoKey;
}

#endif 
#ifndef __APPLE__
extern wxString g_UnilogoBaseDirectory;
#endif

wxString GetIniPath(){
    wxString inipath =
#ifndef __APPLE__
    g_UnilogoBaseDirectory +
#endif
    L"UniLogo.ini";
    return inipath;
}
void SetConfigurationInt(
    const wxString&  Name,
    int              Value
    )
{
#ifdef WX_PURE
    wxFileConfig config(L"UniLogo",wxEmptyString,GetIniPath(),wxEmptyString,wxCONFIG_USE_LOCAL_FILE);
    config.Write(Name, Value);
#else
    HKEY unilogoKey = OpenUniLogoKeyForSettingValue();
    if (unilogoKey != NULL)
    {
        DWORD value          = static_cast<DWORD>(Value);
        const BYTE *valuePtr = reinterpret_cast<BYTE*>(&value);

        RegSetValueEx(
            unilogoKey,
            Name,
            0,   // reserved
            REG_DWORD,
            valuePtr,
            sizeof value);

        RegCloseKey(unilogoKey);
    }
#endif // WX_PURE    
}

int GetConfigurationInt(
    const wxString&     Name,
    int                 DefaultValue
    )
{
#ifdef WX_PURE
    wxFileConfig config(L"UniLogo",wxEmptyString,GetIniPath(),wxEmptyString,wxCONFIG_USE_LOCAL_FILE);
    long longValue = config.ReadLong(Name, DefaultValue);
    return (int)longValue;
#else    
    int returnValue = DefaultValue;

    HKEY unilogoKey = OpenUniLogoKeyForGettingValue();
    if (unilogoKey != NULL)
    {
        DWORD value = 0;
        DWORD valueSize = sizeof(value);
        BYTE *valuePtr  = reinterpret_cast<BYTE*>(&value);
        DWORD type      = REG_DWORD;

        LONG result = RegQueryValueEx(
            unilogoKey,
            Name,
            0,   // reserved
            &type,
            valuePtr,
            &valueSize);
        if (result    == ERROR_SUCCESS && 
            type      == REG_DWORD     &&
            valueSize == sizeof(value))
        {
            // we successfully read the value as a DWORD
            returnValue = value;
        }

        RegCloseKey(unilogoKey);
    }

    return returnValue;
#endif // WX_PURE    
}

void SetConfigurationString(
    const wxString&        Name,
    const wxString&        Value
    )
{
#ifdef WX_PURE
    wxFileConfig config(L"UniLogo",wxEmptyString,GetIniPath(),wxEmptyString,wxCONFIG_USE_LOCAL_FILE);

    config.Write(Name, Value);
#else
    HKEY unilogoKey = OpenUniLogoKeyForSettingValue();
    if (unilogoKey != NULL)
    {
        DWORD valueLength    = (Value.length() + 1) * sizeof(wchar_t);   // include NUL
        const BYTE *valuePtr = reinterpret_cast<const BYTE*>((const wchar_t*)Value);

        RegSetValueEx(
            unilogoKey,
            Name,
            0,   // reserved
            REG_SZ,
            valuePtr,
            valueLength);

        RegCloseKey(unilogoKey);
    }
#endif // WX_PURE    
}

wxString GetConfigurationString(
    const wxString&        Name,
    const wxString&        DefaultValue
    )
{
	wxString              Value;

#ifdef WX_PURE    
    wxFileConfig config(L"UniLogo",wxEmptyString,GetIniPath(),wxEmptyString,wxCONFIG_USE_LOCAL_FILE);

    Value = config.Read(Name, DefaultValue);
#else
    bool useDefaultValue = true;

    HKEY unilogoKey = OpenUniLogoKeyForGettingValue();
    if (unilogoKey != NULL)
    {
		DWORD valueSize = 0;
        DWORD valueType = 0;
        LONG result = RegQueryValueEx(
            unilogoKey,
            (const wchar_t*)Name,
            0,   // reserved
            &valueType,
            0,//request size
            &valueSize);

        if (result == ERROR_SUCCESS && valueType == REG_SZ)
        {
			BYTE* valuePtr = (BYTE*)malloc(valueSize + sizeof(wchar_t));
			memset(valuePtr, 0, valueSize + sizeof(wchar_t));

			result = RegQueryValueEx(
				unilogoKey,
				Name,
				0,   // reserved
				&valueType,
				valuePtr,
				&valueSize);
			if (result == ERROR_SUCCESS && valueType == REG_SZ)
			{
				*(wchar_t*)(valuePtr + valueSize) = L'\0';
				Value = (wchar_t*)valuePtr;
				// we successfully read the value as a string
				useDefaultValue = false;
			}

			if (valuePtr != 0) {
				free(valuePtr);
			}
        }
        RegCloseKey(unilogoKey);
	}
	if (useDefaultValue)
	{
		Value = DefaultValue;
	}
#endif // WX_PURE

	return Value;
}

void
GetConfigurationQuadruple(
    const wxString&      Name,
    int &               Value1,
    int &               Value2,
    int &               Value3,
    int &               Value4
    )
{
	wxString defaultString=wxString::Format(
        L"%d,%d,%d,%d",
        Value1,
        Value2,
        Value3,
        Value4);

	
    // Get the quadruple from the configuration settings
    wxString outputString = GetConfigurationString(
        Name,
        defaultString);
    

    // Decode the quadruple string into numbers
    wchar_t * cp = const_cast<wchar_t*>((const wchar_t*)outputString);

    Value1 = (int)wcstol(cp, &cp, 10);
    cp++;

    Value2 = (int)wcstol(cp, &cp, 10);
    cp++;

    Value3 = (int)wcstol(cp, &cp, 10);
    cp++;

    Value4 = (int)wcstol(cp, &cp, 10);
}


void
SetConfigurationQuadruple(
    const wxString&        Name,
    int                 Value1,
    int                 Value2,
    int                 Value3,
    int                 Value4
    )
{
	wxString quadruple = wxString::Format(L"%d,%d,%d,%d",
        Value1,
        Value2,
        Value3,
        Value4);

    // Set the quadruple in the configuration.
    SetConfigurationString(Name, quadruple);
}

#ifndef WX_PURE
void GetConfigurationFont(
    const wxString& Name,
    LOGFONT  &   LogFont
    )
{
    memset(&LogFont, 0, sizeof(LogFont));

    // find the end of the fullyQualifiedName
	  wxString relativeName = Name + L'.';
   
    wxString ret = GetConfigurationString(
        relativeName + FONTPROPERTY_FaceName,
        GetResourceString(L"LOCALIZED_DEFAULT_FONT_FACE"));

	if (ret.length() > 0) {
		wcsncpy(LogFont.lfFaceName, (const wchar_t*)ret, LF_FACESIZE);
	}

    LogFont.lfHeight = GetConfigurationInt(relativeName + FONTPROPERTY_Height, -13);

    LogFont.lfWeight = GetConfigurationInt(relativeName + FONTPROPERTY_Weight, 400);

    LogFont.lfItalic = GetConfigurationInt(relativeName + FONTPROPERTY_Italic, 0);

    LogFont.lfCharSet = GetConfigurationInt(relativeName + FONTPROPERTY_CharSet, 0);

    LogFont.lfOutPrecision = GetConfigurationInt(relativeName + FONTPROPERTY_OutPrecision, 1);

    LogFont.lfClipPrecision = GetConfigurationInt(relativeName + FONTPROPERTY_ClipPrecision, 2);

    LogFont.lfQuality = GetConfigurationInt(relativeName + FONTPROPERTY_Quality, 1);

    LogFont.lfPitchAndFamily = GetConfigurationInt(relativeName + FONTPROPERTY_PitchAndFamily, 49);
}

void
SetConfigurationFont(
    const wxString&    Name,
    const LOGFONT  &   LogFont
    )
{
    // find where the relative property name should start
	  wxString relativeName = Name + L'.';

    SetConfigurationString(relativeName + FONTPROPERTY_FaceName, LogFont.lfFaceName);

    const struct PROPERTY {
        const wchar_t * Name;
        int Value;
    } properties[] = {
        {FONTPROPERTY_Height,          LogFont.lfHeight},
        {FONTPROPERTY_Weight,          LogFont.lfWeight},
        {FONTPROPERTY_Italic,          LogFont.lfItalic},
        {FONTPROPERTY_CharSet,         LogFont.lfCharSet},
        {FONTPROPERTY_OutPrecision,    LogFont.lfOutPrecision},
        {FONTPROPERTY_ClipPrecision,   LogFont.lfClipPrecision},
        {FONTPROPERTY_Quality,         LogFont.lfQuality},
        {FONTPROPERTY_PitchAndFamily,  LogFont.lfPitchAndFamily},
    };

    for (size_t i = 0; i < sizeof(properties) / sizeof(*properties); i++)
    {
        SetConfigurationInt(relativeName + properties[i].Name, properties[i].Value);
    }
}

#endif // !defined WX_PURE
