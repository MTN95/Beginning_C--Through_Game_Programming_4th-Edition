// Pointing
// Demonstrates using pointers 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaring a pointer
    int* pAPointer;

    // Declaring and initializing a pointer 
    int* pScore = 0;

    int score = 1000;

    // assigning pScore pointer variable, an address of a variable score
    pScore = &score;

    cout << "Assigning &score to pScore: \n";
    cout << "&score is : " << &score << "\n";

    // Displaying the address the pointer pScore hold, not the value.
    cout << "pScore is : " << pScore << "\n";

    cout << "score is : " << score << "\n";

    // displaying the value pointed by a pointer, pScore.
    cout << "*pScore is : " << *pScore << "\n\n";


	cout << "adding 500 to score\n";
	score += 500;
	cout << "score is : " << score << "\n";
	cout << "pScore is : " << *pScore << "\n\n";


    cout << "adding 500 to pScore\n";
    *pScore += 500;
	cout << "score is : " << score << "\n";
	cout << "pScore is : " << *pScore << "\n\n";

	cout << "assigning &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is : " << &newScore << "\n";
    cout << "pScore is : " << pScore << "\n";
    cout << "newScore is : " << newScore << "\n";
	cout << "pScore is : " << *pScore << "\n\n";

    cout << "assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str;

    cout << "str is : " << str << "\n";
    cout << "*pStr is : " << *pStr << "\n";
    cout << "(*pStr).size() is : " << (*pStr).size() << "\n";
    cout << "pStr->size() is : " << pStr->size() << "\n";

    return 0;
}
