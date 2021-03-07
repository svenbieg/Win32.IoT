//=====================
// SystemParagraph.cpp
//=====================

#include "pch.h"


//=======
// Using
//=======

#include "Runtime/Application.h"
#include "Web/Controls/Tables/Table.h"
#include "Web/Controls/Button.h"
#include "Web/Controls/Caption.h"
#include "Web/Controls/EditBox.h"
#include "Web/Controls/Label.h"
#include "Web/Controls/LogBox.h"
#include "Web/Controls/TextBlock.h"
#include "System.h"
#include "SystemParagraph.h"

using namespace Runtime;
using namespace Web::Controls;
using namespace Web::Controls::Tables;


//===========
// Namespace
//===========

namespace Web {
	namespace Templates {


//==================
// Con-/Destructors
//==================

SystemParagraph::SystemParagraph()
{
auto happ=Application::Current;
new Caption("System", 2);
Handle<Table> htable=new Table("simple");
new Row(); new Cell("static"); new TextBlock("Version"); new Cell("num"); new TextBlock(happ->Version);
new Row(); new Cell("static"); new TextBlock("System-Start"); new Cell("num"); new Label(System::Start);
new Row(); new Cell("static"); new TextBlock("Arbeitsspeicher"); new Cell("num");
	new Label(System::Memory->Available); new TextBlock(" / ");
	new Label(System::Memory->Total); new TextBlock(" Bytes");
htable->Break();
this->Select();
new Caption("Protokoll", 2);
Handle<LogBox> hlog=new LogBox("LogBox", happ->Log);
hlog->Style="font-size:smaller";
hlog->Break();
this->Break();
Parent->Select();
}

}}