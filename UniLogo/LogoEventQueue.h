#ifndef __LOGOEVENTQUEUE_H__
#define __LOGOEVENTQUEUE_H__

#include <stddef.h>
#include "LogoData.h"
#include <wx/string.h>

class qlink
{
    friend class qlist;

    qlink *next;
    qlink *prev;
    void * e;

    qlink(void * a, qlink * n, qlink * p)
    {
        e = a;
        next = n;
        prev = p;
    }
};


class qlist
{
    qlink *last;
public:
    void insert(void * a);
    void * get();
    void zap();
    void clear();
    void remove(void * a);
    qlink * find(void * a);

    void *
    find_element(
        bool (*match_proc) (void * context, void * element),
        void * context
    );

    qlist()
    {
        last = NULL;
    }

    qlist(void * a)
    {
        last = new qlink(a, NULL, NULL);
        last->next = last;
        last->prev = last;
    }

    ~qlist()
    {
        clear();
    }
};

enum class EVENTTYPE :int
{
    EVENTTYPE_Unknown,
    EVENTTYPE_Mouse,
    EVENTTYPE_Keyboard,
    EVENTTYPE_YieldFunction,
    EVENTTYPE_NoYieldFunction,
    EVENTTYPE_NetworkReceiveReady,
};

class callthing
{
private:
    // Hide the ctor. 
    // All events should be created with CreateEvent*().
    callthing() {};

public:
    // structured ways to create events
    static callthing * CreateKeyboardEvent(const wxString& function, int key);
    static callthing * CreateMouseEvent(const wxString& function, int x, int y);
    static callthing * CreateFunctionEvent(const wxString& function);
    static callthing * CreateNoYieldFunctionEvent(const wxString& function);

    static callthing * CreateNetworkReceiveReadyEvent(
        class CNetworkConnection * NetworkConnection,
        const wxString& OnReadyReceiveCallback,
        const wxString& Packet
        );

    ~callthing();

    // CONSIDER: a union would make this struct smaller
    EVENTTYPE            kind;
    CNetworkConnection * networkconnection;
	wxString               func;
	wxString               networkpacket;
    int                  arg1;
    int                  arg2;
};

struct calllist : public qlist
{
    void insert(callthing *a)
    {
        qlist::insert(a);
    }
    callthing *get()
    {
        return (callthing *) qlist::get();
    }
};


// function declarations
extern NODE *leventcheck(NODE *args);
extern void emptyqueue(void);
extern void checkqueue(void);

// global variables
extern calllist calllists;

#endif
