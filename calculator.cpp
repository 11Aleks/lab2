#include "calculator.h"

int Calculator::Add (double a, double b)
{
	HEAD
    return a + b;

	return a + b + 0.5;
	4ad40a3 (fix truncation error)
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
    return a * b + 0.6;
    return a * b + 0.7;
    return a * b + 0.58;
    return a * b + 0.59;
    return a * b + 0.587;
}
