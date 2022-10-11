// Inventory Referencer.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstartes returning a reference 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// returns a ref to a string 
string& refToElement(vector<string>&inventory, int i);

int main()
{
    vector<string>inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    // displaying the returned reference to a string
    cout << "Sending the returned reference to cout:\n";
    cout << refToElement(inventory, 0) << "\n\n";

    // assigns one ref to another -- inexpensive assginment
    cout << "Assgining the returned ref to another ref\n";
    string& rStr = refToElement(inventory, 1);
    cout << "Sending the new ref to cout: \n";
    cout << rStr << "\n\n";

    // copies a string object  -- expensive assignment
    cout << "Assgining the returned ref to a String object\n";
    string str = refToElement(inventory, 2);
    cout << "Sending the new String object to cout: \n";
    cout << str << "\n\n";

    // altering the string object through a returned ref
    cout << "Altering an object through a returned ref\n";
    rStr = "Healing Potion";
    cout << inventory[1] << "\n";

    return 0;
}

// return a reference to a string 
string & refToElement(vector<string>& vec, int i)
{
    return vec[i];
}
