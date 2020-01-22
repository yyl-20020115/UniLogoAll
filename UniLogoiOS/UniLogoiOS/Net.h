#ifndef __NET_H__
#define __NET_H__
#include <wx/socket.h>

#ifdef _WINDOWS
#include <windows.h>
#include <winsock.h>
#else
#include <sys/socket.h>
#include <netdb.h>
#ifndef HWND
#define HWND void*
#endif
#ifndef SOCKET
#define SOCKET int
#endif
#ifndef LONG
#define LONG long
#endif
#ifndef MAXGETHOSTSTRUCT
#define MAXGETHOSTSTRUCT 1024
#endif
#ifndef HOSTENT
#define HOSTENT hostent
#endif
#ifndef INVALID_SOCKET
#define INVALID_SOCKET -1
#endif
#ifndef SOCKET_ERROR
#define SOCKET_ERROR -1
#endif

#endif

struct NODE;

// Abstract base class for network connections
class CNetworkConnection 
{
public:
    bool IsEnabled() const;
    virtual void Disable();

    NODE * GetLastPacketReceived() const;
    void SetLastPacketReceived(const wxString& LastPacket);

    void Shutdown();

	bool SendValue(const wxString& Data);

protected:
	CNetworkConnection(); // enforce abstract class
	~CNetworkConnection(); // enforce abstract class
	
    void Enable(
        const wxString&    OnSendReady,
        const wxString&    OnReceiveReady
        );

    // private helper functions
    void AsyncReceive();

    void AsyncClose();

	void PostCheckQueue();

    void PostOnSendReadyEvent();

	virtual wxSocketBase* GetWorkerSocket();
	bool SendValue(const char * Data);

    // private member variables
    wxSocketBase* m_Socket;       // socket for the connection
    bool   m_IsConnected;  // socket is connected
    bool   m_IsBusy;       // socket is too busy to send
    bool   m_IsEnabled;    // if message processing is enabled for this socket

	wxString m_OnReceiveReady;  // Buffer for receive callback
	wxString m_OnSendReady;     // Buffer for send    callback
    wxString m_ReceiveValue;    // pointer to the last packet received


    // Private helper class for buffering (carrying over) network
    // data from  one "receive" call to another.
    class CCarryOverBuffer 
    {
    public:
        CCarryOverBuffer();

        void ReleaseBuffer();

        void Append(const char * AppendBuffer, int AppendBufferLength);
        void ShiftLeft(int ShiftAmount);

		char * m_Buffer;
        int    m_BufferSize;
        int    m_BytesOfData;
    };

    CCarryOverBuffer m_CarryOverData;  // a buffer for carrying over partial packets 
                                       // from one recv() call to the next.
};

// Class for client network connections
class CClientNetworkConnection : public CNetworkConnection
{
private:

    unsigned int m_RemotePort;
	wxString m_RemoteHostName;

public:
    CClientNetworkConnection();
	~CClientNetworkConnection();

    void
    Enable(
        const wxString&    OnSendReady,
        const wxString&    OnReceiveReady,
        unsigned int    RemotePort,
        const wxString&    RemoteHostName
        );

    int OnEvent(wxEvtHandler& handler, wxSocketEvent & event);

};


// Class for server network connections
class CServerNetworkConnection : public CNetworkConnection
{
public:
	CServerNetworkConnection();
	~CServerNetworkConnection();
public:
    void Enable(
		const wxString&     OnSendReady,
		const wxString&     OnReceiveReady,
        unsigned int    ServerPort
        );
	virtual void Disable();

    int OnAccept(wxEvtHandler& handler, wxSocketEvent & event);
	int OnInputOutput(wxEvtHandler& handler, wxSocketEvent & event);
	
protected:
	virtual wxSocketBase* GetWorkerSocket();

	wxSocketBase* m_Worker;

	unsigned int m_ServerPort;

};

// function declarations
extern NODE *lnetaccepton(NODE *args);
extern NODE *lnetacceptoff(NODE *arg);
extern NODE *lnetacceptsendvalue(NODE *args);
extern NODE *lnetacceptreceivevalue(NODE *arg);
extern NODE *lnetconnecton(NODE *args);
extern NODE *lnetconnectoff(NODE *arg);
extern NODE *lnetconnectsendvalue(NODE *args);
extern NODE *lnetconnectreceivevalue(NODE *arg);
extern NODE *lnetstartup(NODE *args);
extern NODE *lnetshutdown(NODE *arg);

// global variables
extern CClientNetworkConnection g_ClientConnection;
extern CServerNetworkConnection g_ServerConnection;

#endif // __NETWND_H_
