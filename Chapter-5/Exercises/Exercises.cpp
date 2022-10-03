// Exercises

// Exercise 1
/*
When you are calling a function with default arguments, once you omit
an argument, you must omit arguments for all remaining parameters.For
example, given the prototype
*/

// Exercise 2 - Hangman 2.0
// See Hangman 2.0 

// Exercise 3

#include <iostream>
#include <string>

using namespace std;

// a function with default arguments that return a number we input in
// the function takes an int and a string as arguments
// if we don't supply a string for the prompt, theres a default one
int askNumber(int x, string prompt = "\nEnter a number : ");

int main()
{
	// adding a string literal to the function
	askNumber(5, "asd PLEASE ASD MAN: ");

	// using the default string arguments
	askNumber(56);
}

int askNumber(int x, string prompt)
{
	cout << prompt; 
	cin >> x;
	if (!x)
	{
		cout << "Please enter a number, not a character.\n";
	}
	else
	{
		cout << x;
	}
	return (x);
}
