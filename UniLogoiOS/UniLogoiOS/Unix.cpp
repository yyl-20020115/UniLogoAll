#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
    #ifdef _WINDOWS
      #include <windows.h>
    #else
      #include <sys/stat.h>
    #endif

    #include <stdio.h>
    #include <string.h>
    #include <errno.h>

    #ifdef __GNUC__
        #include <unistd.h>
        #include <sys/stat.h>
    #else
        #include <direct.h>
    #endif

    #include "Unix.h"
    #include "Init.h"
    #include "LogoData.h"
    #include "Parser.h"
    #include "Commander.h"
    #include "StringPrintedNode.h"
    #include "DynamicBuffer.h"
    #include "AppendableList.h"
    #include "Sort.h"
//    #include "debugheap.h"
    #include "LocalizedStrings.h"
#endif



jmp_buf iblk_buf;

static CDynamicBuffer g_ComboBuffer;

static void mputcombobox(const wchar_t *str)
{
    // Append the string to the buffer
    g_ComboBuffer.AppendString(str);

	wxString rawBuffer = g_ComboBuffer.GetBuffer();

	wxString next_line;

    // process lines
	for (size_t i = 0; i < rawBuffer.length(); i++)
	{
		if (rawBuffer[i] == L'\n')
		{
			// if <lf> pump it out
			next_line = rawBuffer.substr(0, i);
			rawBuffer = rawBuffer.substr(i + 1);
			PutIntoComboBox(next_line,MESSAGETYPE::Normal);
		}
	}


    // flush the last line (which doesn't end in \n)
    if (next_line[0] != L'\0')
    {
        PutIntoComboBox(next_line, MESSAGETYPE::Normal);
    }

    // clear the contents of the buffer, since we wrote the entire thing
    g_ComboBuffer.Empty();
}

void putcombochar(MESSAGETYPE type, wchar_t ch)
{
    if (ch == L'\n')
    {
        // if <lf> pump it out
        PutIntoComboBox(g_ComboBuffer.GetBuffer(), type);
        g_ComboBuffer.Empty();
    }
    else
    {
        g_ComboBuffer.AppendChar(ch);
    }
}


int printfx(const wxString& str)
{
    mputcombobox(str);

    return (int)str.length();
}

int printfx(const wxString& fmt, const wxString& str)
{
	wxString w = wxString::Format(fmt, str);

    mputcombobox(w);

    return (int)w.length();
}

NODE *lchdir(NODE *arg)
{
    CStringPrintedNode directoryName(car(arg));
    wxString dn = (const wxString&)directoryName;
    if (

        chdir((const char*)dn)
        )
    {
        printfx(GetResourceString(L"LOCALIZED_FILE_CHDIRFAILED"), dn);
    }
    else
    {
        // Get the directory that we are now in.
#ifdef _WINDOWS
		wchar_t newDirectoryName[MAX_BUFFER_SIZE + 1]={ 0 };
		_wgetcwd(newDirectoryName, sizeof(newDirectoryName) / sizeof(wchar_t));
#else
		char newDirectoryName[MAX_BUFFER_SIZE + 1]={ 0 };
		getcwd(newDirectoryName, sizeof(newDirectoryName) / sizeof(char));
#endif
        printfx(GetResourceString(L"LOCALIZED_FILE_CHDIRSUCCEEDED"), dn);
    }

    return Unbound;
}

NODE *lpopdir(NODE *)
{
#ifdef _WINDOWS
    _wchdir(L"..");

    wchar_t fname[MAX_BUFFER_SIZE + 1] = { 0 };
	_wgetcwd(fname, sizeof(fname) / sizeof(wchar_t));
#else
    chdir("..");

    char fname[MAX_BUFFER_SIZE + 1] = { 0 };
	getcwd(fname, sizeof(fname) / sizeof(char));
#endif
    
    printfx(GetResourceString(L"LOCALIZED_FILE_POPPEDTO"), (const wxString&)fname);

    return Unbound;
}

