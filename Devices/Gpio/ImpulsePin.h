//==============
// ImpulsePin.h
//==============

#pragma once


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {


//=============
// Impulse-Pin
//=============

class ImpulsePin: public Object
{
public:
	// Con-/Destructors
	ImpulsePin(BYTE Pin, BYTE PcntUnit) {}

	// Common
	UINT GetImpulseCount()const { return 0; }
};

}}