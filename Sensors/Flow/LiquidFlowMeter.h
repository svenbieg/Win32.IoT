//===================
// LiquidFlowMeter.h
//===================

#pragma once


//=======
// Using
//=======

#include "Physics/Flow.h"


//===========
// Namespace
//===========

namespace Sensors {
	namespace Flow {


//===================
// Liquid-Flow-Meter
//===================

class LiquidFlowMeter: public Object
{
public:
	// Con-/Destructors
	LiquidFlowMeter(Handle<String> Id, BYTE Pin, BYTE PcntUnit, UINT MillisPerTick);

	// Common
	Handle<Physics::Flow> Flow;
};

}}
