//  Game Stats Program
//  Demonstrates Declaring and Initializng Variables 

#include <iostream>

//  Declaring and Initializng Variables 
/*
A variable represents a particular piece of your computer’s memory that has
Been set aside for you to use to store, retrieve, and manipulate data.
I.E. we can keep track of a player's score by creating a variable for it.
Then you could retrieve the score to display it, we could also update the score 
When the player blast an alien enemy from the sky.
*/

//  Game Stats Program
/*
The Game Stats program displays information that you might want to keep
track of in a space shooter game, such as :
Player's Score
Number of Enemies Destroyed By The Player
Whether The Player Has His Shields Up

We could use a group of variables to accomplish all of this.
*/

//	Fundamental Types
/*
Every variable you create has a type, which represents the kind of information
You can store in the variable. It tells your compiler how much memory to set
Aside for the variable and it defines exactly what you can legally do with the
Variable.
Fundamental Types:
bool for Boolean values true \ false 
char for single character values 
int for integers values full numbers
float for single-precision floating point numbers
double for double-precision floating point numbers
*/

//	Types Modifiers 
/*
We can use modifiers to alter a type of a variable - char, int and double.
The type modifires are:
short - applies to int and char
long -  applies to int and double
signed -  applies to int and char
unsigned -  applies to int and char

short - reduces the total number of values a variables can hold - short int can be written as just short 
long - increases the total number of values a variables can hold - long int can be written as just long
signed - means that a variable can store both positive and negative values
unsigned - means that a variables can store only positive values 

Neither signed nor unsigned change the total number of values a variable can hold. 
they only change the range of values. signed is the default for integer types.
NOTE: the range of values listed is based on the compiler.
Check the compiler’s documentation.

The modifiers signed and unsigned can also be used as prefix to long or short modifiers.
I.E:
unsigned long int
short unsigned int


*/

// Defining New Names for Types using typedef
/*
You can define a new name for an existing type. In fact, that’s what I do next in the line:
typedef unsigned short int ushort;

This code defines the identifier ushort as another name for the type unsigned short int.
To define new names for existing types, use typedef followed by the current type, followed by the new name.
typedef is often used to create shorter names for types with long names.
*/

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	// short = short int
	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;

	std::cout << "\nscore: " << score << std::endl;
	std::cout << "distance: " << distance << std::endl;
	std::cout << "playAgain: " << playAgain << std::endl;
	// skipping shieldsUp since you don't generally print Boolean values
	std::cout << "lives: " << lives << std::endl;
	std::cout << "aliensKilled: " << aliensKilled << std::endl;
	std::cout << "engineTemp: " << engineTemp << std::endl;

	int fuel;
	std::cout << "How much fuel ? ";
	std::cin >> fuel;
	std::cout << "fuel: " << fuel << std::endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	std::cout << "bonus: " << bonus << std::endl;
	
	return 0;
}






