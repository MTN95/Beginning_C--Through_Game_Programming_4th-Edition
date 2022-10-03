// Global Reach Program
// Demonstrates global variables 

#include <iostream>

using std::cout; using std::cin; using std::endl;

// global variable
int glob = 10;

// Declaring 3 functions
void access_global();
void hide_global();
void change_global();


int main()
{
    cout << "\nIn main() glob is:" << glob << "\n\n";
    access_global();

    hide_global();
    cout << "\nIn main() glob is:" << glob << "\n\n";

    change_global();
    cout << "\nIn main() glob is:" << glob << "\n\n";
    return 0;
}

void access_global()
{
    cout << "\nIn access_global() glob is:" << glob << "\n\n";

}

void hide_global()
{
    int glob = 0;
    cout << "\nIn hide_global() glob is:" << glob << "\n\n";
}

void change_global()
{
    glob = -10;
    cout << "\nIn change_global() glob is:" << glob << "\n\n";

}
