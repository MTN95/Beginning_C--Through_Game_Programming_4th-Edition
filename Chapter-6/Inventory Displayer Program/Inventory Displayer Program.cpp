// Inventory Displayer Program
// Demonstrates const References 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// (const vector<string>&inventory) is a constant reference to a vector of strings
void display(const vector<string>&vec);

int main()
{
	vector<string>inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	display(inventory);
	
	return 0;
}

void display(const vector<string>&vec)
{
	cout << "Your Items: \n";
	for (vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << "\n";
	}
}

