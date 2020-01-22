#ifndef __UNILOGO_H__
#define __UNILOGO_H__

#include "LogoCore.h" // for MAX_BUFFER_SIZE
#include "Devices.h"
#include "CCheckQueueEvent.h"
class CMainFrame;
class wxFileName;
struct NODE;

///////////////////////////////////////////////////////////////
// Constants
const int DEFAULT_COMMANDER_HEIGHT = 96;// 150;
const int MIN_COMMANDER_HEIGHT     = 72;// 124;
const int DEFAULT_SPLITTER_WIDTH   = 5;

///////////////////////////////////////////////////////////////
// Global Variables

extern int  BitMapWidth;
extern int  BitMapHeight;

extern bool bFixed;
extern class wxString edit_editexit; // editor callback instruction list

///////////////////////////////////////////////////////////////
// Functions
void single_step_box(NODE * the_line);
wxString promptuser(const wchar_t *prompt);

//#ifdef UNILOGO_WXWIDGETS

#include <wx/app.h>

///////////////////////////////////////////////////////////////
// Classes
class CUniLogo : public wxApp
{
public:
    CUniLogo();

    static CMainFrame * GetMainFrame();

    virtual bool OnInit();
    virtual int  OnExit();

    void OnIdle(wxIdleEvent & Event);

private:
	wxString ProcessCommandLine(wxString lang);
	void LoadLocalizedStringFile(const wxString& lang);

    DECLARE_NO_COPY_CLASS(CUniLogo)
    DECLARE_EVENT_TABLE();
    
private:
    bool hasLoadedFileToLoad;
    bool hasRunStartup;
};


#endif
