#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
	EVT_BUTTON(0, Window::OnBtn0)
	EVT_BUTTON(1, Window::OnBtn1)
	EVT_BUTTON(2, Window::OnBtn2)
	EVT_BUTTON(3, Window::OnBtn3)
	EVT_BUTTON(4, Window::OnBtn4)
	EVT_BUTTON(5, Window::OnBtn5)
	EVT_BUTTON(6, Window::OnBtn6)
	EVT_BUTTON(7, Window::OnBtn7)
	EVT_BUTTON(8, Window::OnBtn8)
	EVT_BUTTON(9, Window::OnBtn9)
	EVT_BUTTON(10, Window::OnBtn10)
	EVT_BUTTON(11, Window::OnBtn11)
	EVT_BUTTON(12, Window::OnBtn12)
	EVT_BUTTON(13, Window::OnBtn13)
	EVT_BUTTON(14, Window::OnBtn14)
wxEND_EVENT_TABLE();

Window::Window(wxWindow* parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos,
    const wxSize& size,
    long style,
    const wxString& name) :
    wxFrame(parent, id, title, pos, size, style, name)
{
    SetIcon(wxIcon(wxT("./icon.ico"), wxBITMAP_TYPE_ICO));

	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWFRAME));

	wxBoxSizer* vMain;
	vMain = new wxBoxSizer(wxVERTICAL);

	/*wxBoxSizer* vTextOutputSizer;
	vTextOutputSizer = new wxBoxSizer(wxVERTICAL);

	wxTextCtrl* m_textCtrl10 = new wxTextCtrl(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT);
	m_textCtrl10->SetFont(wxFont(20, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

	vTextOutputSizer->Add(m_textCtrl10, 1, wxALL | wxEXPAND, 0);*/

	wxBoxSizer* vTextOutputSizer;
	vTextOutputSizer = new wxBoxSizer(wxVERTICAL);
	vTextOutputSizer->Add(0, 0, 1, wxEXPAND, 5);

	wxPanel* m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWFRAME));
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer(wxHORIZONTAL);

	wxTextCtrl* m_textctrl1 = new wxTextCtrl(this, 1500, wxT("0"), wxDefaultPosition, wxDefaultSize, wxEXPAND | wxBORDER_NONE | wxTE_RIGHT);
	m_textctrl1->SetFont(wxFont(30, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_textctrl1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	m_textctrl1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWFRAME));

	bSizer9->Add(m_textctrl1, 1, wxALL | wxALIGN_BOTTOM, 5);
	m_panel1->SetSizer(bSizer9);
	m_panel1->Layout();
	bSizer9->Fit(m_panel1);
	vMain->Add(m_panel1, 1, wxEXPAND, 0);

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer(wxVERTICAL);

	/*wxButton* m_button8 = new wxButton(this, wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button8->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button8->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/
	/*this->addBtn(new wxButton(this, wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));*/

	wxButton* m_button8 = this->addBtn(new wxButton(this, 0, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer5->Add(m_button8, 5, wxRIGHT | wxLEFT | wxEXPAND, 1);

	/*wxButton* m_button13 = new wxButton(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button13->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button13->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button13 = this->addBtn(new wxButton(this, 1, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer5->Add(m_button13, 5, wxALL | wxEXPAND, 1);

	/*wxButton* m_button14 = new wxButton(this, wxID_ANY, wxT("4"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button14->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button14->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button14 = this->addBtn(new wxButton(this, 2, wxT("4"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer5->Add(m_button14, 5, wxBOTTOM | wxRIGHT | wxLEFT | wxEXPAND, 1);

	/*wxButton* m_button15 = new wxButton(this, wxID_ANY, wxT("7"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button15->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button15->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button15 = this->addBtn(new wxButton(this, 3, wxT("7"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer5->Add(m_button15, 5, wxBOTTOM | wxRIGHT | wxLEFT | wxEXPAND, 1);

	/*wxButton* m_button16 = new wxButton(this, wxID_ANY, wxT("¡À"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button16->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button16->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button16 = this->addBtn(new wxButton(this, 4, wxT("¡À"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer5->Add(m_button16, 5, wxLEFT | wxRIGHT | wxBOTTOM | wxEXPAND, 1);


	bSizer3->Add(bSizer5, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer(wxVERTICAL);

	/*wxButton* m_button9 = new wxButton(this, wxID_ANY, wxT("CE"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button9->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button9->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button9 = this->addBtn(new wxButton(this, 5, wxT("CE"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer6->Add(m_button9, 5, wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button19 = new wxButton(this, wxID_ANY, wxT("2"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button19->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button19->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button19 = this->addBtn(new wxButton(this, 6, wxT("2"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer6->Add(m_button19, 5, wxTOP | wxBOTTOM | wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button20 = new wxButton(this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button20->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button20->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button20 = this->addBtn(new wxButton(this, 7, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer6->Add(m_button20, 5, wxRIGHT | wxBOTTOM | wxEXPAND, 1);

	/*wxButton* m_button21 = new wxButton(this, wxID_ANY, wxT("8"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button21->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button21->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button21 = this->addBtn(new wxButton(this, 8, wxT("8"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer6->Add(m_button21, 5, wxRIGHT | wxBOTTOM | wxEXPAND, 1);

	/*wxButton* m_button22 = new wxButton(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button22->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button22->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button22 = this->addBtn(new wxButton(this, 9, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer6->Add(m_button22, 5, wxRIGHT | wxEXPAND, 1);


	bSizer3->Add(bSizer6, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer(wxVERTICAL);

	/*wxButton* m_button10 = new wxButton(this, wxID_ANY, wxT("C"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button10->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button10->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button10 = this->addBtn(new wxButton(this, 10, wxT("C"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer7->Add(m_button10, 5, wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button24 = new wxButton(this, wxID_ANY, wxT("3"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button24->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button24->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button24 = this->addBtn(new wxButton(this, 11, wxT("3"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer7->Add(m_button24, 5, wxTOP | wxBOTTOM | wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button25 = new wxButton(this, wxID_ANY, wxT("6"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button25->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button25->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button25 = this->addBtn(new wxButton(this, 12, wxT("6"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer7->Add(m_button25, 5, wxBOTTOM | wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button26 = new wxButton(this, wxID_ANY, wxT("9"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button26->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button26->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button26 = this->addBtn(new wxButton(this, 13, wxT("9"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer7->Add(m_button26, 5, wxBOTTOM | wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button27 = new wxButton(this, wxID_ANY, wxT("."), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button27->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_button27->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

	wxButton* m_button27 = this->addBtn(new wxButton(this, 14, wxT("."), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE));
	bSizer7->Add(m_button27, 5, wxRIGHT | wxEXPAND, 1);

	bSizer3->Add(bSizer7, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer(wxVERTICAL);

	/*wxButton* m_button11 = new wxButton(this, wxID_ANY, wxT("¡Â"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button11->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString));
	m_button11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	m_button11->SetBackgroundColour(wxColour(247, 149, 48));*/

	wxButton* m_button11 = this->addBtn(new wxButton(this, wxID_ANY, wxT("¡Â"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE), wxSYS_COLOUR_HIGHLIGHTTEXT, wxColour(247, 149, 48));
	bSizer8->Add(m_button11, 5, wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button29 = new wxButton(this, wxID_ANY, wxT("X"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button29->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString));
	m_button29->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	m_button29->SetBackgroundColour(wxColour(247, 149, 48));*/

	wxButton* m_button29 = this->addBtn(new wxButton(this, wxID_ANY, wxT("X"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE), wxSYS_COLOUR_HIGHLIGHTTEXT, wxColour(247, 149, 48));
	bSizer8->Add(m_button29, 5, wxTOP | wxBOTTOM | wxRIGHT | wxEXPAND, 1);

 	/*wxButton* m_button30 = new wxButton(this, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button30->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString));
	m_button30->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	m_button30->SetBackgroundColour(wxColour(247, 149, 48));*/

	wxButton* m_button30 = this->addBtn(new wxButton(this, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE), wxSYS_COLOUR_HIGHLIGHTTEXT, wxColour(247, 149, 48));
	bSizer8->Add(m_button30, 5, wxBOTTOM | wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button31 = new wxButton(this, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button31->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString));
	m_button31->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	m_button31->SetBackgroundColour(wxColour(247, 149, 48));*/

	wxButton* m_button31 = this->addBtn(new wxButton(this, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE), wxSYS_COLOUR_HIGHLIGHTTEXT, wxColour(247, 149, 48));
	bSizer8->Add(m_button31, 5, wxBOTTOM | wxRIGHT | wxEXPAND, 1);

	/*wxButton* m_button32 = new wxButton(this, wxID_ANY, wxT("="), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
	m_button32->SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString));
	m_button32->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	m_button32->SetBackgroundColour(wxColour(247, 149, 48));*/

	wxButton* m_button32 = this->addBtn(new wxButton(this, wxID_ANY, wxT("="), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE), wxSYS_COLOUR_HIGHLIGHTTEXT, wxColour(247, 149, 48));
	bSizer8->Add(m_button32, 5, wxALL | wxEXPAND | wxEXPAND, 0);

	this->vecText.push_back("%");
	this->vecText.push_back("1");
	this->vecText.push_back("4");
	this->vecText.push_back("7");
	this->vecText.push_back("¡À");
	this->vecText.push_back("CE");
	this->vecText.push_back("2");
	this->vecText.push_back("5");
	this->vecText.push_back("8");
	this->vecText.push_back("0");
	this->vecText.push_back("3");
	this->vecText.push_back("6");
	this->vecText.push_back("9");
	this->vecText.push_back(".");

	bSizer3->Add(bSizer8, 1, wxEXPAND, 5);

	vMain->Add(bSizer3, 4, wxEXPAND, 0);

	this->SetSizer(vMain);
	this->Layout();

	this->Centre(wxBOTH);
}

void Window::OnBtn0(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[0];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn1(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[1];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn2(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[2];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn3(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[3];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn4(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[4];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn5(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[5];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn6(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[6];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn7(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[7];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn8(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[8];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn9(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[9];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn10(wxCommandEvent& event)
{
	// delete text output
	this->textOutput = "";
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn11(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[10];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn12(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[11];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn13(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[12];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

void Window::OnBtn14(wxCommandEvent& event)
{
	wxString* textMapper = &this->vecText[13];
	this->textOutput += *textMapper;
	wxStaticText::FindWindowById(1500)->SetLabel(this->textOutput);
};

Window::~Window()
{
    ;
};