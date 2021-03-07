//===============
// AnalogPin.cpp
//===============

#include "pch.h"


//=======
// Using
//=======

#include "AnalogPin.h"


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {
	

//==================
// Con-/Destructors
//==================

AnalogPin::AnalogPin(BYTE upin):
uPin(upin)
{
}


//========
// Common
//========

FLOAT AnalogPin::Read()
{
return 0.f;
}

}}
