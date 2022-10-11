// Array Passer Program
// Demnostrates the relationship between pointers and arrays 

#include <iostream>

using namespace std;

// constant pointer to a int type variable
// const pointer can change the value the pointed by variable holds
// const pointer cant be change to point to sometihng else.
void increase(int* const array, const int NUM_ELEMENTS);

// constant pointer to a constant, to display only and not change any values.
// const pointer to a const cant change the value or the variable pointed to by
void display(const int* const array, const int NUM_ELEMENTS);

int main()
{
	cout << "Creating an array of high scores.\n";
	const int NUM_SCORES = 3;
	int num_scores = 3;
	int highScores[NUM_SCORES] = { 5000, 3500, 2700 };

	// an array name is a constant pointer to the first element of the array
	cout << "Displaying the scores using array name as a constant pointer.\n";
	cout << *highScores << "\n"; // dereferencing the name highScores to get to the first element
	cout << *(highScores + 1) << "\n";
	cout << *(highScores + 2) << "\n\n";

	cout << "Increasing scores by passing array as a constant pointer.\n";
	increase(highScores, NUM_SCORES);
	cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
	display(highScores, NUM_SCORES);


}

void increase(int* const array, const int NUM_ELEMENTS)
{
	// looping through the array,
	// every loop adds 500 to [i] 
	for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
		array[i] += 500;
	}
}

void display(const int * const array, const int NUM_ELEMENTS)
{
	for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
		cout << array[i] << "\n";
	}
}
