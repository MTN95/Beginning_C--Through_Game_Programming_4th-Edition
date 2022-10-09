// Mad-Lib + references Exercise 1
/*
#include <iostream>
#include <string>

using namespace std;

string askText(const string& prompt);
int askNumber(const string& prompt);

void tellStory(const string& name, const string& noun, const int& number, const string& bodyPart, const string& verb);

int main()
{
	cout << "\t\t\tWelcome to Mad-Lib Story Telling Game!\n";
	cout << "Answer the following questions to help write a new story: \n";

	string myName = askText("Please enter a name: ");
	string myNoun = askText("Please enter a noun: ");
	int myNumber = askNumber("Please enter a number: ");
	string myBodyPart = askText("Please enter a body part: ");
	string myVerb = askText("Please enter a verb: ");


	tellStory(myName, myNoun, myNumber, myBodyPart, myVerb);


	return 0;
}

string askText(const string& prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(const string& prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(const string& name, const string& noun, const int& number, const string& bodyPart, const string& verb)
{
	cout << "\nHere's Your Story: \n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up on a life long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when on day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ". \n";
	cout << "After all this time the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ".";
	cout << " The moral of the story ?, be careful what you ";
	cout << verb;
	cout << " for.";

}
*/

// Exercise 2
/* what wrong with this program ?
int main()
{
	int score;
	score = 1000;
	float& rScore = score;
	return 0;
}

invalid statement, a reference of type float cannot be initialized with a value of type int
*/

// Exercise 3
/*
What’s wrong with the following function?
int& plusThree(int number)
{
int threeMore = number + 3;
return threeMore;


}

the functions is returning the functions as a reference and not the parameter variables
*/

#include <iostream>

using namespace std;

int& plusThree(int number);

// by making the variable threeMore global, i'm returning a reference to an existing variable is a global score 

int main()
{
	cout << "The local variable doesn't exist once the function ends, which\n";
	cout << "means that you're returning a reference to a non-existent object,\n";
	cout << "which is illegal\n";

	

	int number = 0;
	int test = plusThree(number);
	int& rTest = plusThree(number);
	cout << "test = " << test << endl;
	cout << "rTest = " << rTest << endl;
	cout << "number = " << number << endl;

	return 0;
}

int& plusThree(int number)
{
	int threeMore = number + 3;
	return threeMore;
}