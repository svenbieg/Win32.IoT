//=============
// AnalogPin.h
//=============

#pragma once


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {


//============
// Analog Pin
//============

class AnalogPin: public Object
{
public:
	// Con-/Destructors
	AnalogPin(BYTE Pin);

	// Common
	BYTE GetPin()const { return uPin; }
	FLOAT Read();

private:
	// Common
	BYTE uPin;
};

}}
