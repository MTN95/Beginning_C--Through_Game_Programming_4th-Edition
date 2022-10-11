// Inventory Pointer Program
// Demonstrates reeturning a pointer

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string* ptrToElement(vector<string>* pVec, int i);

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    // displays the string object that the returned pointer points to 
    cout << "Sending the object pointed to by returned pointer to cout:\n";
    cout << *(ptrToElement(&inventory, 0)) << "\n\n";

    // assigns one pointer to another, inexpensive assignment 
    cout << "Assgining the returned pointer to another pointer. \n";
    string* pStr = ptrToElement(&inventory, 1);
    cout << "Sending the object pointed to by new pointer to cout:\n";
    cout << *pStr << "\n\n";

    // copies a string object, expensive assignment 
    cout << "Assigning object pointed to by pointer to a string objet.\n";
    string str = *(ptrToElement(&inventory, 2));
    cout << "Sending the new object to cout:\n";
    cout << str << "\n\n";

    // altering the string object through a returned pointer
    cout << "Altering an object through a returned pointer.\n";
    *pStr = "Healing Potion";
    cout << "Sending the altered object ot cout:\n";
    cout << inventory[1] << endl;

}

string * ptrToElement(vector<string>* pVec, int i)
{
    // returns the address of a string in position i 
    return &((*pVec)[i]);
}
