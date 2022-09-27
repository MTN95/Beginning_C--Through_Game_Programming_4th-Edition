// Working With Constants - Game Stats Program 3.0
// Demonstrates Constants

#include <iostream>


// Working with Constants - const
/*
A constant is an unchangeable value that you name. Constants are useful if
you have an unchanging value that comes up frequently in your program.
I.E:
Destroying an specific enemy gives 150 points we use a const ALIEN_POINTS that is equal to 150.
and use ALIEN_POINTS instead of 150 when we need it. 
*/

// Using Enumerations - enum
/*
An enumeration is a set of unsigned int constants, called enumerators.
Usually the enumerators are related and have a particular order. Here’s an
example of an enumeration:
enum difficulty {NOVICE, EASY, NORMAL, HARD, EXTREME};

This defines an enumeration named difficulty. 
By default, the value of enumerators begins at zero and increases by one. 
So: 
NOVICE = 0, 
EASY = 1,
NORMAL = 2, 
HARD = 3, 
EXTREME = 4.
*/

int main()
{
	
	const int ALIEN_POINTS = 150;
	int alienKilled = 10;
	int score = alienKilled * ALIEN_POINTS;
	std::cout << "score: " << score << std::endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, EXTREME};
	difficulty myDifficulty = EASY;

	enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
	shipCost myShipCost = BOMBER_COST; // BOMBER_COST = 26. Uninitialized enumerators gets the value of the previous enumerator + one.
	std::cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";
	
	return 0;

}

























