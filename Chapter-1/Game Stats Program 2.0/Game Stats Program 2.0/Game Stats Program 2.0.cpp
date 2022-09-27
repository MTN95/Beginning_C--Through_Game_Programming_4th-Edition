// Game Stats Program 2.0
// Demonstrates Arithmetic Operation with Variables

#include <iostream>

// Arithmetic Operation with Variables
/*
    When we have variables with values, we'll want to change their values during the course of the game.
    For numbers of reasosn I.E:
    1.Increase / Decrease Player's Health
    2.Increase / Decrease Player's Score
    3.Add Bonus To The Player's Score For When Defeating a Boss Fight 

    By using the arithmetic Operators:
    + : Addition Adds together two values x + y 	
    - : Subtraction Subtracts one value from another x - y 	
    * : Multiplication Multiplies two values 	x * y 	
    / : Division Divides one value by another x / y 	
    % : Modulus Returns the division remainder x % y 	
   ++ : Increment Increases the value of a variable by 1 ++x 	
   -- : Decrement Decreases the value of a variable by 1 --x
*/

int main()
{
    unsigned int score = 5000;
    std::cout << score << std::endl;

    // altering the value of a variable
    score = score + 100; // takes the score value, adds 100 and assigns the results to score - 5100
    std::cout << score << std::endl;

    // combined assignment operator
    score += 100; // 
    std::cout << score << std::endl;

    // increment operators
    int lives = 3;
    ++lives;
    std::cout << "lives: " << lives << std::endl;

    lives = 3;
    lives++;
    std::cout << "lives: " << lives << std::endl;

    // prefix increment operator - first adding 1 to lives, then multiplies
    lives = 3;
    int bonus = ++lives * 10;
    std::cout << "lives, bonus: " << lives << "," << bonus << std::endl;

    // postfix increment operator - first multiplies, then add 1 to lives 
    lives = 3;
    bonus = lives++ * 10;
    std::cout << "lives, bonus: " << lives << "," << bonus << std::endl;

    // integer wrap around
    score = 4294967295;
    std::cout << "\nscore: " << score << std::endl;
    ++score;
    std::cout << "\nscore: " << score << std::endl;

}
