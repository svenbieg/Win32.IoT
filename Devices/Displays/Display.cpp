//=============
// Display.cpp
//=============

#include "pch.h"


//=======
// Using
//=======

#include "Core/Application.h"
#include "Desktop/Controls/Container.h"
#include "Display.h"

using namespace Core;
using namespace Graphics;
using namespace Desktop;
using namespace Graphics::Gdi;


//===========
// Namespace
//===========

namespace Devices {
	namespace Displays {


//============================
// Con-/Destructors Protected
//============================

Display::Display(UINT uwidth, UINT uheight, BitmapFormat format):
uHeight(uheight),
uWidth(uwidth)
{
hBitmap=new GdiBitmap(uwidth, uheight, BitmapFormat::RGB);
hDeviceContext=new GdiContext();
WindowInfo info;
info.BackgroundBrush=new Brush(Colors::Black);
info.Class="Display";
info.Height=100;
info.Left=CW_USEDEFAULT;
info.Style=WS_CLIPCHILDREN|WS_OVERLAPPEDWINDOW;
info.StyleEx=WS_EX_TOOLWINDOW;
info.Text="Display";
info.Top=CW_USEDEFAULT;
info.Width=100;
hWindow=new Overlapped(&info);
hPicture=new Picture(hWindow, hBitmap);
hPicture->MinSize={ uWidth, uHeight };
hWindow->MinimizeSize();
hWindow->Visible=true;
Application::Current->Loop.Add(this, &Display::OnLoop);
}

Display::~Display()
{
Application::Current->Loop.Remove(this);
}


//================
// Common Private
//================

VOID Display::OnLoop()
{
hDeviceContext->BeginPaint(hBitmap);
hDeviceContext->Clip={ 0, 0, (INT)uWidth, (INT)uHeight };
hDeviceContext->Offset={ 0, 0 };
hDeviceContext->Clear(hWindow->BackgroundBrush);
Content->Render(hDeviceContext);
hDeviceContext->EndPaint();
hWindow->Repaint();
}

}}