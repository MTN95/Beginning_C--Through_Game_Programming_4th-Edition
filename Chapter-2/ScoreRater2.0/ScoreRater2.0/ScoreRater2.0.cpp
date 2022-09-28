// Score Rater 2.0
// Demonstrates the else clause

#include <iostream>

// Using the else clause
/*
You can add an else clause to an if statement to provide code that will only
be executed if the tested expression is false. Here’s the form of an if
statement that includes an else clause:
if (expression)
statement1;
else
statement2;
If expression is true, statement1 is executed. Then the program skips
statement2 and executes the statement following the if suite. If expression
is false, statement1 is skipped and statement2 is executed. After
statement2 completes, the program executes the statement following the if
suite.
*/


int main()
{
	int score;
	std::cout << "Enter you score: ";
	std::cin >> score;

	if (score >= 1000)
	{
		std::cout << "You scored a 1000 points or more!." << '\n';
	}
	else
	{
		std::cout << "You scored less than 1000 points." << '\n';
	}
	return 0;
}
