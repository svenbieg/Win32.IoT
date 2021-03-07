//==============
// InputPin.cpp
//==============

#include "pch.h"


//=======
// Using
//=======

#include "Desktop/Controls/Button.h"
#include "InputPin.h"

using namespace Desktop;
using namespace Desktop::Controls;


//===========
// Namespace
//===========

namespace Devices {
	namespace Gpio {


//==================
// Con-/Destructors
//==================

InputPin::InputPin(Handle<String> hid, BYTE upin):
uPin(upin)
{
Value=new Bool(hid, true);
/*if(!hWindow)
	{
	hWindow=new Overlapped();
	WindowInfo info;
	info.BackgroundBrush=new Graphics::Gdi::Brush(GetSysColor(COLOR_BTNFACE));
	info.Class="InputPins";
	info.ClassStyle=CS_HREDRAW|CS_VREDRAW;
	info.Left=CW_USEDEFAULT;
	info.Style=WS_CLIPCHILDREN|WS_OVERLAPPED|WS_SYSMENU;
	info.StyleEx=WS_EX_TOOLWINDOW;
	info.Text="Input-Pins";
	info.Top=CW_USEDEFAULT;
	hWindow->Create(info);
	hStackPanel=new StackPanel(hWindow, StackOrientation::Vertical);
	}
Handle<Button> hbtn=new Button(hStackPanel, hid);
hWindow->MinimizeSize();
hWindow->Visible=true;*/
}


//================
// Common Private
//================

Handle<StackPanel> InputPin::hStackPanel;
Handle<Overlapped> InputPin::hWindow;

}}