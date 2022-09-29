// String Tester Program
// Demonstrates string objects

#include <iostream>
#include <string>

int main()
{
	
	std::string word1 = "Game";
	std::string word2 ("Over");
	std::string word3 (3, '!');

	std::string phrase = word1 + " " + word2 + word3;
	std::cout << "The phrase is: " << phrase << "\n\n";

	std::cout << "the phrase has: " << phrase.size() << " characters in it.\n\n";

	std::cout << "the character at position 0 is: " << phrase[0] << "\n\n";

	std::cout << "changing the character at position 0:\n";
	phrase[0] = 'L';
	std::cout << ".......\n";
	std::cout << "the phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		std::cout << "character at position " << i << " is: " << phrase[i] << std::endl;
	}

	std::cout << "the sequence 'Over' begins at location ";
	std::cout << phrase.find("Over") << std::endl;

	if (phrase.find("eggplant") == std::string::npos) 
	{
		std::cout << "'eggplant' is not in the phrase\n\n";
	}

	phrase.erase(4, 5);
	std::cout << "the phrase is now: " << phrase << "\n\n";

	phrase.erase(4);
	std::cout << "the phrase is now: " << phrase << "\n\n";

	phrase.erase();
	std::cout << "the phrase is now: " << phrase << "\n\n";

	if (phrase.empty())
	{
		std::cout << "the phrase is no more..\n";
	}
	return 0;
}
