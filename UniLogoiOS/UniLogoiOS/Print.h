#ifndef __PRINT_NODE_H__
#define __PRINT_NODE_H__

#include <stdio.h>
#include "CTextStream.h"
struct NODE;

enum class MESSAGETYPE : int
{
    Normal, // normal text
    Trace,  // a TRACE message
    Error,  // an error message
};

extern void print_char(CTextStream *strm, MESSAGETYPE type, wchar_t ch);
extern void print_space(CTextStream *strm, MESSAGETYPE type);
extern void ndprintf(CTextStream *strm, MESSAGETYPE type, const wchar_t *fmt, ...);
extern long find_limit(const class CLocalizedNode & Node);
extern void print_helper(CTextStream *strm, MESSAGETYPE type, NODE *nd);
extern void print_node(CTextStream *strm, MESSAGETYPE type, NODE *nd);
extern void print_nobrak(CTextStream *strm, MESSAGETYPE type, NODE *nd);
extern void new_line(CTextStream *strm, MESSAGETYPE type);
extern NODE *lshow(NODE *args);
extern NODE *ltype(NODE *args);
extern NODE *lprint(NODE *args);

extern void InitializeStringPrintInformation(CTextStream* buffer);
extern size_t FinalizeStringPrintInformation();
extern wxString ToString(const NODE* Node);
extern size_t PrintNodeToString(const NODE * Node,CTextStream* buffer);
extern size_t PrintNodeToString(const NODE * Node,CTextStream* buffer,long PrintDepthLimit,long PrintWidthLimit);
// global variables
extern bool print_backslashes;
#endif
