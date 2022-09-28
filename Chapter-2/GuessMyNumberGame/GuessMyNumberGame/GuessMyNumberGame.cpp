// GuessMyNumberGame
// Simple Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::string;

int main()
{
	// seed random number generator based on the current time
	srand(static_cast<unsigned int>(time(0)));

	// Setting a random number between 1 - 100
	int secretNumber = rand() % 100 +1; 

	int tries = 0;
	int guess;

	std::cout << "\t\t\tWelcome to Guess My Number !\n\n";

	do
	{
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		tries++;

		if (guess < secretNumber)
		{
			std::cout << "Too Low, Guess again.";
		}
		else if (guess > secretNumber)
		{
			std::cout << "Too High, Guess again.";
		}
		else
		{
			std::cout << " You Guess is Right! You Win!\n";
			std::cout << "You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
	return 0;
}
