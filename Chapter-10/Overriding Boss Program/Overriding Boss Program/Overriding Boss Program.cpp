// Overriding Boss Program.
// Demonstrates calling and overriding base member functions

#include <iostream>

class Enemy
{
public:
    Enemy(int damage = 10);
    virtual void Taunt() const; // made virtual to be overriden
    virtual void Attack() const; // made virtual to be overriden

private:
    int m_Damage;
};

Enemy::Enemy(int damage):
    m_Damage(damage)
{}

void Enemy::Taunt() const
{
    std::cout << "The enemy says he will fight you.\n";
}

void Enemy::Attack() const
{
    std::cout << "Attack! inflicts " << m_Damage << " damage points\n";
}

class Boss : public Enemy
{
public:
    Boss(int damage = 30);
    virtual void Taunt() const;
    virtual void Attack() const;

};

Boss::Boss(int damage):
    Enemy(damage) // calling the base class constructor in derived constructor
{}

void Boss::Taunt() const
{
    std::cout << "The boss says he will end you pitiful existence.\n";
}

void Boss::Attack() const
{
    Enemy::Attack();
    std::cout << " and laughs heartily at you.\n";
}

int main()
{
    std::cout << "Enemy Object:\n";
    Enemy anEnemy;
    anEnemy.Taunt();
    anEnemy.Attack();

    Boss aBoss;
    aBoss.Taunt();
    aBoss.Attack();
}