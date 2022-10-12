// Critter Farm Program
// Demonstrates object containment

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Critter
{
public:
    // constructor - takes an argument variable for the critter's name, each time a new one is "constructed"
    Critter(const string& name = "");
    // public function that returns the Critter's name
    string GetName() const;

private:
    // a string variable to hold the name the critter
    string m_Name;

};

Critter::Critter(const string& name):
    m_Name(name) // sets m_Name as the name we pass in (name)
{}

inline string Critter::GetName() const
{
    return m_Name;
}

class Farm
{
public:
    // constructor - takes an argument variable for the amount of max num of objects in the array
    Farm(int spaces = 1);

    // adds a critter to m_Critters array
    void Add(const Critter& aCritter);
    // iterating through the array and printing 
    void RollCall() const;

private:
    // declaring a Critter array - hold critters
    vector<Critter> m_Critters;

    
};

Farm::Farm(int spaces)
{
    // reserve "saves" the amount of objects we can store in the array by passing int spaces in the argument
    m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
    m_Critters.push_back((aCritter));
}

void Farm::RollCall() const
{
    for (vector<Critter>::const_iterator iter = m_Critters.begin(); iter != m_Critters.end(); ++iter)
    {
        cout << iter->GetName() << " here.\n";
    }
}

int main()
{
    Critter crit("Poochie");
    cout << "My critter's name is " << crit.GetName() << "\n";

    cout << "\nCreating critter farm.\n";
    Farm myFarm(3);
    myFarm.Add(Critter("Moe"));
    myFarm.Add(Critter("Larry"));
    myFarm.Add(Critter("Curly"));
    
    cout << "\nCalling Roll..\n";
    myFarm.RollCall();

    return 0;
}


