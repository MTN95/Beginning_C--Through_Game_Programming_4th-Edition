// Hero's Inventory Program
// Demonstrates arrays

#include <iostream>
#include <string>


int main()
{
	const int MAX_ITEMS = 10;

	std::string inventory[MAX_ITEMS];

	int numItems = 0;

	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	
	std::cout << "Your Items: \n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nYou traded your sword for a battle axe.";
	inventory[0] = "battle axe";

	std::cout << "\nYour Items: \n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nThe item name '" << inventory[0] << "' has ";
	std::cout << inventory[0].size() << " letters in it.";

	std::cout << "\n\nYou found a healing potion!";

	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		std::cout << "\nInventory full, can't carry any more items\n";
	}

	std::cout << "\nYour Items are now: \n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}
	
	
	return 0;
}

