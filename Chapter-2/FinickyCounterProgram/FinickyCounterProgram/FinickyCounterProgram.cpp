// FinickyCounterProgram
// Demonstrates break and continue statements

#include <iostream>

// Using Break and continue statements
/*
It’s possible to alter the behavior you’ve seen in loops. You can immediately
exit a loop with the break statement, and you can jump directly to the top of a
loop with a continue statement.
*/


int main()
{
	int count = 0;

	while (true)
	{
		count += 1;
		// end loop if count if greater than 10
		if (count > 10)
		{
			break;
		}
		// Skipping the number 5
		if (count == 5)
		{
			continue;
		}
		// printing the numbers to count
		std::cout << count << '\n';
	}
	return 0;
}

