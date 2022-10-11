// Constructer Critter Program
// Demonstrates constructors

#include <iostream>

using namespace std;

class Critter
{
public:

    int m_Hunger;
    Critter(int hunger = 0); // declaring a constructor 
    void Greet();
};

Critter::Critter(int hunger) // defining a constructor
{
    cout << "A new critter has been born!" << "\n";
    m_Hunger = hunger;
}

void Critter::Greet()
{
    cout << "hi!, i'm a critter, my hunger level is : " << m_Hunger << "\n\n";
}

int main()
{
    Critter crit(7);
    crit.Greet();
}


