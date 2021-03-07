//===========
// Display.h
//===========

#pragma once


//=======
// Using
//=======

#include "Desktop/Controls/Picture.h"
#include "Desktop/Overlapped.h"
#include "Graphics/Gdi/DeviceContext.h"


//===========
// Namespace
//===========

namespace Devices {
	namespace Displays {


//=========
// Display
//=========

class Display: public Object
{
protected:
	// Using
	using Bitmap=Graphics::Bitmap;
	using BitmapFormat=Graphics::BitmapFormat;
	using Control=Core::Controls::Control;
	using CoreWindow=Core::Window;
	using GdiBitmap=Graphics::Gdi::Bitmap;
	using GdiContext=Graphics::Gdi::DeviceContext;
	using Overlapped=Desktop::Overlapped;
	using Picture=Desktop::Controls::Picture;
	using RECT=Graphics::RECT;
	using Window=Desktop::Window;

public:
	// Common
	Handle<Control> Content;
	UINT GetHeight()const { return uHeight; }
	UINT GetWidth()const { return uWidth; }

protected:
	// Con-/Destructors
	Display(UINT Width, UINT Height, BitmapFormat Format);
	~Display();

private:
	// Common
	VOID OnLoop();
	Handle<GdiBitmap> hBitmap;
	Handle<GdiContext> hDeviceContext;
	Handle<Picture> hPicture;
	Handle<Overlapped> hWindow;
	UINT uHeight;
	UINT uWidth;
};

}}