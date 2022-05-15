#pragma once

#include "wx/wx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	double op1 = 0;
	double op2 = 0;

	double ret = 0;

	int DecimalCounter = 0;

	bool isDecimal = false;

	bool AdditionFlag = false;
	bool MultiplyFlag = false;
	bool DivisionFlag = false;
	bool SubtractionFlag = false;

	bool isReset = false;

public:
	wxButton* m_number_0 = nullptr;
	wxButton* m_number_1 = nullptr;
	wxButton* m_number_2 = nullptr;
	wxButton* m_number_3 = nullptr;
	wxButton* m_number_4 = nullptr;
	wxButton* m_number_5 = nullptr;
	wxButton* m_number_6 = nullptr;
	wxButton* m_number_7 = nullptr;
	wxButton* m_number_8 = nullptr;
	wxButton* m_number_9 = nullptr;

	wxButton* m_op_plus = nullptr;
	wxButton* m_op_minus = nullptr;
	wxButton* m_op_divide = nullptr;
	wxButton* m_op_multiply = nullptr;

	wxButton* m_equals = nullptr;

	wxButton* m_extra_decimal_point = nullptr;
	wxButton* m_extra_clear_number = nullptr;
	wxButton* m_extra_clear_char = nullptr;
	wxButton* m_extra_memory_plus = nullptr;
	wxButton* m_extra_sign = nullptr;

	wxListBox* m_results_list = nullptr;

	wxTextCtrl* m_active_number = nullptr;

public:
	void OnNumberZero(wxCommandEvent& evt);
	void OnNumberOne(wxCommandEvent& evt);
	void OnNumberTwo(wxCommandEvent& evt);
	void OnNumberThree(wxCommandEvent& evt);
	void OnNumberFour(wxCommandEvent& evt);
	void OnNumberFive(wxCommandEvent& evt);
	void OnNumberSix(wxCommandEvent& evt);
	void OnNumberSeven(wxCommandEvent& evt);
	void OnNumberEight(wxCommandEvent& evt);
	void OnNumberNine(wxCommandEvent& evt);

	void OnOperationPlus(wxCommandEvent& evt);
	void OnOperationMinus(wxCommandEvent& evt);
	void OnOperationDivide(wxCommandEvent& evt);
	void OnOperationMultiply(wxCommandEvent& evt);

	void OnEquals(wxCommandEvent& evt);

	void OnExtraDecimal(wxCommandEvent& evt);
	void OnExtraSign(wxCommandEvent& evt);
	void OnExtraMemoryPlus(wxCommandEvent& evt);
	void OnExtraClearNumber(wxCommandEvent& evt);
	void OnExtraClearChar(wxCommandEvent& evt);

	void ResetNumber();
	void ResetFlags();

	double StringToDouble(wxString str);
	wxString DoubleToString(double d);

	wxDECLARE_EVENT_TABLE();
};