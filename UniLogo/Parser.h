#ifndef __PARSER_H__
#define __PARSER_H__

#include <stdio.h>
#include "PCH.h"

#include "CFileTextStream.h"

// types
struct NODE;

enum class INPUTMODE :int
{
    INPUTMODE_None,
    INPUTMODE_To,
    INPUTMODE_List,
    INPUTMODE_Pause,
};

// function variables
extern wchar_t rd_fgetwc(CTextStream *strm);
extern void rd_clearbuffer(CTextStream *strm);
extern NODE *reader(CTextStream *strm, const wchar_t *prompt);
extern NODE *parser(NODE *nd, bool semi);
extern NODE *lparse(NODE *args);
extern NODE *lparse(NODE *args);
extern NODE *runparse(NODE *ndlist);
extern NODE *lrunparse(NODE *args);
extern void uninitialize_parser(void);

// global variables

extern bool& GetInputBlocking();
extern INPUTMODE& GetInputMode();
extern void SetErrorProcName(NODE * name);
extern void SetErrorToLine(NODE * line);
#endif // __PARSER_H_
