// Referencing Program
// Demonstrates referencing program

#include <iostream>


int main()
{
	int myScore = 1000;
	int &mikesScore = myScore;

	std::cout << "myScore: " << myScore << "\n";
	std::cout << "mikesScore: " << myScore << "\n";


	myScore += 500;
	std::cout << "\nAdding 500 to myScore: " << myScore << "\n";

	std::cout << "mikesScore: " << mikesScore << "\n";


	mikesScore += 500;
	std::cout << "\nmikesScore: " << mikesScore << "\n";
	std::cout << "myScore: " << myScore << "\n";
}
