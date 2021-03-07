//==================
// WiFiConnection.h
//==================

#pragma once


//=======
// Using
//=======

#include "Network/Connection.h"


//===========
// Namespace
//===========

namespace Network {
	namespace WiFi {


//=================
// WiFi-Connection
//=================

class WiFiConnection: public Connection
{
private:
	// Using
	using IpAddress=Network::IpAddress;

public:
	// Con-/Destructors
	WiFiConnection();

	// Common
	Handle<IpAddress> AccessPointIp;
	Handle<String> AccessPointNetwork;
	Handle<String> AccessPointPassword;
	Handle<IpAddress> AccessPointSubnet;
	VOID Close();
	VOID Connect();
	Event<WiFiConnection> Connected;
	static Handle<WiFiConnection> Current;
	VOID Disconnect();
	Event<WiFiConnection> Disconnected;
	BOOL IsConnected()const { return StationIp->Get()!=0; }
	Handle<StringVariable> StationNetwork;
	Handle<StringVariable> StationPassword;

private:
	// Common
	VOID OnApplicationInitialized();
	VOID* pAccessPoint;
	VOID* pStation;
	UINT uStationGateway;
	UINT uStationIp;
	UINT uStationSubnet;
};

}}
