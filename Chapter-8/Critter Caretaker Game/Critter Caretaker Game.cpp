
// Critter Caretaker Game
// Simulates caring for a virtual pet

#include <iostream>

using namespace std;

class Critter
{
public:

    Critter(int hunger = 0, int boredom = 0);

    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);

    void printStats();
private:

    int m_Hunger;
    int m_Boredom;

    int GetMood() const;
    void PassTime(int time = 1);

};

Critter::Critter(int hunger, int boredom):
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

inline int Critter::GetMood() const
{
    return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}

void Critter::Talk()
{
    cout << "I'm a critter and i feel ";
    int mood = GetMood();
    if (mood > 15)
    {
        cout << "mad.\n";
    }
    else if (mood > 10)
    {
        cout << "frustrated.\n";
    }
    else if (mood > 5)
    {
        cout << "okay.\n";
    }
    else
    {
        cout << "happy.\n";
    }
    PassTime();
}

void Critter::Eat(int food)
{
    cout << "Brruppp.\n";

    m_Hunger -= food;
    if (m_Hunger < 0)
    {
        m_Hunger = 0;
    }
    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";
    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    PassTime();
}

void Critter::printStats()
{
    
   cout << "Critter's hunger: " << m_Hunger << "\n";
   cout << "Critter's boredom: " << m_Boredom << "\n";
}

int main()
{
    Critter crit;
    crit.Talk();

    int choice;

    do 
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Good-bye.\n";
            break;
        case 1:
            system("CLS");
            crit.Talk();
            break;
        case 2:
			system("CLS");
            crit.Eat();
            break;
        case 3:
			system("CLS");
            crit.Play();
            break;
        case 4:
            crit.printStats();
            break;
        default:
			system("CLS");
            cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
    } while (choice != 0);
    return 0;
}


/* 
 Exercise 3
although the GetHunger() is a valid function
int m_Hunger is uninitialized

#include <iostream>
using namespace std;
class Critter
{
public:
	int GetHunger() const { return m_Hunger; }
private:
	int m_Hunger;
};

int main()
{
	Critter crit;
	cout << crit.GetHunger() << endl;
	return 0;
}

*/