#include "Icon.h"

Icon::Icon(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
	SetIcon(wxIcon(wxT("./icon.ico"), wxBITMAP_TYPE_ICO));
	Centre();
};