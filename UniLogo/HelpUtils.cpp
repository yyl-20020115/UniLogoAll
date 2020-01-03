#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "HelpUtils.h"

   #include <wx/string.h>

   #include "LogoCore.h" // for IsSpace
   #include "Graphwin.h" // for do_help
   #include "StringAdapter.h"
#endif


// Open the help to the topic specified in the first word of SelectedText.
void ContextHelp(const wxString & SelectedText)
{
    const wchar_t * src = /*WXSTRING_TO_STRING*/(SelectedText);

    // remove leading whitespace
    while (IsSpace(*src))
    {
        src++;
    }

    // Copy the first word (up until the first whitespace character)
    // to a separate buffer that can be NULL-terminated.
	wchar_t buffer[100];
	wchar_t * dest      = buffer;
	wchar_t * destLimit = buffer + (sizeof(buffer)/sizeof(wchar_t)) - 1;
    while (*src != L'\0' && !IsSpace(*src) && dest < destLimit)
    {
        *dest++ = *src++;
    }

    // Truncate the selection after the first word.
    *dest = L'\0';

    // Look it up in the online help.
    do_help(buffer);
}

