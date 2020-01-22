#ifndef __STRINGPRINTEDNODE_H__
#define __STRINGPRINTEDNODE_H__
#include "CStringTextStream.h"

// A helper class for printing a node into a buffer, dynamically
// allocating the buffer if necessary.
class CStringPrintedNode
{
public:

    enum class PRINTLIMITSPECIFIER : int
    {
        WithoutPrintLimits,
        WithPrintLimits,
    };
    
    CStringPrintedNode(
        const struct NODE * Node,
        PRINTLIMITSPECIFIER PrintLimit = PRINTLIMITSPECIFIER::WithoutPrintLimits
        );

    ~CStringPrintedNode();
public:

    //const wchar_t * GetString();
	//wchar_t * GetString();

    //operator const wchar_t *();
    operator const wxString&();

public:
	const wxString& GetContent();

private:
    // block the compiler-generated constructors
    CStringPrintedNode();
    CStringPrintedNode(const CStringPrintedNode &);

	CStringTextStream m_Buffer;
};

#endif // _STRINGPRINTEDNODE_H_
