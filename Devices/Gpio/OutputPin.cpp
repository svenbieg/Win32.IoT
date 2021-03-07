//===============
// OutputPin.cpp
//===============

#include "pch.h"


//=======
// Using
//=======

#include "OutputPin.h"


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {


//==================
// Con-/Destructors
//==================

OutputPin::OutputPin(Handle<String> hid, BYTE upin, BOOL bvalue):
uPin(upin)
{
Value=new Bool(hid, bvalue);
Value->Changed.Add(this, &OutputPin::OnValueChanged);
}


//================
// Common Private
//================

VOID OutputPin::OnValueChanged(Handle<Variable> hvar)
{
BOOL b=Value->Get();
b? Up(this): Down(this);
Changed(this);
}

}}
