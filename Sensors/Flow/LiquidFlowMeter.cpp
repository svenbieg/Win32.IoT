//=====================
// LiquidFlowMeter.cpp
//=====================

#include "pch.h"


//=======
// Using
//=======

#include "LiquidFlowMeter.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Flow {


//==================
// Con-/Destructors
//==================

LiquidFlowMeter::LiquidFlowMeter(Handle<String> hid, BYTE upin, BYTE upcnt, UINT uml)
{
Flow=new Physics::Flow(hid, -1);
}

}}
