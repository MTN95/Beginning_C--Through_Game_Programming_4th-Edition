// Private Critter
// Demonstrates setting member access levels

#include <iostream>

using namespace std;

class Critter
{
public: // begin public section
    Critter(int hunger = 0);
    inline int GetHunger() const; // constant member function
    void SetHunger(int hunger);

private: // begin private section
    int m_Hunger;
};

Critter::Critter(int hunger):
    m_Hunger(hunger)
{
    cout << "A new critter has been born!.\n"; 
}

inline int Critter::GetHunger() const
{
    return m_Hunger;
}

void Critter::SetHunger(int hunger)
{
    if (hunger < 0)
    {
        cout << "you can't set a critter's hunger level to a negative number.\n\n";
    }
    else m_Hunger = hunger;
}

int main()
{
    Critter crit(7);
    //cout << m_Hunger; illegal m_Hunger is in the private class section
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

    cout << "Calling SetHunger() with -1.\n";
    crit.SetHunger(-1);

    cout << "Calling SetHunger() with 9.\n";
    crit.SetHunger(9);
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
        
    return 0;

}