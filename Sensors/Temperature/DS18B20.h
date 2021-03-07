//===========
// DS18B20.h
//===========

#pragma once


//=======
// Using
//=======

#include "Devices/OneWire.h"
#include "Thermometer.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Temperature {


//============
// Resolution
//============

enum class DS18B20Resolution: BYTE
{
Bits9,
Bits10,
Bits11,
Bits12
};


//============================
// DS18B20 Dallas Temperature
//============================

class DS18B20: public Thermometer
{
private:
	// Using
	using OneWire=Devices::OneWire;

public:
	// Con-/Destructors
	DS18B20(Handle<String> Id, Handle<OneWire> Bus, UINT64 BusId, DS18B20Resolution Resolution=DS18B20Resolution::Bits12);

	// Common
	DS18B20Resolution GetResolution()const { return uResolution; }
	VOID SetResolution(DS18B20Resolution Resolution);

private:
	// Common
	UINT64 uId;
	DS18B20Resolution uResolution;
};

}}