NODE *lmkdir(NODE *arg)
{
    CStringPrintedNode directoryName(car(arg));
    const wxString dn = (const wxString&)directoryName;
    if (
#ifdef _WINDOWS
        mkdir((const char*)dn)
#else
        mkdir((const char*)dn,0777)
#endif
        )
    {
        // mkdir returns -1 on error
        printfx(GetResourceString(L"LOCALIZED_FILE_MKDIRFAILED"), dn);
    }
    else
    {
        // mkdir returns 0 on success
		chdir((const char*)dn);
		printfx(GetResourceString(L"LOCALIZED_FILE_MKDIRSUCCEEDED"), dn);
    }

    return Unbound;
}

NODE *lrmdir(NODE *arg)
{
    CStringPrintedNode directoryName(car(arg));
    wxString dn = (const wxString&)directoryName;
    if (rmdir((const char*)dn))
    {
        printfx(GetResourceString(L"LOCALIZED_FILE_RMDIRFAILED"), (const wxString&)directoryName);
        if (errno == EEXIST)
        {
            printfx(GetResourceString(L"LOCALIZED_FILE_RMDIRFAILEDNOEXIST"));
        }
        else if (errno == EEXIST || errno == EPERM)
        {
            printfx(GetResourceString(L"LOCALIZED_FILE_RMDIRFAILEDNOTEMPTY"));
        }
        else
        {
            printfx(wxString(strerror(errno)));
        }
    }
    else
    {
        printfx(GetResourceString(L"LOCALIZED_FILE_RMDIRSUCCEEDED"), (const wxString&)directoryName);
    }

    return Unbound;
}

static NODE *directory_helper(bool OnlyListDirectories)
{
    CAppendableList directory; 

    // Flags for whether the special directories "." and ".." have been found.
    // Because these are special entries, we always want them to be first,
    // even if there's an entry that comes before them alphabetically,
    // like "!MyDirectory".
    bool foundDot    = false;
    bool foundDotDot = false;

#ifdef _WINDOWS
    WIN32_FIND_DATA findFileData;

    HANDLE searchHandle = FindFirstFile(
        L"*.*",
        &findFileData); 
    if (searchHandle != INVALID_HANDLE_VALUE)
    {
        BOOL moreToCome = TRUE;
        while (moreToCome)
        {
            bool isADirectory = findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ? 
                true : 
                false;
            if ((OnlyListDirectories && isADirectory) ||
                (!OnlyListDirectories && !isADirectory))
            {
                // We have found an entry type that we are looking for.
                if (OnlyListDirectories && 0 == wcscmp(L".", findFileData.cFileName))
                {
                    // This the "." directory.  Flag it to be added later.
                    foundDot = true;
                }
                else if (OnlyListDirectories && 0 == wcscmp(L"..", findFileData.cFileName))
                {
                    // This the ".." directory.  Flag it to be added later.
                    foundDotDot = true;
                }
                else
                {
                    // This is a regular directory entry.  Add it to the list.
                    NODE* file = make_strnode(findFileData.cFileName);
                    directory.AppendElement(file);
                }
            }

            // Iterate to the next file/directory
            moreToCome = FindNextFile(searchHandle, &findFileData);
        }

        FindClose(searchHandle);
    }
#else
    
#endif

    // The MSDN reports that FindNextFile doesn't guarantee a order, so we sort
    // the list according to the locale.
    // CONSIDER FOR SPEED: From what I've seen, FindNextFile usually does sort
    // the list.  If this is too slow, we could track if sorting is needed above
    // and only sort when necessary.
    NODE * sortedList = mergesort(directory.GetList(), true);

    // Add "." and ".." to the front of the list, if applicable.
    if (foundDotDot)
    {
        sortedList = cons(make_strnode(L".."), sortedList);
    }
    if (foundDot)
    {
        sortedList = cons(make_strnode(L"."), sortedList);
    }

    return sortedList;
}

NODE *lfiles(NODE *)
{
    return directory_helper(false);
}

NODE *ldirectories(NODE *)
{
    return directory_helper(true);
}

void unblock_input()
{
    if (GetInputBlocking())
    {
		GetInputBlocking() = false;
        longjmp(iblk_buf, 1);
    }
}

void uninitialize_combobox()
{
    g_ComboBuffer.Dispose();
}
