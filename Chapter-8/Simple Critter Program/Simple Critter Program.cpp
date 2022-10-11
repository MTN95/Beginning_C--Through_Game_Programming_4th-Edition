// Simple Critter Program
// Demonstrates creating a new type

#include <iostream>

using namespace std;

// class definition -- new type
class Critter
{
public: // access specifier
    int m_Hunger; // data member
    void Greet(); // member function
};

void Critter::Greet()
{
    cout << "Hi, I'm a critter. my hunger level is " << m_Hunger << "\n";
}

int main()
{
    Critter crit1;
    Critter crit2;

    crit1.m_Hunger = 9;
    cout << "crit1's hunger level is " << crit1.m_Hunger << "\n";

    crit2.m_Hunger = 3;
    cout << "crit1's hunger level is " << crit2.m_Hunger << "\n";
    
    crit1.Greet();
    crit2.Greet();

    return 0;
}



















