//============
// Bme280.cpp
//============

#include "pch.h"


//=======
// Using
//=======

#include "Bme280.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Climate {


//==========
// Settings
//==========

Bme280Settings::Bme280Settings():
Filter(Bme280Filter::Off),
HumidityOsr(Bme280Osr::X1),
I2cAddress(0x76),
Mode(Bme280Mode::Normal),
PressureOsr(Bme280Osr::X1),
Standby(Bme280Standby::MS1000),
TemperatureOsr(Bme280Osr::X1)
{}


//==================
// Con-/Destructors
//==================

Bme280::Bme280(Handle<String> hid, Bme280Settings* psettings):
Thermometer(hid+".Temperature")
{
Humidity=new Physics::Humidity(hid+".Humidity", -1);
Pressure=new Physics::Pressure(hid+".Pressure", -1);
}


//========
// Common
//========

VOID Bme280::Sleep()
{
}

VOID Bme280::Update()
{
}

}}