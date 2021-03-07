//==============
// KTY-81-210.h
//==============

#pragma once


//=======
// Using
//=======

#include "Physics/Temperature.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Temperature {


//============
// KTY-81-210
//============

class Kty_81_210: public Object
{
public:
	// Con-/Destructors
	Kty_81_210(Handle<String> Id, BYTE AnalogPin, FLOAT Resistor=2200.f);

	// Common
	Handle<Physics::Temperature> Temperature;
};

}}
