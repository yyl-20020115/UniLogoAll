#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER

#include "MM.h"
#include "ArgumentUtils.h"
#include "StringPrintedNode.h"
#include "LogoCore.h"
#include "LogoData.h"
#include "Lists.h"
#include "MessageBox.h"
#include "Graphics.h"
#include "Error.h"
#include "Init.h"
#include "Eval.h"
#include "Parser.h"
#include "Sound.h"
#endif

#include "ScreenWindow.h"

#include "Devices.h"

#include "LocalizedStrings.h"
#include <wx/string.h>
#include <wx/timer.h>
#include <wx/event.h>
#include <wx/app.h>
#include <wx/window.h>
#include "CCheckQueueEvent.h"
#include "LogoEventQueue.h"

class UCTimer : public wxTimer
{
public:
	UCTimer():wxTimer(),callback(){}
	~UCTimer() {
		this->StopAndClear();
	}
	virtual void Notify() {
		if (this->GetId() < 16)
		{
			// not safe to yield
			callthing * callevent = callthing::CreateNoYieldFunctionEvent(this->GetCallBack());
			calllists.insert(callevent);
			this->PostCheckQueueMessage();
		}
		else if (this->GetId() < 32)
		{
			// yieldable
			callthing * callevent = callthing::CreateFunctionEvent(this->GetCallBack());
			calllists.insert(callevent);
			this->PostCheckQueueMessage();
		}
	}
	virtual void StopAndClear() {
		this->Stop();
		this->callback.clear();
	}
	virtual const wxString& GetCallBack() {
		return this->callback;
	}
	virtual void SetCallBack(const wxString& callback) {
		this->callback = callback;
	}
protected:
	virtual void PostCheckQueueMessage() {
		wxQueueEvent(this->GetOwner(), new CCheckQueueEvent(WM_CHECKQUEUE));
	}
protected:
	wxString callback;
};

// global variables
wxString mci_callback;    // MCI callback code

UCTimer* timers[MAX_TIMERS] = { 0 };

#ifdef _WINDOWS
static HMIDIOUT hMidiOut = 0;
#endif

bool IsAnyTimerActive()
{
	for (size_t i = 0; i < MAX_TIMERS; i++) {
		if (timers[i]!= 0 && timers[i]->IsRunning()) {
			return true;
		}
	}
	return false;
}

NODE *lsound(NODE *arg)
{
	/* open sound and get arg list */
	NODE *args = car(arg);

	/* must be a list that contains something */
	if (is_list(args) && (args != NIL))
	{
		/* count items in list and check that they are pairs */
		int total_args = list_length(args);
		bool even_args = even_p(total_args);

		/* if sound creation ok and we have pairs continue */
		if (even_args)
		{
			/* play each freq/duration pair */
			for (arg = args;
				arg != NIL;
				arg = cdr(arg))
			{
				int duration = 0;

				int hertz = (int)int_arg(arg);
				if (cdr(arg) != NIL)
				{
					duration = (int)int_arg(arg = cdr(arg));
				}
				/* play it */
				tone(hertz, duration);
			}
		}
		else
		{
			ShowMessageAndStop(
				GetResourceString(L"LOCALIZED_ERROR_SOUND"),
				GetResourceString(L"LOCALIZED_ERROR_BADINPUTNOTPAIRED"));
		}
	}
	else
	{
		ShowMessageAndStop(
			GetResourceString(L"LOCALIZED_ERROR_SOUND"),
			GetResourceString(L"LOCALIZED_ERROR_BADINPUT"));
	}

	return Unbound;
}

#ifdef _WINDOWS
static void ThrowGeneralMidiError(
	unsigned int MidiError
)
{
	wchar_t midiErrorBuffer[MAX_BUFFER_SIZE + 1] = L"MIDI ERROR";

	midiOutGetErrorText(MidiError, midiErrorBuffer, ARRAYSIZE(midiErrorBuffer) - 1);

	// report the error
	err_logo(MIDI_GENERAL, make_strnode(midiErrorBuffer));
}
#endif

