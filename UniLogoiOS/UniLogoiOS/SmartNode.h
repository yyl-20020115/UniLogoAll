#ifndef __SMARTNODE_H__
#define __SMARTNODE_H__

class CSmartNode
{
public:
    CSmartNode() :
        m_Node(NIL)
    {
    }

    CSmartNode(NODE * Node) :
        m_Node(Node)
    {
        ref(m_Node);
    }

    ~CSmartNode()
    {
        deref(m_Node);
    }


    operator NODE*()
    {
        return m_Node;
    }

    const CSmartNode &
    operator=(
        NODE * NewNode
        )
    {
        ref(NewNode);
        deref(m_Node);
       
        m_Node = NewNode;
        return *this;
    }

private:
    NODE * m_Node;
};

#endif 
