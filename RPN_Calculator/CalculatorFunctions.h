#pragma once
#define CALCULATORFUNCTIONS_H
#ifndef CalculatorFunctions

#include <string>

///This fucntions expects a string and a boolean
///True: Input is in Infix Notation
///False: Input is in Reverse Polish Notation
double evaluate(std::string, bool);

std::string convertToRPN(std::string);

double evaluateExpression(std::string);

int getPriority(char, std::string);

#endif // !CalculatorFuncions
