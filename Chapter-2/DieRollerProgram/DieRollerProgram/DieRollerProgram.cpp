// Die Roller Program
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

// Generating random numbers
/*
The rand() function generates a random number between 0 and at least
32767. The exact upper limit depends on your implementation of C++.
The upper limit is stored in the constant RAND_MAX, which is defined in
cstdlib. So if you want to know the maximum random number rand()
can generate, just send RAND_MAX to cout.

*/



int main()
{
	// Seeds the random number generator based on the current date and time.
	srand(static_cast<unsigned int>(time(0))); 

	// generate random number
	int randomNumber = rand(); 

	// get a number between 1 and 6
	int die = (randomNumber % 6) + 1; 

	std::cout << "You Rolled a : " << die << '\n';
	return 0;
}
