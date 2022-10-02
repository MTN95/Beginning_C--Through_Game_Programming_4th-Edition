// High Scores Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>



int main()
{
	// const_iterator - to read data members info
	std::vector<int>::const_iterator iter;

	std::cout << "Creating a list of scores: \n";
	std::vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	std::cout << "\nHigh Scores \n";

	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		std::cout << *iter << "\n";
	}

	std::cout << "\nFinding a Score.";
	int score;
	std::cout << "\nEnter a score to find:";
	std::cin >> score;
	
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
	{
		std::cout << "\nScore found!";
	}
	else
	{
		std::cout << "\nScore not found..";
	}

	std::cout << "\nRandomizing scores..";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());

	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		std::cout << *iter << "\n";
	}

	std::cout << "\nRandomizing scores..";

	sort(scores.begin(), scores.end());
	std::cout << "\nHigh scores:";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		std::cout << *iter << "\n";
	}
	return 0;
}
