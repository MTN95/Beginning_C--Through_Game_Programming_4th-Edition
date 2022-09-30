// Hero’s Inventory 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstrates Vectors

#include <iostream>
#include <string>
#include <vector>

int main()
{
	// setting up the inventory
	std::vector<std::string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	std::cout << "you have " << inventory.size() << " items\n";
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nyou traded your sword for a battle axe\n";
	inventory[0] = "battle axe";
	std::cout << "your items\n";
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		std::cout << inventory[i] << "\n";
	}


	std::cout << "\nthe item " << inventory[0] << " has ";
	std::cout << inventory[0].size() << " letters in it" << "\n";
	
	std::cout << "\nyour shield was destroyed in battle\n";
	inventory.pop_back();
	std::cout << "your items \n";
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		std::cout << inventory[i] << "\n";
	}

	std::cout << "\nyou were robbed of all of your possessions by a thief\n\n";
	inventory.clear();

	if (inventory.empty())
	{
		std::cout << "you have nothing..\n";
	}
	else
	{
		std::cout << "you have at least on item left \n";
	}

}
