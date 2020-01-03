#ifndef __FILES_H__
#define __FILES_H__

#include <stdio.h>
#include <assert.h>
#include "CFileTextStream.h"

struct NODE;

// types
class CFileStream
{
public:
    CFileStream(CTextStream * DefaultStream);

    void   SetStreamToOpenFile(NODE * FileName);
    void   ResetToDefaultStream();
    bool   IsNamed(NODE * FileName) const;
    bool   IsBinary() const;
    NODE * GetName() const;
    NODE * GetPosition() const;
    void   SetPosition(NODE * Arguments);

	CTextStream * GetStream()
    {
        assert(m_Stream != NULL);
        return m_Stream;
    }

    void SetStream(CTextStream * Stream)
    {
        assert(m_Stream != NULL);
        m_Stream = Stream;
        assert(m_Stream != NULL);
    }

private:
    NODE *  m_Name;
	CTextStream *  m_Stream;
	CTextStream *  m_DefaultStream;
    bool    m_StreamIsBinary;
};

// global variables
extern NODE *current_line;
extern CTextStream *stdinstream;
extern CTextStream *stdoutstream;

// function declarations
extern void PrintWorkspaceToStream(CTextStream *stream);
extern NODE *ldribble(NODE *arg);
extern NODE *lnodribble(NODE *arg);
extern NODE *lopenread(NODE *arg);
extern NODE *lopenwrite(NODE *arg);
extern NODE *lopenappend(NODE *arg);
extern NODE *lopenupdate(NODE *arg);
extern NODE *lallopen(NODE *arg);
extern NODE *lclose(NODE *arg);
extern NODE *lsetwrite(NODE *arg);
extern NODE *lsetread(NODE *arg);
extern NODE *lreader(NODE *arg);
extern NODE *lwriter(NODE *arg);
extern NODE *lerasefile(NODE *arg);
extern NODE *lsave(NODE *arg);
extern void runstartup(NODE *oldst);
extern void silent_load(NODE *arg, const wchar_t *prefix);
extern NODE *lload(NODE *arg);
extern NODE *lreadlist(NODE *arg);
extern NODE *lreadword(NODE *arg);
extern NODE *lreadrawline(NODE *arg);
extern NODE *lreadchar(NODE *arg);
extern NODE *lreadchars(NODE *args);
extern NODE *leofp(NODE *arg);
extern NODE *lkeyp(NODE *arg);
extern NODE *lreadpos(NODE *arg);
extern NODE *lsetreadpos(NODE *arg);
extern NODE *lwritepos(NODE *arg);
extern NODE *lsetwritepos(NODE *arg);
extern NODE *lcloseall(NODE * arg);
extern void uninitialize_files(void);
extern FILE *OpenFile(NODE *arg, const wchar_t *access);

// global variables
extern FileTextStreamType& GetDefaultFileTextStreamType();

extern CTextStream* GetInputStream();
extern CTextStream* GetOutputStream();

extern CTextStream * GetLoadStream();
extern CTextStream * GetDribbleStream();

extern void SetInputStream(CTextStream* stream);
extern void SetOutputStream(CTextStream* stream);

extern void SetLoadStream(CTextStream* stream);
extern void SetDribbleStream(CTextStream* stream);


extern void OpenDribble(NODE * arg);
extern void CloseDribble();
extern void DribbleWriteChar(wchar_t ch);
extern void DribbleWriteText(const wchar_t * text);
extern void DribbleWriteLine(const wchar_t * text);
extern void FreeAllPredefinedStreams();
#endif // __FILES_H_
