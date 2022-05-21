#include "ButtonFactory.h"
#pragma region Constructor/Destructor
ButtonFactory::ButtonFactory(cMain* _Address)
{
	mainAddress = _Address;
}
ButtonFactory::~ButtonFactory()
{

}
#pragma endregion


#pragma region 0 - 9 buttons
wxButton* ButtonFactory::CreateZeroButton()
{
	return new wxButton(mainAddress, 0, "0", wxPoint(125, 675), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateOneButton()
{
	return new wxButton(mainAddress, 1, "1", wxPoint(0, 575), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateTwoButton()
{
	return new wxButton(mainAddress, 2, "2", wxPoint(125, 575), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateThreeButton()
{
	return new wxButton(mainAddress, 3, "3", wxPoint(250, 575), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateFourButton()
{
	return new wxButton(mainAddress, 4, "4", wxPoint(0, 475), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateFiveButton()
{
	return new wxButton(mainAddress, 5, "5", wxPoint(125, 475), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateSixButton()
{
	return new wxButton(mainAddress, 6, "6", wxPoint(250, 475), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateSevenButton()
{
	return new wxButton(mainAddress, 7, "7", wxPoint(0, 375), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateEightButton()
{
	return new wxButton(mainAddress, 8, "8", wxPoint(125, 375), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateNineButton()
{
	return new wxButton(mainAddress, 9, "9", wxPoint(250, 375), wxSize(125, 100));
}
#pragma endregion


#pragma region Base conversion Buttons
wxButton* ButtonFactory::CreateBinaryButton()
{
	return new wxButton(mainAddress, 10, "BIN", wxPoint(0, 275), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateHexButton()
{
	return new wxButton(mainAddress, 11, "HEX", wxPoint(125, 275), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateDecimalButton()
{
	return new wxButton(mainAddress, 12, "DEC", wxPoint(250, 275), wxSize(125, 100));
}
#pragma endregion


#pragma region Operator Buttons
wxButton* ButtonFactory::CreateDivideButton()
{
	return new wxButton(mainAddress, 13, "/", wxPoint(375, 275), wxSize(125, 100));

}

wxButton* ButtonFactory::CreateMultButton()
{
	return new wxButton(mainAddress, 14, "*", wxPoint(375, 375), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateSubtractButton()
{
	return new wxButton(mainAddress, 15, "-", wxPoint(375, 475), wxSize(125, 100));
}

wxButton* ButtonFactory::CreateAddButton()
{
	return new wxButton(mainAddress, 16, "+", wxPoint(375, 575), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateEqualsButton()
{
	return new wxButton(mainAddress, 17, "=", wxPoint(375, 675), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateModButton()
{
	return new wxButton(mainAddress, 18, "%", wxPoint(250, 675), wxSize(125, 100));;
}

wxButton* ButtonFactory::CreateNegativeButton()
{
	return new wxButton(mainAddress, 19, "(-)", wxPoint(0, 675), wxSize(125, 100));;
}
#pragma endregion


#pragma region Clear button
wxButton* ButtonFactory::CreateClearButton()
{
	return new wxButton(mainAddress, 20, "CLR", wxPoint(375, 0), wxSize(125, 275));
}
#pragma endregion