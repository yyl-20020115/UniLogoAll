#ifndef __LOCALIZEDNODE_H__
#define __LOCALIZEDNODE_H__

class CLocalizedNode
{
public:
    CLocalizedNode();

	~CLocalizedNode();

    void Initialize(
        const wchar_t    * PrimaryName,
        const wchar_t    * AlternateName
        );

    struct NODE * GetNode() const;
    const wchar_t *  GetName() const;
    bool          Equals(struct NODE * Node) const;

    // used only for special variables, like "caseignorep"
    struct NODE * GetValue() const;

private:
    struct NODE * m_Primary;
    struct NODE * m_Alternate;
};

#endif
