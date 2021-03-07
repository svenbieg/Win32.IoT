//==================
// SystemHelper.cpp
//==================

#include "pch.h"


//=======
// Using
//=======

#include "System.h"

using namespace Devices;
using namespace Physics;


//========
// Common
//========

Handle<Memory> System::Memory=new Devices::Memory();

VOID System::Sleep(UINT ums)
{
}

Handle<TimePoint> System::Start=new TimePoint("SystemStart");
