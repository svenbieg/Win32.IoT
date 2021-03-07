//===========
// RgbLeds.h
//===========

#pragma once


//=======
// Using
//=======

#include "Graphics/Color.h"
#include "User/Storage/Buffer.h"


//===========
// Namespace
//===========

namespace Actors {


//==========
// Rgb-Leds
//==========

class RgbLeds: public Object
{
public:
	// Using
	using COLOR=Graphics::COLOR;

	// Con-/Destructors
	RgbLeds(BYTE Pin, UINT LedCount, BYTE RmtChannel=0);

	// Common
	VOID Flush();
	BYTE GetPin()const { return uPin; }
	VOID SetColor(UINT Led, COLOR Color, FLOAT Brightness=1.f);

private:
	// Common
	BYTE uPin;
};

}