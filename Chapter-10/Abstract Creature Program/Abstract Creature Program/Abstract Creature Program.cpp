// Abstract Creature Program
// Demonstrates abstract classes

#include <iostream>
#include "Abstract Creature Program.h"

using namespace std;

class Creature // abstract class
{
public:
    Creature(int health = 100);
    virtual void Greet() const = 0; // pure virtual member functions
    virtual void DisplayHealth() const;

protected:
    int m_Health;
};

Creature::Creature(int health):
    m_Health(health)
{}

void Creature::DisplayHealth() const
{
    cout << "Health: " << m_Health << "\n";
}

class Orc : public Creature
{
public:
    Orc(int health = 120);
    virtual void Greet() const;
};

Orc::Orc(int health /* = 120 */):
    Creature(health) // calling the constructor from creature
{}

void Orc::Greet() const
{
    cout << "The Orc says hello.\n";
}

class OrcBoss : public Orc
{
public:
    OrcBoss(int health = 180);
    virtual void Greet() const;
};
OrcBoss::OrcBoss(int health):
    Orc(health)
{}

void OrcBoss::Greet() const
{
    cout << "The Orc Boss Growls hello.\n";
}

int main()
{
 

    Creature* pCreature = new Orc();
    pCreature->Greet();
    pCreature->DisplayHealth();
    
    Orc* pOrc = new OrcBoss();
    pOrc->Greet();
    pOrc->DisplayHealth();
    return 0;
}
