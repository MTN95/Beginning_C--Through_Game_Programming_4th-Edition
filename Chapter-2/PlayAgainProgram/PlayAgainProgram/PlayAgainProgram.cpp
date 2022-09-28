// PlayAgainProgram
// Demonstrates the while loop 

#include <iostream>

// While loop
/*
While loops let you repeat sections of code as long as an expression is true.
Here’s a generic form of the while loop:

while (expression)
statement;

If expression is false, the program moves on to the statement after the loop.
If expression is true, the program executes statement and loops back to test
expression again. This cycle repeats until expression tests false, at which
point the loop ends.
*/


int main()
{
	char again = 'y';

	while (again == 'y')
	{
		std::cout << "Game Over!, would you like to play again? (y/n): ";
		std::cin >> again;
	}
	std::cout << "Ok, Goodbye\n";
}


