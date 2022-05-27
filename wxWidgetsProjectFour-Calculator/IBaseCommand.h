#pragma once
#include <vector>

class IBaseCommand
{
public:
	virtual void Execute() = 0;
};

class AddCommand : public IBaseCommand
{
private:
	double* operand1;
	double* operand2;

public:
	AddCommand(double* _operand1, double* _operand2)
	{
		operand1 = _operand1;
		operand2 = _operand2;
	}


	void Execute()
	{
		*operand2 = *operand1 + *operand2;
	}
};

class SubtractCommand :public IBaseCommand
{
private:
	double* operand1;
	double* operand2;

public:
	SubtractCommand(double* _operand1, double* _operand2)
	{
		operand1 = _operand1;
		operand2 = _operand2;
	}

	void Execute()
	{
		*operand2 = *operand1 - *operand2;

	}
};

class MultiplyCommand : public IBaseCommand
{
private:
	double* operand1;
	double* operand2;

public:
	MultiplyCommand(double* _operand1, double* _operand2)
	{
		operand1 = _operand1;
		operand2 = _operand2;
	}

	void Execute()
	{
		*operand2 = *operand1 * *operand2;

	}
};

class DivideCommand : public IBaseCommand
{
private:
	double* operand1;
	double* operand2;

public:
	DivideCommand(double* _operand1, double* _operand2)
	{
		operand1 = _operand1;
		operand2 = _operand2;
	}

	void Execute()
	{
		*operand2 = *operand1 / *operand2;

	}
};

