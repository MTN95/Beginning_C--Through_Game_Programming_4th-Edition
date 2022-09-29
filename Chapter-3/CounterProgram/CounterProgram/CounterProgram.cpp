// Counter Program
// Demonstrates for loops 

// Using for loops
/*
the for loop lets you repeat a
section of code, but for loops are particularly suited for counting and moving
through a sequence of things (like the items in an RPG character’s inventory).
Here’s the generic form of for loop:

for (initialization; test; action)
statement;

initialization is a statement that sets up some initial condition for the loop.
(For example, it might set a counter variable to 0.) The expression test is
tested each time before the loop body executes, just as in a while loop. If
test is false, the program moves on to the statement after the loop. If test
103
is true, the program executes statement. Next, action is executed (which
often involves incrementing a counter variable). The cycle repeats until test
is false, at which point the loop ends.
*/

using namespace std;

#include <iostream>

int main()
{
	cout << "Counting Forward:\n";
	for (int i = 0; i < 11; i++)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting Backward:\n";
	for (int i = 10; i > 0; i--)
	{
		cout << i << " ";
	}
	
	cout << "\n\nCounting By Five:\n";
	for (int i = 0; i <= 50; i+=5)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting With null Statements:\n";
	int count = 0;
	for ( ; count<10 ;)
	{
		cout << count << " ";
		++count;
	}

	cout << "\n\nCounting With nested for loops:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << i << "," << j << " ";
		}
		cout << endl;
	}
	return 0;
}


