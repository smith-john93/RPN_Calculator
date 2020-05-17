#include "CalculatorFunctions.h"
#include <stack>
#include <queue>
#include <cmath>

double evaluate(std::string inputString, bool infix)
{


	if (infix)
	{
		//if the input string is in Infix, convert to Reverse Polish
		// Then evaluate
		return evaluateExpression(convertToRPN(inputString));
	}
	else
	{
		//if the input string is in 
		return evaluateExpression(inputString);
	}

	return 0;

}

std::string convertToRPN(std::string infixString)
{
	std::stack<std::string> operatorStack;
	std::queue<std::string> output;
	for (size_t i = 0; i < infixString.size(); i++)
	{
		char token = infixString[i];

		//if the token is part of a number, build the number
		if (token >= '0' && token <= '9' || token == '.')
		{
			//make a temporaty string
			std::string temp;

			//while the token is a number related character
			// add it to the string
			while (token >= '0' && token <= '9' || token == '.')
			{
				temp += token;
				token = infixString[++i];
			}
			//push the number to the output queue with a space delimiter
			output.push(temp + " ");

			//deciment i for the next loop
			i--;
		}
		//if the token is an operator
		else if (token == '+' || token == '-'
			|| token == '*' || token == '/')
		{
			//if the stack is empty, populate the stack
			// continue processing
			if (operatorStack.empty())
			{
				std::string s(1, token);
				operatorStack.push(s);
				continue;
			}
			else if (getPriority(token, operatorStack.top()) == -1)
			{
				std::string s(1, token);
				operatorStack.push(s);
				continue;
			}
			else
			{

				//While the priority of the operator is higher than 
				// what is on the stack, add the stack values to the queue
				while (!operatorStack.empty() && operatorStack.top() != "(")
				{
					output.push(operatorStack.top());
					operatorStack.pop();
					if (operatorStack.empty())
						break;
				}
			}

			//convert the char to a string and add to the stack
			std::string s(1, token);
			operatorStack.push(s);
		}
		//if the token is a left parens, put it on the stack
		else if (token == '(')
		{
			std::string s(1, token);
			operatorStack.push(s);
		}
		//if the token is a right parens, move stack values to the queue 
		// until the left parens is found
		else if (token == ')')
		{
			while (operatorStack.top() != "(")
			{
				output.push(operatorStack.top());
				operatorStack.pop();
			}
			operatorStack.pop();
		}

	}

	//while the stack is not empty, move values to the queue
	while (!operatorStack.empty())
	{
		output.push(operatorStack.top());
		operatorStack.pop();
	}

	//convert the queue to a string
	std::string outputString;
	while (!output.empty())
	{
		outputString += output.front();
		output.pop();
	}
	return outputString;
}

//evaluates the Reverse Polish Notation string
double evaluateExpression(std::string RPNString)
{
	std::stack<double> operators;
	std::string operations = "+-*/";

	//if the string is empty, return 0
	if (RPNString.size() == 0)
	{
		return 0;
	}

	//iterate through the string until the end is reached
	for (size_t i = 0; i < RPNString.size(); i++)
	{
		//grab the next char
		std::string token(1, RPNString[i]);

		//if the char is the space delimiter, continue through the loop
		if (token == " ")
			continue;

		//check if the token is an operator 
		int position = (int)operations.find(token);

		//if the position is not -1, the token is an operator
		if (position != -1)
		{
			//if there are less than two numbers, return a -1
			if (operators.size() < 2)
			{
				return -1;
			}

			//perform the correct operation based on 
			// the position returned
			else
			{
				//grab the top two numbers from the operator stack
				double a = operators.top();
				operators.pop();
				double b = operators.top();
				operators.pop();

				//addition
				if (position == 0)
				{
					operators.push(b + a);
				}

				//subtraction
				if (position == 1)
				{
					operators.push(b - a);
				}

				//multiplicaiton
				if (position == 2)
				{
					operators.push(b * a);
				}

				//division
				if (position == 3)
				{
					operators.push(b / a);
				}
			}
		}

		//the token is part of a number
		else
		{
			//create a temp string
			std::string temp;

			//while the token isn't the delimiter, add to  the string
			while (token != " ")
			{
				temp += token;
				token = RPNString[++i];
			}

			//parse the string into a double 
			//and push onto the stack
			operators.push(stod(temp));

			//decriment i for the nextr loop
			i--;
		}
	}
	return operators.top();
}

//returns the priority of the two passed operatyos
int getPriority(char token, std::string top)
{

	//the priority is higher
	if ((token == '*' || token == '/') && (top == "+" || top == "-"))
	{
		return -1;
	}

	//the priority is lower
	if ((token == '+' || token == '-') && (top == "*" || top == "/"))
	{
		return 1;
	}

	//the priority is equal
	return 0;
}