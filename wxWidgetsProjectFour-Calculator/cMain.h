#pragma once
#include "wx\wx.h"
#include <vector>
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:
	std::vector<double> calcValues;

	double calcAnswer = 0;
	int operatorID = -1;
#pragma region Initialize Buttons Members

	wxTextCtrl* outputTxt = nullptr;
	wxButton* clearBtn = nullptr;
	wxButton* zeroBtn = nullptr;
	wxButton* oneBtn = nullptr;
	wxButton* twoBtn = nullptr;
	wxButton* threeBtn = nullptr;
	wxButton* fourBtn = nullptr;
	wxButton* fiveBtn = nullptr;
	wxButton* sixBtn = nullptr;
	wxButton* sevenBtn = nullptr;
	wxButton* eightBtn = nullptr;
	wxButton* nineBtn = nullptr;
	wxButton* binaryBtn = nullptr;
	wxButton* hexBtn = nullptr;
	wxButton* decimalBtn = nullptr;
	wxButton* divideBtn = nullptr;
	wxButton* multBtn = nullptr;
	wxButton* subtractBtn = nullptr;
	wxButton* addBtn = nullptr;
	wxButton* equalsBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* negativeBtn = nullptr;
#pragma endregion

	void OnButtonClicked(wxCommandEvent& evt);
	void GetInputValue();
	void CalculateEquation();
	wxDECLARE_EVENT_TABLE();

};