// Scoping Program
// Demonstrates scoping

#include <iostream>

void func();

int main()
{
	int var = 5;
	std::cout << "In main() var is: " << var << "\n\n";

	func();

	std::cout << "Back in main() var is: " << var << "\n\n";

	{
		std::cout << "In main() in a new scope var is: " << var << "\n";
		std::cout << "Creating new var in new scope. \n";
		
		int var = 10;
		std::cout << "In main() in a new scope var is: " << var << "\n";
	}
	std::cout << "at end of main() var created in new scope var no longer exists, var is: " << var << "\n";

	return 0;
}

void func()
{
	int var = -5;
	std::cout << "In func(), var is: " << var << "\n\n";

}
