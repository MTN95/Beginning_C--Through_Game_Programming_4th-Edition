// Game Lobby Program
// Simulates a game lobby where players wait 

#include <iostream>
#include <string>

using namespace std;

class Player
{
	friend ostream& operator<<(ostream& os, const Player& aPlayer);

public:
    // constructor
    Player(const string& name = "");

    // Getter for the name 
    string GetName() const;

    // Gets the next player in line/list
    // returns a pointers to a Player class object
    Player* GetNext() const;

    // sets the next player in line/list
    void SetNext(Player* next);

private:
    string m_Name;
    Player* m_pNext; // pointer to next player in list 
};

Player::Player(const string& name):
    m_Name(name), // setting the name passing in ( )
    m_pNext(0) // 0 same as nullptr
{}

string Player::GetName() const
{
    return m_Name;
}

Player* Player::GetNext() const
{
    return m_pNext;
}

void Player::SetNext(Player* next)
{
    m_pNext = next;
}

// overloads the '<<' operator, to display a Lobby object by sending it to cout
ostream& operator<<(ostream& os, const Player& aPlayer)
{
    os << aPlayer.GetName() << "\n";
    return os;
}


class Lobby
{

    friend ostream& operator<<(ostream& os, const Lobby& aLobby);

public:
    Lobby(); // constructor 
    ~Lobby(); // destructor
    void AddPlayer(); // adds a player to the list 
    void RemovePlayer(); // removes a player from the list 
    void Clear(); // clears the list 

private:
    Player* m_pHead; // pointer to Player obj, points to the first player in list
    Player* m_pTail;
};


Lobby::Lobby() :
    m_pHead(0),
    m_pTail(0)
{}

Lobby::~Lobby()
{
    Clear();
}

void Lobby::AddPlayer()
{
    // creates a new player node 
    cout << "Please enter the name of the new player: ";
    string name;
    cin >> name;
    Player* pNewPlayer = new Player(name); // new creates a new player on the heap

    // if the list is empty, make pNewPlayer the head of the list
    if (m_pHead == 0)
    {
        m_pHead = pNewPlayer;
        m_pTail = m_pHead; // if the list is empty, make pNewPlayer the first in list and the last. 
    }
    // otherwise, add the player to the end of the list 
    else
    {
        //Player* pIter = m_pHead;
        //while (pIter->GetNext() != 0) // loops until m_pNext = 0, meaning nullptr
        //{
        //    pIter = pIter->GetNext(); 
        //}// ends when m_pNext = 0 of a player in the list, meaning we found the last index nullptr / 0
        //pIter->SetNext(pNewPlayer); // setting the next player in the list as pNewPlayer
        m_pTail->SetNext(pNewPlayer);
        m_pTail = m_pTail->GetNext();
    }
}

void Lobby::RemovePlayer()
{
    // removes the first player in the list 
    if (m_pHead == 0) // if first player in list in 0 / nullptr
    {
        cout << "The game lobby is empty, no one to remove !\n";
    }
    else // meaning there is players in the list - m_pHead is not nullptr / 0
    {
        Player* pTemp = m_pHead; // setting pTemp to the first player in the list
        // setting m_pHead to the next Player in list 
        m_pHead = m_pHead->GetNext(); // Either the next Player object or 0 
        delete pTemp; // deleting pTemp, which points to the first Player in the list
    }
}

void Lobby::Clear()
{
    // loops and removes players in the list
    // when m_pHead = 0, function ends, there is no player objects in the list.
    while (m_pHead != 0)
    {
        RemovePlayer();
    }
}

// overloads the '<<' operator, to display a Lobby data member by sending it to cout
ostream& operator<<(ostream& os, const Lobby& aLobby)
{
    Player* pIter = aLobby.m_pHead;
    os << "\nHere's who's in the game lobby:\n";
    if (pIter == 0)
    {

        os << "The Lobby's empty.\n";
    }
    else
    {
        while (pIter != 0)
        {
            os << *pIter << "\n";
            pIter = pIter->GetNext();   
        }
    }
    return os;
}

int main()
{
    Lobby myLobby;
    int choice;
    do 
    {
        cout << myLobby;
        cout << "\nGame Lobby\n";
        cout << "0 - Exit the program\n";
        cout << "1 - Add a player to the lobby\n";
        cout << "2 - Remove a player from the lobby\n";
        cout << "3 - Clear the lobby\n";
        cout << "\n" << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0: cout << "\nGood-bye.\n"; break;
        case 1: myLobby.AddPlayer(); break;
        case 2: myLobby.RemovePlayer(); break;
        case 3: myLobby.Clear(); break;
        default: cout << "That was not a valid choice.\n";
        }
    } while (choice != 0);
    return 0;
}
/*
* 

// Exercise 3 

#include <iostream>
using namespace std;
int main()
{
	int* pScore = new int(100); // new int on the heap
    cout << pScore << "- 1\n";
	*pScore = 500; // using the dereference to access the value inside *pScore address. init to 500;
	cout << pScore << "- 2\n";


	pScore = new int(1000); // creates another memory address, a deep copy of pScore on the heap
	cout << pScore << "- 3\n";

    delete pScore; 
	pScore = 0;
    return 0;

    // when we delete pScore, we delete the variable, not the pointer pointing to pScore, this creates a dangling pointer.
}
*/