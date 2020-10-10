#pragma once
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif 

class source : public wxApp
{
public:
	source();
	bool OnInit();
	~source();
};

DECLARE_APP(source);

