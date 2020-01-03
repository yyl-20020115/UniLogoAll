#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
    #include <stdarg.h>
    #include <stdio.h>
    #include <string.h>
    #include <algorithm>

    #include "Unix.h"
    #include "Parser.h"
    #include "Print.h"
    #include "LogoCore.h"
    #include "LogoData.h"
    #include "IBMTerm.h"
    #include "Init.h"
    #include "Eval.h"
    #include "Files.h"
    #include "LocalizedStrings.h"
    #include <wx/string.h>
#endif
#include "CStringTextStream.h"
#include "CNodePrinter.h"
//// structures
//struct STRING_PRINT_INFORMATION
//{
//    size_t  TotalBytesNeeded;
//    size_t  BufferLength;
//	  wchar_t  * Buffer;
//};
//
//// global variable
//static STRING_PRINT_INFORMATION g_StringPrintInformation;

bool print_backslashes = false;
CTextStream* g_Buffer = 0;

void print_char(CTextStream *strm, MESSAGETYPE type, wchar_t ch)
{
    if (strm != NULL)
    {
        // printing to a file stream
        if (*strm == stdout)
        {
            // UniLogo isn't a command-line application, so printing
            // to "stdout" really goes to the commander history.
            putcombochar(type, ch);

			DribbleWriteChar(ch);
        }
        else
        {
			strm->WriteChar(ch);
        }
    }
    else
    {
		g_Buffer->WriteChar(ch);
        // printing to string
    }
}

void print_space(CTextStream *strm, MESSAGETYPE type)
{
    print_char(strm, type, L' ');
}

void ndprintf(CTextStream *strm, MESSAGETYPE type, const wchar_t *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);

	wchar_t ch;
    while ((ch = *fmt++) != L'\0')
    {
        if (ch == L'%')
        {
            ch = *fmt++;
            if (ch == L's') // show
            {
                print_node(strm, type, va_arg(ap, NODE *));
            }
            else if (ch == L'p')  // print
            {
                /* print */
                NODE * nd = va_arg(ap, NODE *);
                if (is_list(nd))
                {
                    print_helper(strm, type, nd);
                }
                else
                {
                    print_node(strm, type, nd);
                }
            }
            else if (ch == L't') // text
            {
				wchar_t *cp = va_arg(ap, wchar_t *);
                while ((ch = *cp++)!=0)
                {
                    print_char(strm, type, ch);
                }
            }
            else
            {
                print_char(strm, type, L'%');
                print_char(strm, type, ch);
            }
        }
        else
        {
            print_char(strm, type, ch);
        }
    }

    va_end(ap);
}

static void real_print_node(
	CTextStream  * strm,
    MESSAGETYPE  type,
    const NODE * nd,
    long          depth,
    long          width
    );

static void real_print_helper(CTextStream *strm, MESSAGETYPE type, const NODE *ndlist, long depth, long width)
{
    long wid = width;

    while (ndlist != NIL)
    {
        if (!is_list(ndlist))
        {
            return;
        }
        NODE * arg = car(ndlist);
        ndlist = cdr(ndlist);
        if (check_throwing)
        {
            break;
        }
        real_print_node(strm, type, arg, depth, width);
        if (ndlist != NIL)
        {
            print_space(strm, type);
            if (--wid == 0)
            {
                ndprintf(strm, type, L"...");
                break;
            }
        }
    }
}


