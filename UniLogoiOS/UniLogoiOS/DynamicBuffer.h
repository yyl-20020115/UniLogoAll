#ifndef __DYNAMICBUFFER_H__
#define __DYNAMICBUFFER_H__

#include <stddef.h>
#include <wx/string.h>
class CDynamicBuffer
{
public:
    friend class CDynamicBufferInvariant;

    CDynamicBuffer();
    ~CDynamicBuffer();

    bool IsEmpty() const;
    void Empty();
    void Dispose();
    void AppendString(const wchar_t * ToAppend);
    void AppendChar(wchar_t ToAppend);

	const wxString& GetBuffer();
    size_t GetBufferLength() const;
    int    PopChar();

private:

	wxString text;
};

#endif // _DYNAMICBUFFER_H_
