#include "cMain.h"
#include "ButtonFactory.h"

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

#pragma region Creating Buttons
	ButtonFactory factory = ButtonFactory(this);
	// Newing Buttons
	clearBtn = factory.CreateClearButton();
	// Row 1
	binaryBtn = factory.CreateBinaryButton();
	hexBtn = factory.CreateHexButton();
	decimalBtn = factory.CreateDecimalButton();
	divideBtn = factory.CreateDivideButton();

	// Row 2		
	sevenBtn = factory.CreateSevenButton();
	eightBtn = factory.CreateEightButton();
	nineBtn = factory.CreateNineButton();
	multBtn = factory.CreateMultButton();

	// Row 3		
	fourBtn = factory.CreateFourButton();
	fiveBtn = factory.CreateFiveButton();
	sixBtn = factory.CreateSixButton();
	subtractBtn = factory.CreateSubtractButton();

	// Row 4		
	oneBtn = factory.CreateOneButton();
	twoBtn = factory.CreateTwoButton();
	threeBtn = factory.CreateThreeButton();
	addBtn = factory.CreateAddButton();

	// Row 5		
	negativeBtn = factory.CreateNegativeButton();
	zeroBtn = factory.CreateZeroButton();
	modBtn = factory.CreateModButton();
	equalsBtn = factory.CreateEqualsButton();
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
	delete[] operatorIDs;
}

#pragma region On Button Clicked
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
		operatorIDs->push_back(divide);
		GetInputValue();
		*outputTxt << " / ";
		break;
	}
	// Mult
	case mult:
	{
		operatorIDs->push_back(mult);
		GetInputValue();
		*outputTxt << " * ";
		break;
	}
	// Sub
	case subtract:
	{
		operatorIDs->push_back(subtract);
		GetInputValue();
		*outputTxt << " - ";

		break;
	}
	// add
	case add:
	{
		operatorIDs->push_back(add);
		GetInputValue();
		*outputTxt << " + ";
		break;
	}
	// Equals
	case equals:
	{
		GetInputValue();
		*outputTxt << " = ";
		// Uncomment when doing actual functionality of calculator
		CalculateEquation();
		break;
	}
	// Mod
	case mod:
	{
		operatorIDs->push_back(mod);

		GetInputValue();
		*outputTxt << " MOD ";
		break;
	}
	// Negate
	case negative:
	{
		operatorIDs->push_back(negative);
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
		operatorIDs->clear();
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
#pragma endregion


#pragma region Get Input Value
void cMain::GetInputValue()
{
	wxString txtValue = outputTxt->GetValue();
	double fValue = 0;
	txtValue.ToDouble(&fValue);
	calcValues.push_back(fValue);

}
#pragma endregion


#pragma region Calculate Equation 
void cMain::CalculateEquation()
{
	if (calcValues.size() == 0)
	{
		return;
	}
	else if (calcValues.size() < 2 && calcValues.size() != 0)
	{
		calcAnswer = calcValues[0];
		*outputTxt << calcAnswer;
		return;
	}

	for (int i = 0; i < operatorIDs->size(); i++)
	{
		switch (operatorIDs->at(i))
		{
			// Divide
		case divide:
		{
			calcAnswer = calcValues[0] / calcValues[1];

			break;
		}
		// Mult
		case mult:
		{
			calcValues[i + 1] *= calcValues[i];
			break;
		}
		// Sub
		case subtract:
		{
			calcValues[i + 1] -= calcValues[i];

			break;
		}
		// add
		case add:
		{
			calcValues[i + 1] += calcValues[i];

			break;
		}
		// Mod
		case mod:
		{
			calcAnswer = fmod(calcValues[0], calcValues[1]);

			break;
		}
		// Negate
		case negative:
		{
			calcAnswer = calcValues[0] * -1;

			break;
		}
		default:
			break;
		}
	}
	calcAnswer = calcValues[calcValues.size() - 1];
	if (calcAnswer == (int)calcAnswer)
	{
		*outputTxt << (int)calcAnswer;
	}
	else
	{

		*outputTxt << calcAnswer;
	}
}
#pragma endregion