NODE *lmidiopen(NODE *args)
{
#ifdef _WINDOWS
	if (hMidiOut != NULL)
	{
		// The device is already open.
		err_logo(MIDI_DEVICE_ALREADY_OPEN, NIL);
		return Unbound;
	}

	// The device is not already open, so open it.
	UINT id = MIDIMAPPER;

	if (args != NIL)
	{
		id = int_arg(args);
		if (stopping_flag == THROWING)
		{
			// non-integer input
			return Unbound;
		}
		if (id > midiOutGetNumDevs())
		{
			err_logo(MIDI_INVALID_DEVICE, NIL);
			return Unbound;
		}
	}

	MIDIOUTCAPS moc = { 0 };
	UINT MidiError = midiOutGetDevCaps(id, &moc, sizeof(moc));
	if (!MidiError)
	{
		MidiError = midiOutOpen(&hMidiOut, id, NULL, 0L, 0L);
	}

	if (MidiError)
	{
		// report the midi error
		ThrowGeneralMidiError(MidiError);
		return Unbound;
	}

	NODE * targ = make_strnode(moc.szPname);
	NODE * val = parser(targ, false);
	return val;
#else
	return Unbound;
#endif
}

NODE *lmidiclose(NODE *  /*args*/)
{
#ifdef _WINDOWS
	if (hMidiOut == NULL)
	{
		// the MIDI device isn't open
		err_logo(MIDI_NOT_OPEN, NIL);
		return Unbound;
	}

	// Close the device
	UINT MidiError = midiOutClose(hMidiOut);
	hMidiOut = 0;

	if (MidiError)
	{
		ThrowGeneralMidiError(MidiError);
		return Unbound;
	}
#endif
	return Unbound;
}

NODE *lmidimessage(NODE *arg)
{
#ifdef _WINDOWS    
	union
	{
		long mylong;
		char mybyte[4];
	}
	bytetolong;

	if (hMidiOut == NULL)
	{
		// the MIDI device isn't open
		err_logo(MIDI_NOT_OPEN, NIL);
		return Unbound;
	}

	NODE * args = car(arg);

	if (!is_list(args) || (args == NIL))
	{
		// The input must be a list with something in it.
		err_logo(BAD_DATA_UNREC, args);
		return Unbound;
	}

	UINT MidiError;

	// if not system exclusive then use shortmsg else use longmsg
	if (int_arg(args) != 0xF0)
	{

		// pack 3 bytes at a time and send them as short messages
		arg = args;

		while (arg != NIL)
		{
			bytetolong.mylong = 0L;
			bytetolong.mybyte[0] = int_arg(arg);
			if (cdr(arg) != NIL) bytetolong.mybyte[1] = int_arg(arg = cdr(arg));
			if (cdr(arg) != NIL) bytetolong.mybyte[2] = int_arg(arg = cdr(arg));
			MidiError = midiOutShortMsg(hMidiOut, bytetolong.mylong);
			if (MidiError) break;
			if (arg != NIL) arg = cdr(arg);
		}

	}
	else
	{
		// count elements in list so we can allocate buffer 
		int i = list_length(args);

		/* allocate structure buffer */
		// REVISIT: why not use malloc()?
		HANDLE    HdrHandle = (HANDLE)GlobalAlloc(GMEM_MOVEABLE | GMEM_SHARE | GMEM_ZEROINIT, sizeof(MIDIHDR));
		MIDIHDR * MidiOutHdr = (MIDIHDR *)GlobalLock((HGLOBAL)HdrHandle);

		HANDLE DataHandle = (HANDLE)GlobalAlloc(GMEM_MOVEABLE | GMEM_SHARE | GMEM_ZEROINIT, i);
		LPSTR  MidiOutData = (CHAR *)GlobalLock((HGLOBAL)DataHandle);

		/* pack the buffer array and set size */
		arg = args;

		for (int j = 0; j < i; j++)
		{
			MidiOutData[j] = int_arg(arg);
			arg = cdr(arg);
		}

		MidiOutHdr->dwBufferLength = i;

		MidiOutHdr->lpData = MidiOutData;

		/* prepare it, send it out, and unprepare it */

		MidiError = midiOutPrepareHeader(hMidiOut, MidiOutHdr, sizeof(MIDIHDR));
		if (!MidiError) MidiError = midiOutLongMsg(hMidiOut, MidiOutHdr, sizeof(MIDIHDR));
		if (!MidiError) MidiError = midiOutUnprepareHeader(hMidiOut, MidiOutHdr, sizeof(MIDIHDR));

		/* free buffer and struct */

		GlobalUnlock(DataHandle);
		GlobalFree(DataHandle);

		GlobalUnlock(HdrHandle);
		GlobalFree(HdrHandle);
	}

	if (MidiError)
	{
		// Let the user know that a midi error occured.
		ThrowGeneralMidiError(MidiError);
		return Unbound;
	}
#endif
	return Unbound;
}

