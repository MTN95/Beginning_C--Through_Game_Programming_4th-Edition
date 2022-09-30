// Hero's Inventory 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> inventory;
	
	std::vector<std::string>::iterator MyIterator;
	std::vector<std::string>::const_iterator iter;

	std::cout << "your items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout<< *iter << "\n";
	}
}

