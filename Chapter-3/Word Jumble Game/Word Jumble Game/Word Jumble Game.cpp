// Word Jumble Game
// The classic Word Jumble game where the player can asked for a hint

// setting up the include files
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


// Chapter 3 - Exercises
/*

// Question 2 - nothing's wrong, valid. 
string phrase = "Test";
for (int i = 0; i < phrase.size(); ++i)
{
	cout << "Character at position " << i << " is: " << phrase[i] << endl;
}

// Question 3 - used ` instead of ', and switch the columns and rows on the board.
const int ROWS = 2;
const int COLUMNS = 3;
char board[ROWS][COLUMNS] =
{ {'O', 'X', 'O'},
  {' ', 'X', 'X'} };

*/

// Question 1 : 
// main function
int main()
{
	// declare and initialize a two-dimensional array with words and corresponding hints.
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel like banging your head againts something ?"},
		{"glasses", "These might help you see the answer."},
		{"hat", "something to cover your head from the sun"},
		{"persistent", "keep at it"},
		{"jumble", "what the game is all about"}
	};
	
	// Testing
	/*
	cout << "Random word at run time: ";
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	
	cout << WORDS[choice][WORD] << "\n\n";

	cout << WORDS[0][0] << " - " << WORDS[0][1] << "\n";
	cout << WORDS[1][0] << " - " << WORDS[1][1] << "\n";
	cout << WORDS[2][0] << " - " << WORDS[2][1] << "\n";
	cout << WORDS[3][0] << " - " << WORDS[3][1] << "\n";
	cout << WORDS[4][0] << " - " << WORDS[4][1] << "\n";
	*/
	
	// generate a random index based on the number of words in the array
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; // word to guess 
	string theHint = WORDS[choice][HINT]; // hint for word
	// Jumbling the word
	string jumble = theWord; // jumbled version of word
	int length = jumble.size();
	for (int i = 0;i<length;++i)
	{
		// geerating two random positions
		int index1 = (rand() & length);
		int index2 = (rand() & length);

		// swapping the characters at those positions
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	// scoring system
	int pointsAmount = (jumble.size() * 10);
	int playerPoints = 0;
	int hintPenalty = 10;
	bool hintCheck = false;
	
	// welcoming the player 
	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Rearrange the letter to make a word.\n";
	cout << "Enter 'hint' for a hint(-10 points to use a hint).\n";
	cout << "Enter 'quit' to quit the game.\n";
	cout << "The jumble is: \n" << jumble;

	string guess;
	cout << "\nYour guess: ";
	cin >> guess;

	int tries = 0;

	while ((guess != theWord) && (guess != "quit"))
	{
		++tries;
		if (guess=="hint")
		{
			cout << "Hint: " << theHint;
			if (hintCheck==false)
			{
			playerPoints -= hintPenalty;
			hintCheck = true;
			cout << "\n- 10 points for using a hint.\n";
			
			}
		}
		else
		{
			cout << "Sorry, thats not it";
		}

		cout << "\nYour guess: ";
		cin >> guess;
	}
	if (guess == theWord)
	{


		++tries;
		if (!hintCheck)
		{
			playerPoints = pointsAmount;

		}
		else
		{
			playerPoints = (pointsAmount) - 10;

		}
		cout << "\nPoints: " << playerPoints << "\n";

		
		cout << "You Guessed the Right Answer in "<< tries << " tries\n";
	}
	cout << "\n\nThanks for playing (: ";
}



