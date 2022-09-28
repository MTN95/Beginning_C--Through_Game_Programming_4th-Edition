// ScoreRater3.0
// Demonstrates if else-if else suite 



#include <iostream>

int main()
{
	int score;
	std::cout << "Enter you scoreN: ";
	std::cin >> score;

	if (score >= 1000)
	{
		std::cout << "You Scored more than a 1000 points." << '\n';
	}
	else if (score >= 500)
	{
		std::cout << "You Scored more than 500 points" << '\n';
	}
	else if (score >= 250)
	{
		std::cout << "You Scored more than 250 points" << '\n';
	}
	else
	{
		std::cout << "You Scored less than 250 points" << '\n';
	}
	return 0;
}