NODE *lmci(NODE *args)
{
#ifdef _WINDOWS
	// get mci command string
	CStringPrintedNode command(car(args));

	// check for optional callback routine 
	wxString callback;
	if (cdr(args) != NIL)
	{
		callback = cnv_strnode_string(cdr(args));
	}

	wchar_t mciReturnBuffer[MAX_BUFFER_SIZE + 1] = { 0 };

	// send out command 
	DWORD mciError = mciSendString(
		(const wxString&)command,
		mciReturnBuffer,
		ARRAYSIZE(mciReturnBuffer) - 1,
		GetMainWindow());

	if (mciError != ERROR_SUCCESS)
	{
		// let user know about the error
		wchar_t mciErrorBuffer[MAX_BUFFER_SIZE + 1] = { 0 };
		mciGetErrorString(mciError, mciErrorBuffer, ARRAYSIZE(mciErrorBuffer) - 1);
		ShowMessageAndStop(GetResourceString(L"LOCALIZED_ERROR_MCI"), mciErrorBuffer);
	}
	else
	{
		// if something was returned then return it to user 
		if (mciReturnBuffer[0] != '\0')
		{
			NODE * targ = make_strnode(mciReturnBuffer);
			NODE * val = parser(targ, false);
			return val;
		}
	}
#endif
	return Unbound;
}

NODE *lsettimer(NODE *args)
{
	// get the timer id 
	int id =(int) getint(ranged_integer_arg(args, 1, MAX_TIMERS - 1));

	// get delay
	int delay = (int)getint(nonnegative_int_arg(args = cdr(args)));

	// get callback
	wxString callback = ArgumentUtils::cnv_strnode_string(args = cdr(args));

	if (NOT_THROWING)
	{
		timers[id]->SetCallBack(callback);

		// if not set sucessfully error
		if (!timers[id]->Start(delay,false))
		{
			err_logo(ERR_TYPES::OUT_OF_MEM, NIL);
			return Unbound;
		}
	}
	return Unbound;
}

NODE *lcleartimer(NODE *args)
{
	// get args
	int id =(int)getint(ranged_integer_arg(args, 1, MAX_TIMERS - 1));
	if (GetStoppingFlag() == CTRLTYPE::THROWING)
	{
		return Unbound;
	}
	// if timer was not set let user know
	if (!timers[id]->IsRunning())
	{
		err_logo(ERR_TYPES::TIMER_NOT_FOUND, NIL);
		return Unbound;
	}
	else 
	{
		timers[id]->StopAndClear();
	}

	return Unbound;
}

void init_timers()
{
	for (int i = 0; i < MAX_TIMERS; i++)
	{
		if (timers[i] != 0)
		{
			timers[i]->Stop();
			delete timers[i];
		}
		timers[i] = new UCTimer();
		if (timers[i] != 0) {
			timers[i]->SetOwner(wxTheApp->GetTopWindow(), i);
		}
	}
}

void halt_all_timers()
{
	//NOTICE: i was from 1
	for (int i = 0; i < MAX_TIMERS; i++)
	{
		if (timers[i] != 0)
		{
			timers[i]->Stop();
		}
	}
}
void clear_all_timers()
{
	//NOTICE: i was from 1
	for (int i = 0; i < MAX_TIMERS; i++)
	{
		if (timers[i] != 0) 
		{
			timers[i]->StopAndClear();
		}
	}
}
void uninitialize_timers()
{
	clear_all_timers();
	for (int i = 0; i < MAX_TIMERS; i++)
	{
		if (timers[i] != 0)
		{
			delete timers[i];
			timers[i] = 0;
		}
	}
}

NODE *lplaywave(NODE *args)
{
	CStringPrintedNode fileName(car(args));

	int flag = (int)getint(nonnegative_int_arg(args = cdr(args)));

	if (((const wxString&)fileName).length() == 0)
	{
		sndPlaySound(NULL, flag);
	}
	else
	{
		sndPlaySound((const wxString&)fileName, flag);
	}

	return Unbound;
}
