// PlayAgain2.0
//  Demonstrates the do loop

#include <iostream>

// Using do loops
/*
Like while loops, do loops let you repeat a section of code based on an
expression. The difference is that a do loop tests its expression after each loop
iteration. This means that the loop body is always executed at least once.
Here’s a generic form of a do loop:
do
statement;
while (expression)
The program executes statement and then, as long as expression tests true,
the loop repeats. Once expression tests false, the loop ends.
*/


int main()
{
	char again;

	do 
	{
		std::cout << "Game Over!\n";
		std::cout << "Would you like to play again? (y/n): ";
		std::cin >> again;
	} while (again == 'y');
	std::cout << "Ok Goodbye.";

}