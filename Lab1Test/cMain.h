#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton **btn;

	int *nField = nullptr;
	bool bFirstClick = true;

	void onButtonClicked(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};

