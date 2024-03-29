#ifndef __MINIEDITOR_H__
#define __MINIEDITOR_H__

#include <wx/dialog.h>

class CMiniEditorTextCtrl;

class CMiniEditor : public wxDialog
{
public:
    CMiniEditor(wxWindow *Parent, const wxString& ToLine);
    ~CMiniEditor();

    const wxString GetProcedureBody() const;

private:
    CMiniEditorTextCtrl * m_TextField;

    DECLARE_NO_COPY_CLASS(CMiniEditor);
};

#endif
