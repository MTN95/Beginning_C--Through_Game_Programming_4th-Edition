// Triple
// Demonstrates overloading functions

#include <iostream>
#include <string>

using namespace std;

int triple(int number);
string triple(string text);

int main()
{
    cout << "tripling 5 : " << triple(5);
    cout << "\ntripling Gamer: " << triple("\nGamer");
}
    
int triple(int number)
{
    return (number * 3);
}

string triple(string text)
{
    return (text + text + text);
}

