//============
// PwmPin.cpp
//============

#include "pch.h"


//=======
// Using
//=======

#include "PwmPin.h"


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {


//==================
// Con-/Destructors
//==================

PwmPin::PwmPin(Handle<String> hid, BYTE upin, UINT uperiod):
uPeriod(uperiod),
uPin(upin)
{
Value=new Float(hid, 0.f);
}

}}
