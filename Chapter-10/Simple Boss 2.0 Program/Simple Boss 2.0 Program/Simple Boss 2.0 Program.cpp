// Simple Boss Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstrates inheritance 

#include <iostream>

using namespace std;

class Enemy
{
public:

	Enemy();

	void Attack() const;

protected:
	int m_Damage;
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
	Boss();

	void SpecialAttack() const;

	// getter for m_DamageMultiplier
	inline int GetDMGPoints() { return m_DamageMultiplier; }

private:

	int m_DamageMultiplier;
};

Boss::Boss() :
	m_DamageMultiplier(m_Damage * 3)
{}

void Boss::SpecialAttack() const
{

	cout << "Boss SpecialAttack() inflicts - " << m_DamageMultiplier << " damage points\n";
	
}

class FinalBoss : public Boss
{
public:
	FinalBoss();

	void MegaAttack() const;

	

private:
	int m_MegaMultiplier;
};
FinalBoss::FinalBoss() :
	m_MegaMultiplier(Boss::GetDMGPoints() * 10)
{}

void FinalBoss::MegaAttack() const
{ 
	cout << "FinalBoss MegaAttack() inflicts - " << m_MegaMultiplier << " damage points\n";
}

int main()
{
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.Attack();
	cout << "-----------------------------\n";
	cout << "Creating a Boss.\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();
	cout << "-----------------------------\n";
	cout << "Creating a FinalBoss\n";
	FinalBoss finalboss1;
	finalboss1.Attack();
	finalboss1.SpecialAttack();
	finalboss1.MegaAttack();

	return 0;
}

