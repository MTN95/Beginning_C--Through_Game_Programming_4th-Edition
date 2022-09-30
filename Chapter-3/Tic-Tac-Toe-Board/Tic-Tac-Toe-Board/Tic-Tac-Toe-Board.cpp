// Tic-Tac-Toe-Board
// Demonstrates multi-dimentional array

#include <iostream>

int main()
{
	const int ROWS(3), COLUMNS(3);
	char board[ROWS][COLUMNS] = { {'O','X','O'},
								  {' ','X','X'},
								  {'X','O','O'} };

	// Displaying The Board
	std::cout << "Here's the tic tac toe board:\n";
	for(int i = 0; i<ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}

	// Assigning X to the empty location
	std::cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';

	// Displaying The Board After Changes
	std::cout << "Now the tic tab toe board is:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "X WINS!";
	return 0;
}
