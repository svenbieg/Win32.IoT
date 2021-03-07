//============
// InputPin.h
//============

#pragma once


//=======
// Using
//=======

#include "Desktop/Controls/StackPanel.h"
#include "Desktop/Overlapped.h"
#include "BoolClass.h"


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {


//===========
// Input-Pin
//===========

class InputPin: public Object
{
private:
	// Using
	using Overlapped=Desktop::Overlapped;
	using StackPanel=Desktop::Controls::StackPanel;
	using POINT=Graphics::POINT;
	using RECT=Graphics::RECT;
	using Window=Desktop::Window;

public:
	// Con-/Destructors
	InputPin(Handle<String> Id, BYTE Pin);

	// Common
	Event<InputPin> Changed;
	Event<InputPin> Down;
	inline BYTE GetPin()const { return uPin; }
	Event<InputPin> Up;
	Handle<Bool> Value;

private:
	// Common
	static Handle<StackPanel> hStackPanel;
	static Handle<Overlapped> hWindow;
	BYTE uPin;
};

}}
