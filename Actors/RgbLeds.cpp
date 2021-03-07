//=============
// RgbLeds.cpp
//=============

#include "pch.h"


//=======
// Using
//=======

#include "RgbLeds.h"

using namespace Graphics;


//===========
// Namespace
//===========

namespace Actors {


//==================
// Con-/Destructors
//==================

RgbLeds::RgbLeds(BYTE upin, UINT ucount, BYTE uchannel):
uPin(upin)
{}


//========
// Common
//========

VOID RgbLeds::Flush()
{
}

VOID RgbLeds::SetColor(UINT uled, COLOR c, FLOAT fbrightness)
{
}

}