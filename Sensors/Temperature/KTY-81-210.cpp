//================
// KTY-81-210.cpp
//================

#include "pch.h"


//=======
// Using
//=======

#include "KTY-81-210.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Temperature {

//==================
// Con-/Destructors
//==================

Kty_81_210::Kty_81_210(Handle<String> hid, BYTE upin, FLOAT fres)
{
Temperature=new Physics::Temperature(hid, -300.f);
}

}}