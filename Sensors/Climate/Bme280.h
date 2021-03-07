//==========
// Bme280.h
//==========

#pragma once


//=======
// Using
//=======

#include "Core/Timer.h"
#include "Physics/Humidity.h"
#include "Physics/Pressure.h"
#include "Sensors/Temperature/Thermometer.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Climate {


//======
// Mode
//======

enum class Bme280Mode: BYTE
{
Forced=1,
Normal=3
};


//=========
// Standby
//=========

enum class Bme280Standby: BYTE
{
US500=0,
US62500=1,
MS125=2,
MS250=3,
MS50=4,
MS1000=5,
MS10=6,
MS20=7
};


//==============
// Oversampling
//==============

enum class Bme280Osr: BYTE
{
X1=1,
X2=2,
X4=3,
X8=4,
X16=5
};


//========
// Filter
//========

enum class Bme280Filter: BYTE
{
Off=0,
X2,
X4,
X8,
X16
};


//==========
// Settings
//==========

class Bme280Settings
{
public:
	// Con-/Destructors
	Bme280Settings();

	// Common
	Bme280Filter Filter;
	Bme280Osr HumidityOsr;
	BYTE I2cAddress;
	Bme280Mode Mode;
	Bme280Osr PressureOsr;
	Bme280Standby Standby;
	Bme280Osr TemperatureOsr;
};


//========
// BME280
//========

class Bme280: public Sensors::Temperature::Thermometer
{
public:
	// Con-/Destructors
	Bme280(Handle<String> Id, Bme280Settings* Settings=nullptr);

	// Common
	Handle<Physics::Humidity> Humidity;
	Handle<Physics::Pressure> Pressure;
	VOID Sleep();
	VOID Update();
};

}}