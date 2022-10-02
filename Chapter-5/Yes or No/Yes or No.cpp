// Yes or No
// Demonstrates return types and parameters

#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

char askYesNo1();
char askYesNo2(string question);


int main()
{
    char answer1 = askYesNo1();
    cout << "Thanks for answering! your answer: " << answer1 << "\n";

    char answer2 = askYesNo2("\nAre You Feeling Good Today ? 'y' or 'n' ");
    cout << "\nThanks for answering! your answer: " << answer2 << "";

    return 0;
}

char askYesNo1()
{
    char response1;
    do
    {
        cout << "Please enter 'y' or 'n': ";
        cin >> response1;
    } while (response1 != 'y' && response1 != 'n');
    return response1;
}

char askYesNo2(std::string question)
{
    char response2;
    do
    {
        cout << question;
        cin >> response2;
    } while (response2 != 'y' && response2 != 'n');

    return response2;
}
