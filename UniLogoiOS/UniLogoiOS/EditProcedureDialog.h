#ifndef __EDIT_PROCEDURE_DIALOG_H__
#define __EDIT_PROCEDURE_DIALOG_H__

#include "SelectProcedureDialog.h"

class CEditProcedureDialog : public CSelectProcedureDialog
{
public:
    CEditProcedureDialog(wxWindow *Parent);

protected:
    
    virtual void OnChoice(struct NODE * Procedures) wxOVERRIDE;

private:
    DECLARE_NO_COPY_CLASS(CEditProcedureDialog);
    DECLARE_EVENT_TABLE();
};

#endif

