// Expensive Calculator Program

#include <iostream>

// Expensive Calculator
// Demonstrates built-in arithmetic operators

// Adding, Subtracting, and Multiplying
/*
I use the built-in arithmetic operators for addition (the plus sign, +),
Subtraction (the minus sign, -), and multiplication (an asterisk, *).
*/

// Modules Operator %
/*
The modulus operator returns the remainder of integer division.
I.E : 7 % 3 produces the remainder of 7 / 3 which is 1
how many times 3 fits in the number 7 ?
2 times : 3+3=6 so what remains is 1 the "remainder". 

*/

// Order of Operations  
/*
Just as in algebra, arithmetic expressions in C++ are evaluated from left to right.
Some operators have a higher precedence than others and are evaluated first, regardless of position.
So the expression 7 + 3 * 5 is equivalent to 7 + 15, which evaluates to 22.

If you want an operation with lower precedence to occur first, you can use parentheses (), 
which have higher precedence than any arithmetic operator. 
So in the next statement, the expression (7 + 3) * 5 is equivalent to 10 * 5, which evaluates to 50.
*/

using namespace std;
int main()
{
	
	cout << "7 + 3 = " << 7 + 3 << endl;
	cout << "7 - 3 = " << 7 - 3 << endl;
	cout << "7 * 3 = " << 7 * 3 << endl;
	// this out puts an int (full numbers (1,2) not fractional (1.0, 2.0))
	cout << "7 / 3 = " << 7 / 3 << endl;
	// to get a more acurrate result we use 7.0 and 3.0 to get a fractional number as a result
	cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;
	// see the - Modules Operator Comment
	cout << "7 % 3 = " << 7 % 3 << endl;
	cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
	cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;

	return 0;

}