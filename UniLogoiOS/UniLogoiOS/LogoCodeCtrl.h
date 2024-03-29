#ifndef __LOGOCODECTRL_H__
#define __LOGOCODECTRL_H__

// When compiled in ANSI mode, neither wxStyledTextCtrl nor wxRichText
// supports multi-byte character sets, such as Simplified Chinese, or
// non-latin scripts, such as Cyrillic (Russian) or Greek.
// As a stop-gap solution until UniLogo is a pure-Unicode application,
// we provide an alternate implementation that is based on the wxTextCtrl.

//NOTICE: ALREADY UNICODE

#include <wx/stc/stc.h>
#include <wx/fdrepdlg.h>
#include <wx/print.h>
#include <stddef.h>
#ifdef __WXOSX_IPHONE__
#include <wx/textctrl.h>
#endif
#include "scintilla/include/ILexer.h"
#include "LexerModule.h"
#include "Catalogue.h"
extern LexerModule lmUniLogo;

class CLogoCodeCtrl :
#ifdef __WXOSX_IPHONE__
    public wxTextCtrl
#else
    public wxStyledTextCtrl
#endif
{
protected:
	static LexerModule* TheLanguageModule;
public:
	CLogoCodeCtrl(
		wxWindow       * Parent,
		wxWindowID       Id = wxID_ANY
	);

	bool SetFont(const wxFont & Font);

	void FindMatchingParen();
	void SelectMatchingParen();
    #ifndef __WXOSX_IPHONE__
	void AutoComplete();
#else
    void AutoComplete(){}
#endif
	bool IsTextSelected();
#ifndef __WXOSX_IPHONE__
	void
		Find(
			wxFindReplaceFlags WxSearchFlags,
			const wxString &   StringToFind
		);

	void
		Replace(
			wxFindReplaceFlags WxSearchFlags,
			const wxString &   StringToFind,
			const wxString &   ReplacementString
		);

	void
		ReplaceAll(
			wxFindReplaceFlags WxSearchFlags,
			const wxString &   StringToFind,
			const wxString &   ReplacementString
		);
#endif

	void Print();

	bool IsDirty() const;
	void ReopenAfterError();

	// Event handlers that a caller might delegate to.
	void OnUndo(wxCommandEvent& Event);
	void OnRedo(wxCommandEvent& Event);
	void OnCut(wxCommandEvent& Event);
	void OnCopy(wxCommandEvent& Event);
	void OnPaste(wxCommandEvent& Event);
	void OnDelete(wxCommandEvent& Event);
	void OnSelectAll(wxCommandEvent& Event);
	void OnHelpTopicSearch(wxCommandEvent& Event);

	// Functions to determine if menu items should be enabled.
	bool CanCut();
	bool CanCopy();
	bool CanDelete();
	bool CanSelectAll();
#ifndef __WXOSX_IPHONE__

	// Event handlers
	void OnUpdateUi(wxStyledTextEvent& event);
	void OnSavePointReached(wxStyledTextEvent& event);
	void OnSavePointLeft(wxStyledTextEvent& event);
#endif
	void OnContextMenu(wxContextMenuEvent& Event);


	// Helper functions
	void ScrollCaret();
#ifndef __WXOSX_IPHONE__

	void
		SetScintillaSearchFlags(
			wxFindReplaceFlags WxSearchFlags
		);
#endif
    
	enum class SEARCH_OPERATION :int
	{
		ReplaceAndFind,
		Find,
	};

#ifndef __WXOSX_IPHONE__

	void
		DoSearchOperation(
			SEARCH_OPERATION   SearchOperation,
			wxFindReplaceFlags WxSearchFlags,
			const wxString &   StringToFind,
			const wxString &   ReplacementString
		);
#else
    wxString GetText(){return wxString();}
#endif
	void
		FindMatchingParen(
			int & CurrentParenPosition,
			int & MatchingParenPosition
		);

	DECLARE_EVENT_TABLE();
	DECLARE_NO_COPY_CLASS(CLogoCodeCtrl);

	// Whether or not the contents of the editor have changed
	// since they were last synchronized with the file.
	bool m_IsDirty;
};


#endif
