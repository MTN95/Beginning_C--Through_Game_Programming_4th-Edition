// Lost Fortune Game
// A Personalized Adventure 

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	// get the information
	cout << "Welcome to the Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a Number: "; 
	cin >> adventurers;

	cout << "Enter a Smaller Number: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	// tell the story
	cout << "\nA brave group of " << adventurers << " adventurers set out on a quest ";
	cout << ".. in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue leader - " << leader << '\n';
	cout << "\nAlong the way, a band of ogres ambushed the party. ";
	cout << "\nAll fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers - " << killed << " were killed, ";
	cout << "Leaving just - " << survivors << " in the group." << '\n';
	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "They Stumble upon the buried fortune. ";
	cout << "\nSo the adventurers split the " << GOLD_PIECES << " Gold Pieces.";
	cout << leader << " held on the extra Gold Pieces that was left " << (GOLD_PIECES % survivors);

	return 0;
}
