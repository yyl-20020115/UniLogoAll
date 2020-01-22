#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "EditProcedureDialog.h"

   #include "LocalizedStrings.h"
   #include "WorkSpace.h"  // for ledit
   #include "Eval.h"   // for process_special_conditions
#endif

// ----------------------------------------------------------------------------
// CEditProcedureDialog
// ----------------------------------------------------------------------------

CEditProcedureDialog::CEditProcedureDialog(
    wxWindow * Parent
    )
    : CSelectProcedureDialog(Parent, GetResourceString(L"LOCALIZED_EDITPROCEDURE"))
{
}

void
CEditProcedureDialog::OnChoice(struct NODE * Procedures)
{
    // Open the procedure(s) in the editor.
    ledit(Procedures);

    // Handle any errors that may have occured.
    process_special_conditions();
}

BEGIN_EVENT_TABLE(CEditProcedureDialog, CSelectProcedureDialog)
END_EVENT_TABLE()
