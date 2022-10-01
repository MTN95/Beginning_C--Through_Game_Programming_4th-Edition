// Hero's Inventory 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

int main()
{
	// setting up the inventory with 
	// a vector that can contains string objects
	std::vector<std::string> inventory;

	// using inventory.push_back("string")
	// to add items to the inventory
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	// Declating an iterator name 'MyIterator' // read write //
	// for a vector that contains string objects
	std::vector<std::string>::iterator MyIterator;
	
	// Declating a const_iterator name 'iter' // read only //
	// for a vector that contains string objects
	std::vector<std::string>::const_iterator iter;

	// looping through the inventory with begin()
	// end() - returns an iterator one past the last element in a container.
	// ++iter - moves it to the next element in the vector.
	std::cout << "your items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout<< *iter << "\n";
	}

	// setting 'MyIterator' to reference the first element in the inventory with begin()
	std::cout << "\nyou traded your sword for a battle axe\n";
	MyIterator = inventory.begin();
	// by dereferencing *MyIterator, I'm assigning "battle axe"
	// to the object *MyIterator refers to, begin()
	*MyIterator = "battle axe";

	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout << *iter << "\n";
	}
	// *MyIterator still refers to begin()
	// (*MyIterator).size() FUNCTION - return 10 aka "battle axe"
	// TIP:
	/* Whenever you dereference an iterator to access a data member or
	member function, surround the dereferenced iterator by a pair of
	parentheses (). 
	This ensures that the dot operator will be applied to the
	object the iterator references.
	*/
	std::cout << "\nthe item name " << *MyIterator << " has ";
	std::cout << (*MyIterator).size() << " letters in it .\n";

	// (*MyIterator).size() = MyIterator->size()
	// same, more readable
	std::cout << "\nthe item name " << *MyIterator << " has ";
	std::cout << MyIterator->size() << " letters in it .\n";

	// using insert() puts the new string object "crossbow" in the beginning
	// example of use : inventory.insert(inventory.begin(), "crossbow");
	std::cout << "\nyou found a crossbow on a dead enemy";
	inventory.insert(inventory.begin(), "crossbow");

	std::cout << "\nyour items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout << *iter << "\n";
	}
	
	// erasing an item from a specific location - [2] - counts as [0] [1] [2]
	// "armor" is in the third location - [2]
	std::cout << "\nyour armor was destroyed in battle ";
	inventory.erase(inventory.begin() + 2);
	std::cout << "\nyour items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout << *iter << "\n";
	}

	return 0;
}
