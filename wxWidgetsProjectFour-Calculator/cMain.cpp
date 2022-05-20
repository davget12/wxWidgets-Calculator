#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE()
enum IDS
{
	zero, one, two, three, four, five, six, seven, eight, nine, binary, hex, decimal, divide, mult, subtract, add, equals, mod, negative, clear
};
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator Lab", wxPoint(30, 30), wxSize(517, 815))
{

	outputTxt = new wxTextCtrl(this, 101, "", wxPoint(0, 0), wxSize(375, 275), wxTE_RIGHT);
	clearBtn = new wxButton(this, 20, "CLR", wxPoint(375, 0), wxSize(125, 275));
	wxFont font(30, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

#pragma region Newing Buttons
	// Newing Buttons
	// Row 1
	binaryBtn = new wxButton(this, 10, "BIN", wxPoint(0, 275), wxSize(125, 100));
	hexBtn = new wxButton(this, 11, "HEX", wxPoint(125, 275), wxSize(125, 100));
	decimalBtn = new wxButton(this, 12, "DEC", wxPoint(250, 275), wxSize(125, 100));
	divideBtn = new wxButton(this, 13, "/", wxPoint(375, 275), wxSize(125, 100));

	// Row 2
	sevenBtn = new wxButton(this, 7, "7", wxPoint(0, 375), wxSize(125, 100));
	eightBtn = new wxButton(this, 8, "8", wxPoint(125, 375), wxSize(125, 100));
	nineBtn = new wxButton(this, 9, "9", wxPoint(250, 375), wxSize(125, 100));
	multBtn = new wxButton(this, 14, "*", wxPoint(375, 375), wxSize(125, 100));

	// Row 3
	fourBtn = new wxButton(this, 4, "4", wxPoint(0, 475), wxSize(125, 100));
	fiveBtn = new wxButton(this, 5, "5", wxPoint(125, 475), wxSize(125, 100));
	sixBtn = new wxButton(this, 6, "6", wxPoint(250, 475), wxSize(125, 100));
	subtractBtn = new wxButton(this, 15, "-", wxPoint(375, 475), wxSize(125, 100));

	// Row 4
	oneBtn = new wxButton(this, 1, "1", wxPoint(0, 575), wxSize(125, 100));
	twoBtn = new wxButton(this, 2, "2", wxPoint(125, 575), wxSize(125, 100));
	threeBtn = new wxButton(this, 3, "3", wxPoint(250, 575), wxSize(125, 100));
	addBtn = new wxButton(this, 16, "+", wxPoint(375, 575), wxSize(125, 100));

	// Row 5
	negativeBtn = new wxButton(this, 19, "(-)", wxPoint(0, 675), wxSize(125, 100));
	zeroBtn = new wxButton(this, 0, "0", wxPoint(125, 675), wxSize(125, 100));
	modBtn = new wxButton(this, 18, "%", wxPoint(250, 675), wxSize(125, 100));
	equalsBtn = new wxButton(this, 17, "=", wxPoint(375, 675), wxSize(125, 100));
#pragma endregion

#pragma region Setting Buttons Colors/Fonts
	// setting buttons colors
	clearBtn->SetBackgroundColour(wxColour(33, 203, 169));
	zeroBtn->SetBackgroundColour(wxColour(133, 19, 157));
	oneBtn->SetBackgroundColour(wxColour(133, 19, 157));
	twoBtn->SetBackgroundColour(wxColour(133, 19, 157));
	threeBtn->SetBackgroundColour(wxColour(133, 19, 157));
	fourBtn->SetBackgroundColour(wxColour(133, 19, 157));
	fiveBtn->SetBackgroundColour(wxColour(133, 19, 157));
	sixBtn->SetBackgroundColour(wxColour(133, 19, 157));
	sevenBtn->SetBackgroundColour(wxColour(133, 19, 157));
	eightBtn->SetBackgroundColour(wxColour(133, 19, 157));
	nineBtn->SetBackgroundColour(wxColour(133, 19, 157));
	binaryBtn->SetBackgroundColour(wxColour(128, 0, 64));
	hexBtn->SetBackgroundColour(wxColour(128, 0, 64));
	decimalBtn->SetBackgroundColour(wxColour(128, 0, 64));
	divideBtn->SetBackgroundColour(wxColour(0, 128, 128));
	multBtn->SetBackgroundColour(wxColour(0, 128, 128));
	subtractBtn->SetBackgroundColour(wxColour(0, 128, 128));
	addBtn->SetBackgroundColour(wxColour(0, 128, 128));
	modBtn->SetBackgroundColour(wxColour(128, 0, 64));
	negativeBtn->SetBackgroundColour(wxColour(128, 0, 64));
	equalsBtn->SetBackgroundColour(wxColour(239, 62, 91));

	// Setting button fonts
	clearBtn->SetFont(font);
	zeroBtn->SetFont(font);
	oneBtn->SetFont(font);
	twoBtn->SetFont(font);
	threeBtn->SetFont(font);
	fourBtn->SetFont(font);
	fiveBtn->SetFont(font);
	sixBtn->SetFont(font);
	sevenBtn->SetFont(font);
	eightBtn->SetFont(font);
	nineBtn->SetFont(font);
	binaryBtn->SetFont(font);
	hexBtn->SetFont(font);
	decimalBtn->SetFont(font);
	divideBtn->SetFont(font);
	multBtn->SetFont(font);
	subtractBtn->SetFont(font);
	addBtn->SetFont(font);
	equalsBtn->SetFont(font);
	modBtn->SetFont(font);
	negativeBtn->SetFont(font);

	// Setting Buttons Foreground Color
	clearBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	zeroBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	oneBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	twoBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	threeBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	fourBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	fiveBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	sixBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	sevenBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	eightBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	nineBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	binaryBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	hexBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	decimalBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	divideBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	multBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	subtractBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	addBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	equalsBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	modBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	negativeBtn->SetOwnForegroundColour(wxColour(*wxWHITE));

#pragma endregion

#pragma region Setting Output Text Color/Font
	// Output Text Box Font
	outputTxt->SetFont(font);

	// Output Text box color
	outputTxt->SetBackgroundColour(wxColour(*wxBLACK));
	outputTxt->SetOwnForegroundColour(wxColour(*wxWHITE));
#pragma endregion

}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{


	switch (evt.GetId())
	{

#pragma region numbers 0-9
		// numbers 0-9
	case zero:
	{
		*outputTxt << 0;
		break;
	}
	case one:
	{
		*outputTxt << 1;
		break;
	}
	case two:
	{
		*outputTxt << 2;
		break;
	}
	case three:
	{
		*outputTxt << 3;
		break;
	}
	case four:
	{
		*outputTxt << 4;
		break;
	}
	case five:
	{
		*outputTxt << 5;
		break;
	}
	case six:
	{
		*outputTxt << 6;
		break;
	}
	case seven:
	{
		*outputTxt << 7;
		break;
	}
	case eight:
	{
		*outputTxt << 8;
		break;
	}
	case nine:
	{
		*outputTxt << 9;
		break;
	}
#pragma endregion

#pragma region BIN/HEX/DEC
	// Binary
	case binary:
	{
		GetInputValue();
		*outputTxt << " BINARY ";
		break;
	}
	// Hex
	case hex:
	{
		GetInputValue();
		*outputTxt << " HEXADECIMAL ";

		break;
	}
	// Decimal
	case decimal:
	{
		GetInputValue();
		*outputTxt << " DECMAL ";

		break;
	}
#pragma endregion

#pragma region Operands
	// Divide
	case divide:
	{
		operatorID = divide;
		GetInputValue();
		*outputTxt << " / ";
		break;
	}
	// Mult
	case mult:
	{
		operatorID = mult;
		GetInputValue();
		*outputTxt << " * ";
		break;
	}
	// Sub
	case subtract:
	{
		operatorID = subtract;
		GetInputValue();
		*outputTxt << " - ";

		break;
	}
	// add
	case add:
	{
		operatorID = add;
		GetInputValue();
		*outputTxt << " + ";
		break;
	}
	// Equals
	case equals:
	{
		GetInputValue();
		// Uncomment when doing actual functionality of calculator
		*outputTxt << " = ";
		CalculateEquation();
		break;
	}
	// Mod
	case mod:
	{
		operatorID = mod;

		GetInputValue();
		*outputTxt << " MOD ";
		break;
	}
	// Negate
	case negative:
	{
		operatorID = negative;
		GetInputValue();
		// Uncomment when doing actual functionality of calculator
		//CalculateEquation();
		*outputTxt << " NEGATE ";
		break;
	}
	// clear
	case clear:
	{
		outputTxt->Clear();
		calcValues.clear();
		calcAnswer = 0;
		break;
	}
#pragma endregion

#pragma region Default
	default:
	{

		outputTxt->Clear();
		*outputTxt << "ERROR";
		break;
	}
#pragma endregion

	}

	evt.Skip();
}

void cMain::GetInputValue()
{
	wxString txtValue = outputTxt->GetValue();
	double fValue = 0;
	txtValue.ToDouble(&fValue);
	calcValues.push_back(fValue);


}

void cMain::CalculateEquation()
{
	if (calcValues.size() < 2)
	{
		*outputTxt << calcAnswer;
		return;
	}
	switch (operatorID)
	{
		// Divide
	case divide:
	{
		calcAnswer = calcValues[0] / calcValues[1];
		calcValues.clear();
		*outputTxt << calcAnswer;

		break;
	}
	// Mult
	case mult:
	{

		calcAnswer = calcValues[0] * calcValues[1];
		calcValues.clear();
		*outputTxt << calcAnswer;
		break;
	}
	// Sub
	case subtract:
	{

		calcAnswer = calcValues[0] - calcValues[1];
		calcValues.clear();
		*outputTxt << calcAnswer;
		break;
	}
	// add
	case add:
	{

		for (int i = 0; i < calcValues.size(); i++)
		{
			calcAnswer += calcValues[i];
		}
		calcValues.clear();
		*outputTxt << calcAnswer;
		calcAnswer = 0;
		break;
	}
	// Mod
	case mod:
	{

		calcAnswer = fmod(calcValues[0], calcValues[1]);
		calcValues.clear();
		*outputTxt << calcAnswer;
		break;
	}
	// Negate
	case negative:
	{
		calcAnswer = calcValues[0] * -1;
		calcValues.clear();
		*outputTxt << calcAnswer;
		break;
	}
	default:
		break;
	}
}