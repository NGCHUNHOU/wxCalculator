#pragma once
#include "wx/wxprec.h"
#include <vector>
#include <string>

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif 

class Window : public wxFrame
{
public:
    int ctlID;
    long divideNum;
    long multipleNum;
    long minusNum;
    long addNum;
    long output;
    int mathOperation;
    std::vector<wxString> vecText;
    wxString textOutput;

    Window(wxWindow* parent,
        wxWindowID id,
        const wxString& title,
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_FRAME_STYLE,
        const wxString& name = wxASCII_STR(wxFrameNameStr));

protected:
    wxButton* addBtn(wxButton* btn)
    {
        /*wxButton* m_button8 = new wxButton(this, wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
        m_button8->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
        m_button8->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

        btn->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
        btn->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
        return btn;
    };

    wxButton* addBtn(wxButton* btn, wxSystemColour sysColor, wxColour color)
    {
        /*wxButton* m_button8 = new wxButton(this, wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_NONE);
        m_button8->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
        m_button8->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));*/

        btn->SetFont(wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
        btn->SetForegroundColour(wxSystemSettings::GetColour(sysColor));
        btn->SetBackgroundColour(color);
        return btn;
    };

private:
    void OnBtn0(wxCommandEvent& event);
    void OnBtn1(wxCommandEvent& event);
    void OnBtn2(wxCommandEvent& event);
    void OnBtn3(wxCommandEvent& event);
    void OnBtn4(wxCommandEvent& event);
    void OnBtn5(wxCommandEvent& event);
    void OnBtn6(wxCommandEvent& event);
    void OnBtn7(wxCommandEvent& event);
    void OnBtn8(wxCommandEvent& event);
    void OnBtn9(wxCommandEvent& event);
    void OnBtn10(wxCommandEvent& event);
    void OnBtn11(wxCommandEvent& event);
    void OnBtn12(wxCommandEvent& event);
    void OnBtn13(wxCommandEvent& event);
    void OnBtn14(wxCommandEvent& event);
    void OnBtn15(wxCommandEvent& event);
    void OnBtn16(wxCommandEvent& event);
    void OnBtn17(wxCommandEvent& event);
    void OnBtn18(wxCommandEvent& event);
    void OnBtn19(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
	~Window();
};

