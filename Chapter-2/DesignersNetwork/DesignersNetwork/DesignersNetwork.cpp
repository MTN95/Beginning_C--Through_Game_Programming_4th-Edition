// DesignersNetwork
// Demonstrates logical operators 

#include <iostream>
#include <string>

using std::string;

int main()
{
	string username;
	string password;
	bool success;

	std::cout << "\tGame Designers Network\n";
	do
	{
		std::cout << "\nUsername: ";
		std::cin >> username;
	

		std::cout << "\nPassword: ";
		std::cin >> password;

		if (username == "John" && password == "123")
		{
			std::cout << "\nWelcome John";
			success = true;
		}
		else if (username == "Ron" && password == "123")
			{
				std::cout << "\nWelcome Ron";
				success = true;
			}
		else if (username == "Avi" && password == "123")
			{
				std::cout << "\nWelcome Avi";
				success = true;
			}
		// using redundant parentheses
		else if ((username == "Will") && (password == "123"))
		{
			std::cout << "\nWelcome Will";
			success = true;
		}
		else if (username == "guest" || password == "guest")
		{
			std::cout << "\nWelcome Guest";
			success = true;
		}
		else
		{
			std::cout << "Wrong Username/Password.";
			success = false;
		}
	} while (!success);
	return 0;
}
