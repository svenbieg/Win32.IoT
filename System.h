//==========
// System.h
//==========

#pragma once


//=======
// Using
//=======

#include "Devices/MemoryClass.h"
#include "Physics/TimePoint.h"


//========
// System
//========

class System
{
private:
	// Using
	using TimePoint=Physics::TimePoint;

public:
	// Common
	static Handle<Devices::Memory> Memory;
	static VOID Sleep(UINT MilliSeconds);
	static Handle<TimePoint> Start;
};
