#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "FilesOp.h"
   #include "WorkSpace.h"
   #include "Files.h"
   #include "Init.h"
   #include "Eval.h"
   #include "Parser.h"
   #include "ScreenWindow.h"
   #include "Cursor.h"
//  #include "debugheap.h"

   #include "LocalizedStrings.h"
#include <wx/string.h>
#endif

void filesave(const wxString& FileName, FileTextStreamType Ftt)
{
    if (IsEditorOpen())
    {
        // Notify the user that they have an editor open
        // and that changes in the editor will not be saved.
#ifdef _WINDOWS
      ::MessageBox(
            GetCommanderWindow(),
			GetResourceString(L"LOCALIZED_EDITORISOPEN"),
			GetResourceString(L"LOCALIZED_INFORMATION"),
            MB_OK | MB_ICONQUESTION);
#endif
    }

	CFileTextStream * stream = CFileTextStream::OpenForWrite(FileName, Ftt);
	if (stream != 0) 
	{
		PrintWorkspaceToStream(stream);
		delete stream;
	}
}


// Loads and evaluates the contents of a file.
//
// Returns true if the file could be opened for reading,
// even if there was error while evaluating the contents.
// Returns false if the file couldn't be opened for reading.
bool fileload(const wxString& Filename, bool CheckBOM, FileTextStreamType* Ftt)
{
    bool isOk = false;
	//NOTICE: we check BOM to determine whether to use unicode encoding or use mbcs encoding
	CFileTextStream* filestream = CFileTextStream::OpenForRead(Filename, CheckBOM);// _wfopen(Filename, L"r");
    if (filestream != NULL)
    {
		if (Ftt != 0)
		{
			*Ftt = filestream->GetStreamType();
		}
        // save all global state that may be modified
        NODE *previous_startup = Startup.GetValue();

        FIXNUM savedValueStatus = g_ValueStatus;
        bool   savedIsDirty     = IsDirty;
        bool   savedYieldFlag   = yield_flag;
        CTextStream* savedLoadStream  = GetLoadStream();
        NODE * savedCurrentLine = vref(current_line);

		SetLoadStream(filestream);

        yield_flag = false;
        lsetcursorwait(NIL);

        start_execution();

        while (!GetLoadStream()->IsEOF() && NOT_THROWING)
        {
            assign(current_line, reader(GetLoadStream(), L""));
            NODE * exec_list = parser(current_line, true);
            g_ValueStatus = VALUE_STATUS_NotOk;
            eval_driver(exec_list);
			
        }

        // Restore some of the global state before running the startup
        // instruction list.
        lsetcursorarrow(NIL);
        yield_flag = savedYieldFlag;

        // Restore loadstream so that we don't confuse to_helper
        // into reading more data from the current (closed) file stream.
		SetLoadStream(savedLoadStream);

		delete filestream;
        // Run the any startup instruction list that may have been defined
        // when the file was loaded.  (The parameter "previous_startup" is
        // not what is run, but rather is used to detect if anything new
        // has been defined.
        runstartup(previous_startup);

        // Restore the rest of the global state.
        g_ValueStatus = savedValueStatus;
        IsDirty       = savedIsDirty;
        deref(current_line);
        current_line = savedCurrentLine;

        stop_execution();

        isOk = true;
    }
    else
    {
        isOk = false;
    }

    return isOk;
}
