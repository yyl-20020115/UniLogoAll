#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include "EraseProcedureDialog.h"

   #include "LocalizedStrings.h"
   #include "WorkSpace.h"  // for lerase
   #include "Eval.h"   // for process_special_conditions
#endif

// ----------------------------------------------------------------------------
// CEraseProcedureDialog
// ----------------------------------------------------------------------------

CEraseProcedureDialog::CEraseProcedureDialog(
    wxWindow * Parent
    )
    : CSelectProcedureDialog(Parent, GetResourceString(L"LOCALIZED_ERASEPROCEDURE"))
{
}

void
CEraseProcedureDialog::OnChoice(struct NODE * Procedures)
{
    // Erase the procedure.
    lerase(Procedures);

    // Handle any errors that may have occured.
    process_special_conditions();
}

BEGIN_EVENT_TABLE(CEraseProcedureDialog, CSelectProcedureDialog)
END_EVENT_TABLE()
