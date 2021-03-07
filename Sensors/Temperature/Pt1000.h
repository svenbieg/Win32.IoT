//==========
// Pt1000.h
//==========

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


//========
// Pt1000
//========

class Pt1000: public Object
{
public:
	// Con-/Destructors
	Pt1000(Handle<String> Id, BYTE AnalogPin, FLOAT Resistor=2200.f);

	// Common
	Handle<Physics::Temperature> Temperature;
};

}}
