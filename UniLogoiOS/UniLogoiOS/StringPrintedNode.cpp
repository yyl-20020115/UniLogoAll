#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
    #include "StringPrintedNode.h"

    #include "LogoCore.h"
    #include "Print.h"
    #include "Init.h"
//    #include "debugheap.h"
#include <stdlib.h>
#endif


CStringPrintedNode::CStringPrintedNode(
	const NODE *        Node,
	PRINTLIMITSPECIFIER PrintLimit
) :
	m_Buffer()
{
	long printDepthLimit;
	long printWidthLimit;
	if (PrintLimit ==PRINTLIMITSPECIFIER::WithPrintLimits)
	{
		// Use the current limits for printing.
		printDepthLimit = find_limit(Printdepthlimit);
		printWidthLimit = find_limit(Printwidthlimit);
	}
	else
	{
		// There are no limits for printing.
		printDepthLimit = -1L;
		printWidthLimit = -1L;
	}


	// Print the node into the correctly sized buffer.
	PrintNodeToString(
		Node,
		&m_Buffer,
		printDepthLimit,
		printWidthLimit);

	// The number of bytes needed shouldn't have changed
	// from the first attempt to the second attempt.
	//assert(totalCharsNeeded == newTotalBytesNeeded);

}

CStringPrintedNode::~CStringPrintedNode()
{

}

//const wchar_t *
//CStringPrintedNode::GetString()
//{
//	return m_Buffer.GetContent();
//}

//wchar_t *
//CStringPrintedNode::GetString()
//{
//	return m_Buffer.GetContent();
//}
//
//
//CStringPrintedNode::operator const wchar_t *()
//{
//    return GetString();
//}

CStringPrintedNode::operator const wxString&()
{
	return this->GetContent();
}

const wxString & CStringPrintedNode::GetContent()
{
	return this->m_Buffer.GetContent();
}

//CStringPrintedNode::operator wchar_t *()
//{
//    return GetString();
//}
