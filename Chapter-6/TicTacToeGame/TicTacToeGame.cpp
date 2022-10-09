// TicTacToeGame
// Plays the game of tic tac toe against a human opponent

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Global constants 
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// Declaring function prototypes 

/* Displays the game instructions */
void instructions();

/* Asks a yes or no question, 
@params receives a question, 
returns either a 'y' / 'n' */ 
char askYesNo(string question);

/* Asks for a number within a range
@params receives a question, a low number and a high number, 
returns a number between the range of low to high */
int askNumber(string question, int high, int low = 0);

/* Determines the humans piece,
returns either a 'X' / 'O'
*/
char humanPiece();

/* Calculates the opposing piece given a piece
@params receives either a 'X' / 'O'
returns either a 'X' / 'O'
*/
char opponent(char piece);

/* Displays the board on the screen 
@params receives a board
**board is reference to a vector array of type char**
*/
void displayBoard(const vector<char>& board); 

/* Determines the game winner
@pararms receives a board
returns an - 'X', 'O', 'T' = TIE, 'N' = NO_ONE,
*/
char winner(const vector<char>& board);

/* Determines whether a move is legal
@params receives a board and a move
returns either true or false
*/
bool isLegal(const vector<char>& board, int move);

/* Gets the humans move
@params receives a board and the humans piece
returns the humans move
*/
int humanMove(const vector<char>& board, char human);

/* Calculates the computers move
@params receives a board and the computers piece
returns the computers move*/
int computerMove(vector<char> board, char computer);

/* Congratulates the winner or declares a tie 
@params receives the winning side, the computers piece, and the humans piece */
void announceWinner(char winner, char computer, char human);


int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY);

    instructions();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;

    displayBoard(board);
    while (winner(board) == NO_ONE)
    {
        if (turn == human)
        {
            move = humanMove(board, human);
            board[move] = human;
        }
        else
        {
            move = computerMove(board, computer);
			board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    announceWinner(winner(board), computer, human);
    
    return 0;
}

void instructions()
{
    cout << "Welcome to the ultimate man vs machine showdown: Tic-Tac-Toe.\n";
    cout << "Where the human brain is pit against a silicon processor..\n\n";
    cout << "Make your move known by entering a number, 0 - 8. The number\n";
    cout << "corresponds to the desired board position, as illustrated:\n\n";
    cout << " 0 | 1 | 2 \n";
    cout << " 3 | 4 | 5 \n";
    cout << " 6 | 7 | 8 \n\n";
    cout << "Prepare yourself human. The battle is about to begin.\n\n";

}

char askYesNo(string question)
{
    char response;
    do 
    {
        cout << question << " (y/n): ";
        cin >> response;
    } while (response != 'y' && response != 'n');
    return response;
}

int askNumber(string question, int high, int low)
{
    int number;
    do 
    {
        cout << question << " (" << low << " - " << high << "): ";
        cin >> number;
    } while (number > high || number < low);
    return number;
}

char humanPiece()
{
    char go_first = askYesNo("Do you wanna make the first move ?");
    if (go_first == 'y')
    {
        cout << "\nTake the first move, you will need it..\n";
        return X;
    }
    else
    {   
		cout << "\nYour bravery will be your undoing, i will make the first move..\n";
        return O;
    }
}

char opponent(char piece)
{
    if (piece == X)
    {
        return O;
    }
    else return X;

}

void displayBoard(const vector<char>& board)
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
	cout << "\n\t" << "---------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\n";
    
}

char winner(const vector<char>& board)
{
    // all possible winning rows
    const int WINNING_ROWS[8][3] = { {0,1,2},
                                     {3,4,5},
                                     {6,7,8},
                                     {0,3,6},
                                     {1,4,7},
                                     {2,5,8},
									 {0,4,8},
									 {2,4,6} };

    const int TOTAL_ROWS = 8;
    
    /* 
    if any winning row has three values that are the same (and not EMPTY) then we have a winner.
    
    for loop, is looping through each possible way a player can win to see whether either
    player has three in a row.*/ 
    for (int row = 0; row < TOTAL_ROWS; ++row)
    {
        if ( (board[WINNING_ROWS[row][0]] != EMPTY) && 
             (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
            (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]) )
        {
            return board[WINNING_ROWS[row][0]]; // returns the piece in the first position of this winning row.
        }
    }
    // since no one has one, check for a tie (no empty squares left)
    if (count(board.begin(), board.end(), EMPTY) == 0) // std::count() returns number of occurrences of an element in a given range.
    {
        return TIE;
    }  


    // since nobody has won and it isn't a tie, the game ain't over 
    return NO_ONE;
}

// checks if the move is legal = if there is an empty space in where the player want to put his piece
inline bool isLegal(int move, const vector<char>& board)
{
    return (board[move] == EMPTY);
}

int humanMove(const vector<char>& board, char human)
{
    int move = askNumber("Where will you move?", (board.size() - 1));
    while(!isLegal(move, board))
    {
        cout << "\nThat square is already occupied, foolish human.\n";
        move = askNumber("Where will you move?", (board.size() - 1));
    }
    cout << "Fine...\n";

    return move;
}

int computerMove(vector<char> board, char computer)
{
	unsigned int move = 0;
	bool found = false;

	//if computer can win on next move, that’s the move to make
	while (!found && move < board.size())
	{
		if (isLegal(move, board))
		{
			board[move] = computer;
			found = winner(board) == computer;
			board[move] = EMPTY;
		}
		if (!found)
		{
			++move;
	
		}
	}
    // otherwise if human can win on next move, thats the move to make - to block the human from winning
    if (!found)
    {
        move = 0;
        char human = opponent(computer);

        while (!found && move < board.size())
		{
			if (isLegal(move, board))
			{
				board[move] = human;
				found = winner(board) == human;
				board[move] = EMPTY;
			}
			if (!found)
			{
				++move;

			}
        }
    }
    // otherwise, moving to the best open square is the move to make
    if (!found)
    {
        move = 0;
        unsigned int i = 0;

        const int BEST_MOVES[] = { 4,0,2,6,8,1,3,5,7 };
        // pick the best open square
        while (!found && move < board.size())
        {
            move = BEST_MOVES[i];
            if (isLegal(move, board))
            {
                found = true;
            }
            ++i;
        }
    }

    cout << "I shall take square number " << move << "\n";
    return move;
}

void announceWinner(char winner, char computer, char human)
{
    if (winner == computer)
    {
        cout << winner << "'s Won!\n";
        cout << "HA HA HA HA HA, as i predicted you foolish human, i win! ." << "\n";
    } 
    else if (winner = human)
    {
		cout << winner << "'s Won!\n";
        cout << "It cannot be!, you tricked me human, but never again!\n";
    }
    else
    {
        cout << "It's a tie.\n";
        cout << "You are lucky human, you somehow managed to tie me... \n";
    }
}
