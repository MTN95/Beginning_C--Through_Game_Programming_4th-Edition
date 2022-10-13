// Friend Critter Program
// Demonstrates friend functions and operator overloading 

#include <iostream>
#include <string>

using namespace std;

class Critter
{
    // make the following global functions friends of the Critter class 
    // takes a ref to a Critter object as a argument variable
    friend void Peek(const Critter& aCritter);
    /*The function overloads the << operator so that when I send a Critter object
    with the << to cout, the data member m_Name is displayed*/
    friend ostream& operator<<(ostream& os, const Critter& aCritter);

public:
    //constructor 
    Critter(const string& name = "");

private:
    string m_Name;
};

Critter::Critter(const string & name):
    m_Name(name)
{}

void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter);


int main()
{
    Critter crit("Poochie");

    cout << "Calling Peek() to access crit's private data member, m_Name: \n";
    Peek(crit);

    cout << "\nSending crit object to cout with the << operator:\n";
    cout << crit;

    return 0;
}

// global function that can access all of the Critter object's members
void Peek(const Critter& aCritter)
{
    cout << aCritter.m_Name << "\n";
}


// global function that can access all of the Critter object's members
// overloads the << operator, so you can send a Critter object to cout 
ostream& operator<<(ostream& os, const Critter& aCritter)
{
    os << "Critter Object - ";  
    os << "m_Name: " << aCritter.m_Name << "\n";
    return os;
}
