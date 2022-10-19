// Simple Boss Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstrates inheritance 

#include <iostream>

using namespace std;

class Enemy 
{
public:
    int m_Damage;
    
    Enemy();

    void Attack() const;
};

Enemy::Enemy() :
    m_Damage(10)
{}

void Enemy::Attack() const
{
    cout << "Enemy Attack() inflicts - " << m_Damage << " damage points\n";
}

// boss class derived from enemy class
// enemy is a Base Class.
// boss is a derived class
class Boss : public Enemy 
{
public:
    int m_DamageMultiplier;

    Boss();

    void SpecialAttack() const;
};

Boss::Boss():
    m_DamageMultiplier(3)
{}

void Boss::SpecialAttack() const
{
	cout << "Enemy Attack() inflicts - " << (m_Damage * m_DamageMultiplier)<< " damage points\n";

}

int main()
{
    cout << "Creating an enemy.\n";
    Enemy enemy1;
    enemy1.Attack();

    cout << "Creating a Boss.\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();

    return 0;
}