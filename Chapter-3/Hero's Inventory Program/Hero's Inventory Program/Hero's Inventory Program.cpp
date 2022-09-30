// Hero's Inventory Program
// Demonstrates arrays

#include <iostream>
#include <string>


int main()
{
	// Max numbers of item player can hold
	const int MAX_ITEMS = 10;
	// Inventory - array of strings
	std::string inventory[MAX_ITEMS];

	int numItems = 0; // Holds the Number of items in the inventory
	// adding +1 to numItems with evevvry item added to the inventory
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	// Looping through numItems & displaying the names 
	std::cout << "Your Items: \n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}
	// Changing the item at location [0]
	std::cout << "\nYou traded your sword for a battle axe.";
	inventory[0] = "battle axe";
	// Displaying the changes
	std::cout << "\nYour Items: \n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}
	// Displaying the nmuber of letters in item [0]
	std::cout << "\nThe item name '" << inventory[0] << "' has ";
	std::cout << inventory[0].size() << " letters in it.";

	std::cout << "\n\nYou found a healing potion!";
	// Checking if Inventory full - if not adding an item
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		std::cout << "\nInventory full, can't carry any more items\n";
	}
	// Dispalying the changes
	std::cout << "\nYour Items are now: \n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}
	
	
	return 0;
}