// Prints a node to a file stream in a way that is consistent
// with how UniLogo parses nodes.
//
//   strm - the file stream.
//   type - the type of message that is being printed
//   nd - the node to print
//   depth - how "deep" to go (how many elements of a list)
//   width - how many bytes to print at most ???
static void real_print_node(
	CTextStream       * strm,
    MESSAGETYPE  type,
    const NODE * nd,
    long          depth,
    long          width
    )
{
    NODETYPES ndty = 0;

    if (depth == 0)
    {
        ndprintf(strm, type, L"...");
    }
    else if (nd == NIL)
    {
        print_char(strm, type, L'[');
        print_char(strm, type, L']');
    }
    else if (nd == Unbound)
    {
        ndprintf(strm, type, GetResourceString(L"LOCALIZED_UNBOUND"));
    }
    else if ((ndty = nodetype(nd)) & NT_PRIM)
    {
        ndprintf(strm, type, L"PRIM");
    }
    else if (ndty & NT_LIST)
    {
        print_char(strm, type, L'[');
        real_print_helper(strm, type, nd, depth - 1, width);
        print_char(strm, type, L']');
    }
    else if (ndty == ARRAY)
    {
        int dim = getarrdim(nd);

        // figure out how many items to print
        long wid = 0;
        if (width < 0) 
        {
            wid = dim;
        }
        else 
        {
            wid = (dim > width ? width : dim);
        }

        print_char(strm, type, L'{');

        // print each item in the array
        NODE **pp = getarrptr(nd);
        int i = 0;
        while (i < wid)
        {
            real_print_node(strm, type, *pp++, depth - 1, width);
            if (++i < dim) 
            {
                print_space(strm, type);
            }
        }
        if (wid < dim) 
        {
            ndprintf(strm, type, L"...");
        }
        print_char(strm, type, L'}');

        // print the origin
        if (print_backslashes && (getarrorg(nd) != 1))
        {
			//FIXED
            ndprintf(strm, type, wxString::Format(L"@%d", getarrorg(nd)));
        }
    }
    else if (ndty == QUOTE)
    {
        print_char(strm, type, L'\"');
        real_print_node(strm, type, car(nd), width - 1, depth);
    }
    else if (ndty == COLON)
    {
        print_char(strm, type, L':');
        real_print_node(strm, type, car(nd), width - 1, depth);
    }
    else if (ndty == FLOATINGPOINT)
    {
		//FIXED: do not use %0.15g, this would result in .000000000x which is bad
		//for reading.
		//wchar_t buffer[MAX_NUMBER] = { 0 };
	    //wsprintf(buffer, L"%0.15g", getfloat(nd));
		FLONUM f=getfloat(nd);

		wxString buffer = CNodePrinter::FormatDouble(f);
		// wxString::Format(L"%g", (double)f);
        // REVISIT: is it okay to ignore the width parameter?
        for (size_t i = 0;i<buffer.length();i++)
        {
            print_char(strm, type, buffer[i]);
        }
    }
    else if (ndty == INTEGER)
    {
		//FIXED
		wxString buffer = wxString::Format(L"%ld", getint(nd));
		// REVISIT: is it okay to ignore the width parameter?
		for (size_t i = 0; i < buffer.length(); i++)
		{
			print_char(strm, type, buffer[i]);
		}
    }
    else if (ndty == CASEOBJ)
    {
        real_print_node(strm, type, strnode__caseobj(nd), depth, width);
    }
    else
    {
        assert(is_string(nd));

        // figure out how many charaters to print
        int totalCharsToPrint;
        if (width < 0) 
        {
            totalCharsToPrint = getstrlen(nd);
        }
        else
        {
            totalCharsToPrint = std::max((int)width, 10);
            totalCharsToPrint = std::min(totalCharsToPrint, getstrlen(nd));
        }

        // should we print some elipses at the end?
        bool dots = false;
        if (totalCharsToPrint < getstrlen(nd))
        {
            dots = true;
        }

        // print totalCharsToPrint characters of nd
        const wchar_t *cp = getstrptr(nd);
        if (!backslashed(nd))
        {
            for (int i = 0; i < totalCharsToPrint; i++)
            {
                print_char(strm, type, *cp++);
            }
        }
        else if (!print_backslashes)
        {
            for (int i = 0; i < totalCharsToPrint; i++)
            {
                print_char(strm, type, ecma_clear(*cp++));
            }
        }
        else
        {
            // determine if the word was in vbars
            int i;
            for (i = 0; i < totalCharsToPrint; i++)
            {
                if (ecma_get(cp[i])) 
                {
                    break;
                }
            }

            if (i < totalCharsToPrint)
            {
                // word was in vbars
                if (wcschr(L"\":", *cp))
                {
                    print_char(strm, type, *cp++);
                    totalCharsToPrint--;
                }
                print_char(strm, type, L'|');
                for (i = 0; i < totalCharsToPrint; i++)
                {
					wchar_t ch = ecma_clear(*cp++);

                    // Even in vbars, there are some characters
                    // that must be escaped.
                    if (ch == L'|' || ch == L'\\')
                    {
                        print_char(strm, type, L'\\');
                    }
                    print_char(strm, type, ch);
                }
                print_char(strm, type, L'|');
            }
            else 
            {
                // word was not in vbars
                for (i = 0; i < totalCharsToPrint; i++)
                {
                    if (is_special_character(*cp))
                    {
                        // *cp must be escaped with a backslash
                        print_char(strm, type, L'\\');
                    }
                    print_char(strm, type, *cp++);
                }
            }
        }

        if (dots)
        {
            ndprintf(strm, type, L"...");
        }
    }
}

