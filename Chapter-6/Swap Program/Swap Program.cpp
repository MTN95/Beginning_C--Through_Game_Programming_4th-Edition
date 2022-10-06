// Swap Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstrates passing references to alter argument values

#include <iostream>

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	int myScore = 100;
	int yourScore = 1000;

	std::cout << "Original Values:\n";
	std::cout << "myScore: " << myScore << "\n";
	std::cout << "YouScore: " << yourScore << "\n\n";

	std::cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << "\n";
	std::cout << "YouScore: " << yourScore << "\n\n";

	std::cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << "\n";
	std::cout << "YouScore: " << yourScore << "\n\n";

	return 0;
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}


void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

