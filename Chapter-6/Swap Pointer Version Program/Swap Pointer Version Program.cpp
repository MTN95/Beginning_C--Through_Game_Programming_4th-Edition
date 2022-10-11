// Swap Pointer Version Program
// Demstrates passing constant pointers to alter argument variables 

#include <iostream>

void badSwap(int x, int y);

// pX and pY accepts memory addresses 
// pX and pY are both const pointers - can change the value they point to, can't change the pointer itself
void goodSwap(int* const pX, int* const pY);

int main()
{
	int myScore = 150;
	int yourScore = 1000;
	std::cout << "Original values: \n";
	std::cout << "myScore : " << myScore << "\n";
	std::cout << "yourScore : " << yourScore << "\n\n";

	std::cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	std::cout << "myScore : " << myScore << "\n";
	std::cout << "yourScore : " << yourScore << "\n\n";

	std::cout << "Calling goodSwap()\n";
	goodSwap(&myScore, &yourScore);
	std::cout << "myScore : " << myScore << "\n";
	std::cout << "yourScore : " << yourScore << "\n";


}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = x;
}

void goodSwap(int* const pX, int* const pY)
{
	// store value pointed by pX in temp 
	int temp = *pX;
	// store value pointed by pY in address pointed to by pX
	*pX = *pY;
	// store value originally pointed to by pX in address pointed to by pY
	*pY = temp;
}