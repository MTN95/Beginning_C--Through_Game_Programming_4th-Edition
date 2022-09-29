// Exercises 

#include <iostream>
#include <cstdlib>
#include <ctime>

// 1 - Chooser Menu Program using enums
/*
int main()
{
    std::cout << "\t\t\t\t@--Difficultty Levels--@\n";

    std::cout << "0 - Easy\n";
    std::cout << "1 - Normal\n";
    std::cout << "2 - Hard\n";
    std::cout << "3 - Extereme\n\n";

    // enum starts at 0. 0 = easy, normal = 1, etc..
    enum difficulty { Easy, Normal, Hard, Extreme };
    difficulty MyDifficulty;

    int choice;
    std::cout << "Enter a Difficulty 0/1/2/3 : \n\n";
    std::cin >> choice;
    
    if (choice == difficulty{ Easy })
    {
        std::cout << "\nYou Picked Easy\n";
    }
    else if (choice == difficulty{ Normal })
    {
        std::cout << "\nYou Picked Normal\n";
    }
    else if (choice == difficulty{ Hard })
    {
        std::cout << "\nYou Picked Hard\n";
    }
    else if (choice == difficulty{ Extreme })
    {
        std::cout << "\nYou Picked Extreme\n";
    }
    return 0;
}
*/

// 2 - Whats wrong with the following loop ?
/*
int main()
{
    // Always fails, x is 0, 0 = false,
    // Need to add a '!' to solve
    int x = 0;
    while (!x) 
    {
        ++x;
        std::cout << x << std::endl;
    }
}
*/

// 3 - Computer Guess the number

int main()
{
    // seed random number generator based on the current time
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber;
    int tries = 0;
    int myNum;

    std::cout << "\t\t\tWelcome to Computer's Guesses My Number !\n\n";
        
    std::cout << "Enter a number between 1-100 for the computer to guess: ";
    std::cin >> myNum;

    do
    {   
    // Assigning secretNumber a random number between 1 - 100
        secretNumber = rand() % 100 + 1;
        tries++;
        if (secretNumber > myNum)
        {
            std::cout << "The Computer Guessed: " << secretNumber << " Too High." << '\n';
        }
        else if (secretNumber < myNum)
        {
        std::cout << "The Computer Guessed: " << secretNumber << " Too Low." << '\n';
        }
        else
        {
            std::cout << "The Computer Guessed: " << secretNumber << '\n';
            std::cout << "The Computer Guessed the Right Number in " << tries << " Guesses!\n";
        }
    } while (secretNumber != myNum);
    return 0;
}