long find_limit(const CLocalizedNode & Node)
{
    NODE * nd = cnv_node_to_numnode(Node.GetValue());

    long val = -1L;
    if (nodetype(nd) == INTEGER) 
    {
        val = getint(nd);
    }
    gcref(nd);
    return val;
}

void print_helper(CTextStream *strm, MESSAGETYPE type, NODE *nd)
{
    real_print_helper(
        strm,
        type,
        nd,
        find_limit(Printdepthlimit),
        find_limit(Printwidthlimit));
}

void print_node(CTextStream *strm, MESSAGETYPE type, NODE *nd)
{
    real_print_node(
        strm,
        type,
        nd,
        find_limit(Printdepthlimit),
        find_limit(Printwidthlimit));
}

void print_nobrak(CTextStream *strm, MESSAGETYPE type, NODE *nd)
{
    if (is_list(nd))
    {
        print_helper(strm, type, nd);
    }
    else 
    {
        print_node(strm, type, nd);
    }
}

void new_line(CTextStream *strm, MESSAGETYPE type)
{
    print_char(strm, type, L'\n');
}

NODE *lshow(NODE *args)
{
    print_helper(GetOutputStream(), MESSAGETYPE::Normal, args);
    new_line(GetOutputStream(), MESSAGETYPE::Normal);
    return Unbound;
}

static
void type_helper(NODE *args, bool print_space_between_arguments)
{
    while (args != NIL)
    {
        NODE * arg = car(args);

        print_nobrak(GetOutputStream(), MESSAGETYPE::Normal, arg);

        args = cdr(args);
        if (print_space_between_arguments && (args != NIL))
        {
            print_space(GetOutputStream(), MESSAGETYPE::Normal);
        }
    }
}

NODE *ltype(NODE *args)
{
    type_helper(args, false);
    return Unbound;
}

NODE *lprint(NODE *args)
{
    type_helper(args, true);
    new_line(GetOutputStream(), MESSAGETYPE::Normal);
    return Unbound;
}
// Initializes the printing engine to print to Buffer.
void
InitializeStringPrintInformation(
	CTextStream* buffer
    )
{
	g_Buffer = buffer;
    //g_StringPrintInformation.TotalBytesNeeded = 0;
    //g_StringPrintInformation.Buffer           = Buffer;
    //g_StringPrintInformation.BufferLength     = BufferLength;
}

// NUL-terminate the string and return how many bytes would be
// required to hold the entire print job.
size_t FinalizeStringPrintInformation()
{	
	return g_Buffer->GetPosition() + 1;
}


// Prints a node to a string, as would happen with PRINT, using
// the given limits on width and depth.
// Returns the number of bytes needed to print the entire string for Node,
// including the NUL-terminator.
size_t
PrintNodeToString(
    const NODE * Node,
	CTextStream* buffer,
    long          PrintDepthLimit,
    long          PrintWidthLimit
    )
{
    // Initialize the printing engine to print to Buffer
    InitializeStringPrintInformation(buffer);

    // Print the node
    if (is_list(Node))
    {
        real_print_helper(
            NULL,
            MESSAGETYPE::Normal,
            Node,
            PrintDepthLimit,
            PrintWidthLimit);
    }
    else
    {
        real_print_node(
            NULL,
            MESSAGETYPE::Normal,
            Node,
            PrintDepthLimit,
            PrintWidthLimit);
    }

    // NUL-terminate the string and return the total bytes needed.
    return FinalizeStringPrintInformation();
}


// Prints a node to a string, as would happen with PRINT if no limits
// were placed on its width or depth.
// Returns the number of bytes needed to print the entire string for Node,
// including the NUL-terminator.
size_t
PrintNodeToString(
    const NODE * Node,
	CTextStream* buffer
    )
{
    return PrintNodeToString(Node, buffer, -1, -1);
}

wxString ToString(const NODE* Node)
{
	CStringTextStream csts;
	PrintNodeToString(Node, &csts);

	return csts.GetContent();
}
