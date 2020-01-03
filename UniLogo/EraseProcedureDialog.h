#ifndef __ERASE_PROCEDURE_DIALOG_H__
#define __ERASE_PROCEDURE_DIALOG_H__

#include "SelectProcedureDialog.h"

class CEraseProcedureDialog : public CSelectProcedureDialog
{
public:
    CEraseProcedureDialog(wxWindow *Parent);

protected:
    virtual void OnChoice(struct NODE * Procedures);

private:
    DECLARE_NO_COPY_CLASS(CEraseProcedureDialog);
    DECLARE_EVENT_TABLE();
};

#endif

