// MenuChooserProgram
// Demonstrates the switch statement
#include <iostream>

int main()
{
    std::cout << "Difficulty Levels\n\n";

    std::cout << "1 - Easy" << '\n';
    std::cout << "2 - Normal" << '\n';
    std::cout << "3 - Hard\n\n";

    int choice;
    std::cout << "Choice: " << '\n';
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "You picked Easy.";
        break;
    case 2:
        std::cout << "You picked Normal.";
        break;
    case 3:
        std::cout << "You picked Hard.";
        break;
    default:
        std::cout << "Error, Please choose a number - 1/2/3";
    }
    return 0;
}
