#ifndef VIRTUALCAN_WINSOCK2_CONNECTION_H
#define VIRTUALCAN_WINSOCK2_CONNECTION_H

#include "base_connection.h"
#include "frame.h"
#include <winsock2.h>

class WinSock2CanConnection : public BaseCanConnection
{
	public:
		WinSock2CanConnection();
        virtual ~WinSock2CanConnection();
		int Connect();
		int Disconnect();

	protected:
		virtual int tx_data(const uint8_t* buffer, const int len);
		virtual int rx_data(uint8_t* buffer, const int len);

	private:
		SOCKET ConnectSocket = INVALID_SOCKET;
};

#endif