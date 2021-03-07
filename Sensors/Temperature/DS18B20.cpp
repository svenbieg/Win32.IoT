//=============
// DS18B20.cpp
//=============

#include "pch.h"


//=======
// Using
//=======

#include "DS18B20.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Temperature {


//==================
// Con-/Destructors
//==================

DS18B20::DS18B20(Handle<String> hid, Handle<OneWire> hbus, UINT64 uid, DS18B20Resolution res):
Thermometer(hid),
uId(uid),
uResolution(res)
{}


//========
// Common
//========

VOID DS18B20::SetResolution(DS18B20Resolution res)
{
uResolution=res;
}

}}
