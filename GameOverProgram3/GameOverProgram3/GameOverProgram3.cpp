// Game Over 3.0
// demonstrates using declarations 
#include <iostream>

// Using Declarations 
/*
   As opposed to what we learned in Game Over 2.0, we can achieve the same results with declarations.
   We write two using declarations, to access them directly :
*/
using std::cout;
using std::endl;

/*
TIP: Is is known as a good practice to NOT use the using namespace, to try to avoid using the same name.
You should always prefix each and every element from a namespace with its identifier.
*/

int main()
{
    std::cout << "Hello World!" << endl;
    return 0;
}

