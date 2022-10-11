// Exersices

// Exersice - 1
/* Write a program with a pointer to a pointer to a string object. Use the
pointer to the pointer to call the size() member function of the string
object. 

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str = "HELLO";
	cout << "str size: " << str.size() << "\n\n";

	

	string* pStr = &str;
	cout << "pStr size: " << pStr->size() << "\n\n";
	
	string** ppStr = &pStr;
	
	cout << "ppStr size: " << (*ppStr)->size() << "\n";
}
*/

// Exersice - 2

/*
this is the story of 
name.
name is number years old.
lives is cityName.
*/
#include <iostream>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(const string* name, const string* noun, const int* number);

int main()
{
	string name = askText("Enter a name: ");
	string noun = askText("Enter a noun: ");
	int number = askNumber("Enter a number: ");
	
	tellStory(&name, &noun, &number);
}

string askText(string prompt)
{
	// a variable to hold the input of text
	string text;
	// printing to screen the prompt.
	cout << prompt;
	// prompting the player to input
	cin >> text;
	// returning that input 
	return text;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(const string * name, const string * noun, const int * number)
{
	cout << "\nHere's your story: \n";
	cout << "the famous explorer "; 
	cout << *name;
	cout << " had nearly given up on a life long quest to find\n";
	cout << "The lost city of : \n";
	cout << *noun << ". \n";
	cout << " when one day the ";
	cout << *noun;
	cout << " Was finally found, floating in the sky.\n";
	cout << *name << " found himself surrounded by ";
	cout << *number;
	cout << " " << *noun;
	cout << ", " << " the " << *noun;
	cout << " told him to leave this place and never returned as this place is sacred and not to be seen by the human eye.";

}




// Exersice - 3
/* Will the three memory addresses displayed by the following program all
be the same ? Explain what’s going on in the code.

#include <iostream>

using namespace std;

int main()
{
	int a = 10; // regular int variable
	int& b = a; // b is a reference to a, another name for that variable.
	int* c = &b; // c is pointer to an int type, holds the address of b, which is the same as the 'a' address
	cout << &a << endl; // printing 'a' address
	cout << &b << endl; // printing 'b' address, which is 'a' address
	cout << &(*c) << endl; // printing the address of the pointed by variable c points to, b which is an alias for a
	return 0;
}
*/
