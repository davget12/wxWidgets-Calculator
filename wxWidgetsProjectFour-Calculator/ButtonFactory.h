#pragma once
#include "wx/wx.h"
#include "cMain.h"
class ButtonFactory
{
private:
	cMain* mainAddress = nullptr;

public:
	ButtonFactory(cMain* _Address);
	~ButtonFactory();
	// 0-9 Buttons
	wxButton* CreateZeroButton();
	wxButton* CreateOneButton();
	wxButton* CreateTwoButton();
	wxButton* CreateThreeButton();
	wxButton* CreateFourButton();
	wxButton* CreateFiveButton();
	wxButton* CreateSixButton();
	wxButton* CreateSevenButton();
	wxButton* CreateEightButton();
	wxButton* CreateNineButton();

	// Base conversion buttons
	wxButton* CreateBinaryButton();
	wxButton* CreateHexButton();
	wxButton* CreateDecimalButton();

	//Operator buttons
	wxButton* CreateDivideButton();
	wxButton* CreateMultButton();
	wxButton* CreateSubtractButton();
	wxButton* CreateAddButton();
	wxButton* CreateEqualsButton();
	wxButton* CreateModButton();
	wxButton* CreateNegativeButton();

	// Clear button
	wxButton* CreateClearButton();

};
