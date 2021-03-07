//====================
// WiFiConnection.cpp
//====================

#include "pch.h"


//=======
// Using
//=======

#pragma comment(lib, "iphlpapi")

#include <WinSock2.h>
#include <iphlpapi.h>
#include <sysinfoapi.h>
#include "Core/Application.h"
#include "User/Storage/Buffer.h"
#include "WiFiConnection.h"

using namespace Core;
using namespace User::Storage;


//===========
// Namespace
//===========

namespace Network {
	namespace WiFi {


//==================
// Con-/Destructors
//==================

WiFiConnection::WiFiConnection():
pAccessPoint(nullptr),
pStation(nullptr),
uStationGateway(0),
uStationIp(0),
uStationSubnet(0)
{
Current=this;
AccessPointIp=new IpAddress("WiFiAccessPointIp", 10, 0, 1, 1);
AccessPointSubnet=new IpAddress("WiFiAccessPointSubnet", 255, 255, 255, 0);
ULONG usize=16*1024;
Buffer buf(usize);
IP_ADAPTER_ADDRESSES* paddrs=(IP_ADAPTER_ADDRESSES*)buf.Begin();
if(GetAdaptersAddresses(AF_INET, GAA_FLAG_SKIP_ANYCAST|GAA_FLAG_SKIP_MULTICAST, nullptr, paddrs, &usize)!=ERROR_SUCCESS)
	return;
ULONG uip=0;
ULONG usubnet=0;
IP_ADAPTER_UNICAST_ADDRESS* puni=paddrs->FirstUnicastAddress;
if(puni)
	{
	sockaddr_in* pip=(sockaddr_in*)&(puni->Address.lpSockaddr);
	uip=pip->sin_addr.S_un.S_addr;
	#ifndef __cplusplus_winrt
	ConvertLengthToIpv4Mask(puni->OnLinkPrefixLength, &usubnet);
	#endif
	}
ULONG ugateway=0;
IP_ADAPTER_GATEWAY_ADDRESS* pgate=paddrs->FirstGatewayAddress;
if(pgate)
	{
	sockaddr_in* pip=(sockaddr_in*)&(pgate->Address.lpSockaddr);
	ugateway=pip->sin_addr.S_un.S_addr;
	}
StationIp->Set(uip);
StationGateway->Set(ugateway);
StationSubnet->Set(usubnet);
Application::Current->Initialized.Add(this, &WiFiConnection::OnApplicationInitialized);
}


//========
// Common
//========

VOID WiFiConnection::Close()
{
}

VOID WiFiConnection::Connect()
{
if(!AccessPointNetwork&&!StationNetwork)
	return;
Connected(this);
}

Handle<WiFiConnection> WiFiConnection::Current=nullptr;

VOID WiFiConnection::Disconnect()
{
Disconnected(this);
}


//================
// Common Private
//================

VOID WiFiConnection::OnApplicationInitialized()
{
CHAR phostname[32];
DWORD usize=32;
GetComputerNameExA(ComputerNameDnsHostname, phostname, &usize);
HostName=phostname;
}

}}
