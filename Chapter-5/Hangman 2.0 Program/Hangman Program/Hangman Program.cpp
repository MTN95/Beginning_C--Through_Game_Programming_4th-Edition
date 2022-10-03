// Hangman Program
// Classic Hamgman Game
/*Plan
create a group of words.
Pick a random word from the group as the secrte word
while player hasnt made too many incorrect guesses and hasnt guessed the secret word 
    tell player num of incorrect guesses left
    show player the letters he player guessed
    Show how much of the secret word player guessed 
    get player next guess
    while player has entered a letter the player already guessed
        get player's guess
        add new guess to the group of used letters 
        if the guess is in the secret word
            tell player the guess is correct 
            Update the word guessed so far with the new letter 
        otherwise
           tell player guess is incorrect 
           ++ the num of incorrect guesses the player made  
if the player has made to many incorrect guesses 
    tell the player he has been hanged
otherwise
congratz you have guess the right word !
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

char getGuess();

bool isGuessInSecret();

char guess;

int wrong = 0;

// selecting the secret word to THE_WORD
std::string THE_WORD;
// letters already guesses
std::string used = "";

int main()
{

    // Max Wrong Guesses Allowed
    const int MAX_WRONG = 8;
    // creating a vector container - hold string objects
    std::vector<std::string> words;
    // Collection of words to guess
    words.push_back("HANG");
    words.push_back("MAN");
    words.push_back("GAME");
    words.push_back("VERSION");
    words.push_back("TWO");

    // seeding the random generator
    srand(static_cast<unsigned int>(time(0)));
    // shuffling the words
    random_shuffle(words.begin(), words.end());

    THE_WORD = words[0];

    // num of incorrect guesses
    wrong = 0;
    // word guessed so far
    std::string soFar (THE_WORD.size(), '-');
    

    std::cout << "\nWelcome to Hangman. Good Luck!\n";

        // while the player didn't use max guesses allowed, and didn't guess THE_WORD, keep looping
        while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
        {
            // displaying info for the player
            std::cout << "\n\nYou have " << (MAX_WRONG - wrong);
            std::cout << "\nIncorrect guesses left.\n";
            std::cout << "\nYou've used the following letters: " << used << "\n";
            std::cout << "\nSo far, the word is: " << soFar << "\n";

            // getting the player's guess
            guess = getGuess();

            while (used.find(guess) != std::string::npos)
            {
                std::cout << "\nYou already guessed " << guess << "\n";
                std::cout << "enter you guess: ";
                std::cin >> guess;
                guess = toupper(guess);
            }
            used += guess;
            
            if (isGuessInSecret())
            {
                std::cout << "\nThats right! " << guess << " is in the word.\n";

                // update soFar to include the newly guessed letter
                for (int i = 0; i < THE_WORD.size(); ++i)
                {
                    if (THE_WORD[i] == guess)
                    {
                        soFar[i] = guess;
                    }
                }
            }
            else
            {
                std::cout << "Sorry, " << guess << " isn't in the word.\n";
                ++wrong;
            }       
        }

        // shut down
        if (wrong == MAX_WRONG)
        {
            std::cout << "\n\nYOU HAVE BEEN HANGED!\n";
        }
        else
        {
            std::cout << "\nYou have Guessed IT! \n";
        }

        std::cout << "\nThe word was " << THE_WORD << "\n";

    return 0;
}

char getGuess()
{

    std::cout << "enter you guess: ";
    std::cin >> guess;
    // toupper - to upper
    // secrets words are in uppercase
    guess = toupper(guess);
    return guess;
}

bool isGuessInSecret()
{
    if (THE_WORD.find(guess) != std::string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}
