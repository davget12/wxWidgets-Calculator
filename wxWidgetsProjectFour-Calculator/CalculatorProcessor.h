#pragma once
#include <vector>
class CalculatorProcessor
{
public:
	static CalculatorProcessor& GetInstance()
	{
		static CalculatorProcessor instance;
		return instance;
	};
private:
	CalculatorProcessor() {};
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	void operator = (CalculatorProcessor const&) = delete;
	std::vector<double>* calcValues;
	std::vector<int>* operatorIDs;

public:
	double CalculateEquation(std::vector<double>* calcvalues, std::vector<int>* operatorIDs);
};

