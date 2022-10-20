// Polymorphic Bad Guy Program
// Demonstrates calling member functions dynamically      

#include <iostream>

using std::cout;

class Enemy
{
public:
    Enemy(int damage = 10);
    virtual ~Enemy();
    virtual void Attack() const;

protected:
    int* m_pDamage;
};

Enemy::Enemy(int damage)
{
    m_pDamage = new int(damage); 
}

Enemy::~Enemy()
{
    cout << "In Enemy destructor, deleting m_pDamage.\n";
    delete m_pDamage; // deleting pointer 
    m_pDamage = 0;
}

void Enemy::Attack() const
{
    cout << "An enemy attacks and inflicts " << *m_pDamage << " damage points.";
}

class Boss : public Enemy
{
public:
    Boss(int multiplier = 3);
    virtual ~Boss();
    virtual void Attack() const;

protected: 
    int* m_pMultiplier;
};

Boss::Boss(int multiplier)
{
    m_pMultiplier = new int(multiplier);
}

Boss::~Boss()
{
    cout << "In Boss destructor, deleting m_pMultiplier.\n";
    delete m_pMultiplier; // deleting pointer 
    m_pMultiplier = 0;
}

void Boss::Attack() const
{
	cout << "A boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier) << " damage points\n";
}

int main()
{
    cout << "Calling Attack() on boss object through pointer to Enemy.\n";
    // pBadGuy points to the Boss object
    Enemy* pBadGuy = new Boss(); // instantiates a Boss object on the heap, and creates a pointer to Enemy
    pBadGuy->Attack();

    cout << "\n\nDeleting pointer to Enemy:\n";
    delete pBadGuy;
    pBadGuy = 0;
}
