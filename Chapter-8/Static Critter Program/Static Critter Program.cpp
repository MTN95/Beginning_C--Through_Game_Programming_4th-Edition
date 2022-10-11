// Static Critter Program
// Demonstrates static member variables and functions

#include <iostream>

using namespace std;

class Critter
{
public:
    // static member variable declaration
    // total number of Critter objects in existence 
    static int s_Total;

    // constructor
    Critter(int hunger = 0);
    
    // static member function declaration
    // this function exist for the entire class
    static int GetTotal();

private:
    int m_Hunger;
};

// static member initialization
int Critter::s_Total = 0;

// the constructor gets called every time an object of the class is instantiated
// everytime we create a new object of the class, the constructor get called.
Critter::Critter(int hunger):
    m_Hunger(hunger)
{
    cout << "A critter has been born!" << "\n";
    ++s_Total;
}

// returns the value of a static data member s_Total
int Critter::GetTotal()
{
    return s_Total;
}

int main()
{
    cout << "the total number of critters is: ";
    cout << Critter::s_Total << "\n\n";

    Critter crit1, crit2, crit3;

    cout << "\nthe total number of critters is: ";
	cout << Critter::GetTotal() << "\n";

    return 0;
}

