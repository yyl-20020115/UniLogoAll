#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
#ifdef _WINDOWS
#include <windows.h>

#ifdef max 
 // MS compilers #define max in windows.h
#undef max
#endif
#endif

#include <algorithm>
#include <string.h>

#include <wx/defs.h>
#include <wx/string.h>
#include <wx/filename.h>

#include "Startup.h"
#include "ActiveArea.h"
#include "Graphwin.h"
#include "Utils.h"
#include "UniLogo.h"
#include "StringAdapter.h"
 //    #include "debugheap.h"

#include "LocalizedStrings.h"
#endif

Color dfld;                        // Current flood color
Color dscn;                        // Current screen color

wxString g_LibPathName;          // path to library
wxString g_HelpFileName;         // path to help file
wxString TempPathName;   // path to temp edit file
wxString TempBmpName;    // path to temp bitmap file
wxString TempClipName;   // path to temp clipboard file

wxUint32 scolor;                   // screen color
wxUint32 fcolor;                   // flood color
wxUint32 pcolor;                   // pen color

wxString g_UnilogoBaseDirectory; // The directory that contains unilogo.exe

// Creates a unique filename relative to TempPath

//wxString GetFullText(FullTextCallBack* ftcb, int maxBufferSize)
//{
//	wxString result;
//	if (ftcb != 0) {
//		int length = MAX_PATH;
//
//		long ret = 0;
//        wchar_t* buffer = (wchar_t*) malloc((length + 1) * sizeof(wchar_t));
//        if(buffer!=0)
//        {
//            do {
//                buffer = (wchar_t*) realloc(buffer, (length + 1) * sizeof(wchar_t));
//                if (buffer != 0) {
//                    buffer[length] = L'\0';
//
//                    ret = ftcb(length, buffer);
//                    if (ret < length) {
//                        break;
//                    }
//                    else {
//                        free(buffer);
//
//                        length <<= 1;
//                    }
//                }
//                else {
//                    break;
//                }
//            } while (true);
//
//            if (ret > 0 && buffer != 0) {
//                result.append(buffer,wcslen(buffer));
//            }
//            free(buffer);
//		}
//	}
//	return result;
//}

//wxString GetFullTextReversed(FullTextCallBackReversed* ftcb, int maxBufferSize)
//{
//	wxString result;
//	if (ftcb != 0) {
//		int length = MAX_PATH;
//
//		int ret = 0;
//		wchar_t* buffer = 0;
//
//		do {
//			buffer = new wchar_t[length];
//			ret = ftcb(buffer, length);
//			if (ret < length) {
//				break;
//			}
//			else {
//				delete[] buffer;
//
//				length <<= 1;
//			}
//		} while (true);
//
//		if (ret > 0) {
//			result = buffer;
//		}
//		delete[] buffer;
//	}
//	return result;
//}
void init_graphics()
{
	// set appropriate default colors
	pcolor = 0x00000000;
	scolor = 0x00FFFFFF;
	fcolor = 0x00000000;

	dfld.red = 0x00;
	dfld.green = 0x00;
	dfld.blue = 0x00;

	dscn.red = 0xFF;
	dscn.green = 0xFF;
	dscn.blue = 0xFF;

#ifdef _WINDOWS
	// init the font structure
	FontRec.lfHeight = 24;
	FontRec.lfWidth = 0;
	FontRec.lfOrientation = 0;
	FontRec.lfWeight = 400;
	FontRec.lfItalic = 0;
	FontRec.lfUnderline = 0;
	FontRec.lfStrikeOut = 0;
	FontRec.lfCharSet = ANSI_CHARSET;
	FontRec.lfOutPrecision = OUT_DEFAULT_PRECIS;
	FontRec.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	FontRec.lfQuality = DEFAULT_QUALITY;
	FontRec.lfPitchAndFamily = DEFAULT_PITCH;

	wcsncpy(FontRec.lfFaceName, L"Arial", ARRAYSIZE(FontRec.lfFaceName) - 1);
#endif

	// Set handy rectangle of full bitmap
	g_FullRect.SetWidth(BitMapWidth);
	g_FullRect.SetHeight(BitMapHeight);

	// turtle coords are in center
	xoffset = BitMapWidth / 2;
	yoffset = BitMapHeight / 2;

	// Init active area even if off
	g_PrinterAreaXLow = -BitMapWidth / 2;
	g_PrinterAreaXHigh = +BitMapWidth / 2;
	g_PrinterAreaYLow = -BitMapHeight / 2;
	g_PrinterAreaYHigh = +BitMapHeight / 2;

	g_PrinterAreaPixels = std::max(BitMapWidth, BitMapHeight) / 8;

	// init paths to library and help files based on location of .EXE
	wxString unilogoDirectory = g_UnilogoBaseDirectory;
	wxString unilogoResourceDirectory = unilogoDirectory;
#ifdef __APPLE__
	unilogoResourceDirectory += wxString(L"../Resources/");
#endif

	const wxFileName libPathName(unilogoResourceDirectory + wxString(L"logolib/"));
	g_LibPathName = libPathName.GetPathWithSep();

	const wxFileName helpFileName(unilogoResourceDirectory + wxString(L"logohelp.chm"));
	g_HelpFileName = helpFileName.GetFullPath();

	wxString tp;

#ifndef _WINDOWS
	const char * tempPath = getenv("TMP");
	if (tempPath == NULL)
	{
		tempPath = "~";
	}
	tp = tempPath;
#else
	tp = GetFullText(GetTempPath);

	bool  tempPathIsValid = false;

	if (tp.Length() > 0)
	{
		if (!tp.EndsWith(L"\\")) {
			tp += L"\\";
		}
		DWORD tempPathAttributes = GetFileAttributes(tp);
		if (tempPathAttributes != 0xFFFFFFFF)
		{
			// tempPath must be a directory that we can write to
			if ((tempPathAttributes & FILE_ATTRIBUTE_DIRECTORY) &&
				!(tempPathAttributes & FILE_ATTRIBUTE_READONLY))
			{
				tempPathIsValid = true;
			}
		}
	}

	if (!tempPathIsValid)
	{
		// warn the user that no TMP variable was defined.
		MessageBox(
			0,
			GetResourceString(L"LOCALIZED_ERROR_TMPNOTDEFINED"),
			GetResourceString(L"LOCALIZED_WARNING"),
			MB_OK);
		tp = L"C:\\";
	}
#endif
	TempBmpName = tp + L"unilogo.bmp";
	TempPathName = tp + L"unilogo.lgo";
	TempClipName = tp + L"unilogo.clp";

	g_PrinterAreaXLow = GetConfigurationInt(L"Printer.Xlow", -BitMapWidth / 2);
	g_PrinterAreaXHigh = GetConfigurationInt(L"Printer.XHigh", +BitMapWidth / 2);
	g_PrinterAreaYLow = GetConfigurationInt(L"Printer.Ylow", -BitMapHeight / 2);
	g_PrinterAreaYHigh = GetConfigurationInt(L"Printer.YHigh", +BitMapHeight / 2);
	g_PrinterAreaPixels = GetConfigurationInt(L"Printer.Pixels", std::max(BitMapWidth, BitMapHeight) / 8);
}

void uninit_graphics()
{

}
