// Exercise - 1

// Fav-Games-List
// a list of my favorite games

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
    // creating a list 
    std::vector<std::string> myList;
    myList.push_back("Half Life");
    myList.push_back("GTA");
    myList.push_back("Counter Strike");

    // for reading data
    std::vector<std::string>::const_iterator iter;

    char choice = NULL;
    // main loop
    while (choice != 'q')
    {
       
        // prompt the user to pick
        std::cout << "\nWould you like to:\n";
        std::cout << "1 - Show My Faorite Games List\n";
        std::cout << "2 - Add A Game To The List\n";
        std::cout << "3 - Remove A Game From The List\n";
    
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        if (choice == '1')
        {
            // displaying the list 
            std::cout << "\nThis is a list of my Favorite Games:\n";
            for (iter = myList.begin(); iter != myList.end(); ++iter)
            {
                std::cout << *iter << "\n";
            }
        }
        else if (choice == '2')
        {
            std::string addGame;
            std::cout << "\nEnter a game to add to the list: \n";
            std::cin >> addGame;
            myList.push_back(addGame);
            std::cout << "The Game has been added the list!\n";
        }
        else if (choice == '3')
        {
            std::string removeGame;
            std::cout << "\nEnter a game to remove from the list: \n";
            std::cin >> removeGame;
            iter = find(myList.begin(), myList.end(), removeGame);
            if (iter != myList.end())
            {
                myList.erase(iter);
                std::cout << "\nRemoved from list!\n";
            }
            else
            {
                std::cout << "\nGame Not Found.";
            }
        }
        else
        {
            std::cout << "\nSorry incorrect input, try again.\n";
        }
    }
    return 0;
}

// Exercise - 2
/*
 iter++ is a wrong statement, iter is a const_iterator and can't be used to change the value
*/

// Exercise - 3 
/* Word Jumble Pseudocode
create a group of words
pick a random word to shuffle
while player hasn't guessed right or choose to quit game
	prompt the player for the guess
	if the guess is right
		 tell the player he's right
		 show the unscrambled word
		 exit
	otherwise - the guess is wrong
		tell player he can use a hint
		prompt the player to guess again

*/