// ScoreRaterProgram 
// Demonstrates the if statement

#include <iostream>

// if Statment
/*
You can use an if statement to test an expression for truth and execute some code based on it.
Here’s a simple form of the if statement:
if (expression)
statement;
If expression is true, then statement is executed. Otherwise, statement is
skipped and the program branches to the statement after the if suite.
*/

// Interpreting a Value as true or false
/*
You can interpret any value as true or false. Any non-zero value can be
interpreted as true, while 0 can be interpreted as false.



*/
int main()
{
	if (true)
	{
		std::cout << "This is always displayed" << '\n';
	}
	if (false)
	{
		std::cout << "This is never displayed" << '\n';
	}
	int score = 1000;

	if (score)
	{
		std::cout << "At least you didn't score 0.." << '\n';
	}
	if (score >= 250)
	{
		std::cout << "You score more than 250, Decent." << '\n';
	}
	if (score >= 500)
	{
		std::cout << "You score more than 500 nice!." << '\n';
		if (score >= 1000)
		{
			std::cout << "You Score more than 1000, Amazing!" << '\n';
		}
	}
	return 0;
}
