#ifndef __ARGUMENT_UTILS_H__
#define __ARGUMENT_UTILS_H__

struct NODE;
class wxString;
class ArgumentUtils
{
// Functions
//extern void cnv_strnode_string(wchar_t *textbuf, NODE *arg);
public:
    static wxString cnv_strnode_string(NODE* arg);
    static wxString cap_strnzcpy(wxString text);
    static wxString NormalizeCaseForDisplay(wxString text);
};
#endif // _ARGUMENT_UTILS_H_
