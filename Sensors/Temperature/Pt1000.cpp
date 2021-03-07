//============
// Pt1000.cpp
//============

#include "pch.h"


//=======
// Using
//=======

#include "Pt1000.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Temperature {


//==================
// Con-/Destructors
//==================

Pt1000::Pt1000(Handle<String> hid, BYTE upin, FLOAT fres)
{
Temperature=new Physics::Temperature(hid, -300.f);
}

}}