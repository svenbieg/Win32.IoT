//=============
// OneWire.cpp
//=============

#include "pch.h"


//=======
// Using
//=======

#include "OneWire.h"


//===========
// Namespace
//===========

namespace Devices {


//==================
// Con-/Destructors
//==================

OneWire::OneWire(BYTE upin):
uPin(upin)
{}


//========
// Common
//========

BYTE OneWire::Read()
{
return 0;
}

VOID OneWire::Read(VOID* pbufv, UINT usize)
{
}

UINT OneWire::Scan(UINT64* pids, UINT umax)
{
return 0;
}

BOOL OneWire::Select(UINT64 uid)
{
return false;
}

VOID OneWire::Write(BYTE uvalue)
{
}

VOID OneWire::Write(VOID const* pbufv, UINT usize)
{
}

}