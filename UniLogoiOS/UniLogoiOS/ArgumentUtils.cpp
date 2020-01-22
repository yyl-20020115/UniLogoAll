#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
  #include "ArgumentUtils.h"
#include "LogoData.h"
  #include "LogoCore.h"
  #include "Print.h"
//  #include "debugheap.h"
#include<wx/string.h>
#include "CStringTextStream.h"
#endif

wxString ArgumentUtils::cnv_strnode_string(NODE * arg)
{
	CStringTextStream cts;

	PrintNodeToString(car(arg),&cts);

	return cts.GetContent();
}

wxString ArgumentUtils::NormalizeCaseForDisplay(wxString text)
{
	wxString ret;
	if (text.length() > 0) {
		wchar_t* buffer = (wchar_t*)malloc(sizeof(wchar_t)*(text.length() + 1));
		if (buffer != 0) {
			memset(buffer, 0,sizeof(wchar_t)*(text.length() + 1));
			::NormalizeCaseForDisplay(buffer, text, text.length());
			ret = buffer;
			free(buffer);
		}
	}

	return ret;
}

wxString ArgumentUtils::cap_strnzcpy(wxString text)
{
	wxString ret;
	if (text.length() > 0) {
		wchar_t* buffer = (wchar_t*)malloc(sizeof(wchar_t)*(text.length() + 1));
		if (buffer != 0) {
			memset(buffer, 0, sizeof(wchar_t)*(text.length() + 1));
			::cap_strnzcpy(buffer, text, text.length());
			ret = buffer;
			free(buffer);
		}
	}

	return ret;
}
