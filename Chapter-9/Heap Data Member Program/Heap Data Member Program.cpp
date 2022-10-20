// Heap Data Member Program
// Demonstrates an object with a dynamically allocated data member

#include <iostream>
#include <string>

using namespace std;

class Critter
{
public:
	//constructor
	Critter(const string& name = "", int age = 0);
	~Critter(); // destructor
	Critter(const Critter& c); // copy constructor declaration
	// overloaded assignment op
	/*
	this is inside the class declaration, it must be a member of the class
	and doesn't need to be prefixed with the class name Critter:: .
	*/
	Critter& operator=(const Critter& c);

	void Greet() const;

private:
	string* m_pName;
	int m_Age;
};

Critter::Critter(const string& name, int age)
{
	cout << "Constructor called\n";
	m_pName = new string(name);
	m_Age = age;
}

Critter::~Critter()
{
	cout << "Destructor called\n";
	delete m_pName;
}

Critter::Critter(const Critter& c)
{
	cout << "Copy Constructor called\n";
	m_pName = new string(*(c.m_pName));
	m_Age = c.m_Age;
}

Critter& Critter::operator=(const Critter& c) // c is a constant reference to a Critter object
{
	cout << "Overloaded Assignment Operator called\n";
	// checking to see if the object isn't being assigned to himself;
	if (this != &c)
	{
		delete m_pName;
		//crit1 = crit2
		m_pName = new string(*(c.m_pName)); // copies, but creates new memory for it, instead of pointing to the same memory address
		m_Age = c.m_Age;
	}
	return *this; // points to the object that was used to call the function
}

void Critter::Greet() const
{
	cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old.";
	cout << "&m_pName: " << &m_pName << "\n";
}

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
	testDestructor();
	cout << "\n";
	Critter crit("Poochie", 5);
	crit.Greet();
	testCopyConstructor(crit);
	crit.Greet();
	cout << "\n";

	testAssignmentOp();
	return 0;
}

// creating a new Critter object, constructor gets called automatically, after initializing, destructor is called 
void testDestructor()
{
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();
}

// when passing Critter aCopy as a argument variable, the object is automatically gets copied, and copy constructor is called 
void testCopyConstructor(Critter aCopy)
{
	aCopy.Greet();
}

void testAssignmentOp()
{
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();
	cout << "\n";

	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();

}
