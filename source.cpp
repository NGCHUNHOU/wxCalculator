#include "source.h"
#include "id.h"
#include "Icon.h"
#include "Window.h"

IMPLEMENT_APP(source);

source::source()
{
	
}

bool source::OnInit()
{
	if (!wxApp::OnInit())
	{
		return false;
	}
	Window* window = new Window(nullptr, window::id::MAINWINDOW, _("Calculator"), wxDefaultPosition, wxSize(360,400));
	window->Show();
	return true;
}

source::~source()
{

}