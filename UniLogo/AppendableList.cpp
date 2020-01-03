#include "PCH.h"
#ifndef USE_PRECOMPILED_HEADER
   #include <string.h>

   #include "AppendableList.h"
   #include "LogoData.h"
//   #include "debugheap.h"
#endif

CAppendableList::CAppendableList()
    : m_Head(NIL),
      m_Tail(NULL)
{
}

void CAppendableList::AppendElement(NODE * NewLastElement)
{
    assert(m_Tail == NULL || cdr(m_Tail) == NIL);

    NODE * newtail = cons_list(NewLastElement);

    // Add this node to the list
    if (m_Tail == NULL)
    {
        // list was empty
        m_Head = newtail;
        m_Tail = m_Head;
    }
    else 
    {
        // list has at least one item
        setcdr(m_Tail, newtail);
        m_Tail = newtail;
    }
}

void CAppendableList::AppendList(NODE * NewTail)
{
    assert(m_Tail  == NULL || cdr(m_Tail) == NIL);
    assert(NewTail == NIL  || nodetype(NewTail) == CONS);

    // only append something if the new list isn't empty
    if (NewTail != NIL)
    {
        // Add this node to the list
        if (m_Tail == NULL)
        {
            // list was empty
            m_Head = NewTail;
            m_Tail = m_Head;
        }
        else 
        {
            // list has at least one item
            setcdr(m_Tail, NewTail);
            m_Tail = NewTail;
        }

        // advance m_Tail to the last node in NewTail
        while (cdr(m_Tail) != NIL)
        {
            m_Tail = cdr(m_Tail);
        }
    }
}

NODE * CAppendableList::GetList()
{
    return m_Head;
}
