#include "CalculatorProcessor.h"

enum IDS
{
	zero, one, two, three, four, five, six, seven, eight, nine, binary, hex, decimal, divide, mult, subtract, add, equals, mod, negative, clear
};


#pragma region Calculate Equation 

double CalculatorProcessor::CalculateEquation(std::vector<double>* calcValues, std::vector<int>* operatorIDs)
{
	double calcAnswer = 0;
	if (calcValues->size() < 2 && calcValues->size() != 0)
	{
		calcAnswer = calcValues->at(0);
		return calcAnswer;
	}

	for (int i = 0; i < operatorIDs->size(); i++)
	{
		switch (operatorIDs->at(i))
		{
			// Divide
		case divide:
		{
			calcValues->at(i + 1) = calcValues->at(i) / calcValues->at(i + 1);


			break;
		}
		// Mult
		case mult:
		{
			calcValues->at(i + 1) *= calcValues->at(i);
			break;
		}
		// Sub
		case subtract:
		{
			calcValues->at(i + 1) = calcValues->at(i) - calcValues->at(i + 1);

			break;
		}
		// add
		case add:
		{
			calcValues->at(i + 1) += calcValues->at(i);

			break;
		}
		// Mod
		case mod:
		{
			return fmod(calcValues->at(i), calcValues->at(i + 1));

			break;
		}
		default:
			break;
		}
	}

	calcAnswer = calcValues->at(calcValues->size() - 1);

	return calcAnswer;
}
