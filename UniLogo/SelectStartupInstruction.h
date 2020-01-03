#ifndef __SELECTSTARTUPINSTRUCTION_H__
#define __SELECTSTARTUPINSTRUCTION_H__

#include <wx/dialog.h>

class wxListBox;
class wxTextCtrl;

class CSelectStartupInstructionDialog : public wxDialog
{
public:
    enum class EXPLAINTEXT : int
    {
        None,
        StartupNotDefined,
        StartupEmpty,
        StartupNotList,
    };

    CSelectStartupInstructionDialog(
        wxWindow   * Parent,
        EXPLAINTEXT  ExplainText
        );

    const wxString GetSelectedInstruction() const;

private:
    // event handlers
    void OnProcedureSelect(wxCommandEvent& Event);
    void OnInstructionTextChange(wxCommandEvent& Event);
    void OnUpdateOk(wxUpdateUIEvent& Event);

    // private members
    wxString     m_SelectedInstruction;
    wxTextCtrl * m_InstructionText;
    wxListBox  * m_ProcedureList;

    DECLARE_EVENT_TABLE();
    DECLARE_NO_COPY_CLASS(CSelectStartupInstructionDialog);
};

#endif
