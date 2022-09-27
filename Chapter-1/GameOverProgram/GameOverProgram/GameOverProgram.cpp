// Game Over 
// A First C++ Program

/*
*****Including Other Files*****
The next line in the program is a preprocessor directive. You know this
because the line begins with the # symbol.
*/
#include <iostream> // Header File - Including the IO Stream library. IO stands for Input-Output

// Defining The Main Function
/*
A function is a group of programming code that can do some work and return
a value. In this case, int indicates that the function will return an integer
value. All function headers have a pair of parentheses after the function name.

NOTE: 
All C++ programs must have a function called main(), which is the starting
point of the program. The real action begins here.

The next line marks the beginning of the function.
{
And the very last line of the program marks the end of the function.
}

All functions are delimited by a pair of curly braces, and everything between
them is part of the function. Code between two curly braces is called a block
and is usually indented to show that it forms a unit. The block of code that
makes up an entire function is called the body of the function.
*/


int main()
{
    /*
    "std" tells the compiler that i want to use "cout" from the standard library
    "std" is a namepace, namespace identifies the group to which something belongs

    "::" is the scope operator, we use it to prefix a namespace like "std"
    
    "cout" (read as See-Out) is used to display the output to the standard output device i.e. monitor.
    
    we use the output operator "<<" to send the string to cout.
    
    "Game Over!" is a string — a series of printable characters.
    is a string literal, meaning it’s literally the characters between the quotes.
    
    Finally, we use "endl", it is defined in iosteam and also is an object in the std namespace
    Sending endl to the standard output acts like pressing the Enter key in the console window. 
    In fact, if I were to send another string to the console window, it would appear on the
    next line.
    ";" tells the compiler that the statement ends here
    */
    std::cout << "Game Over !" << std::endl; 

    int x;
    std::cin >> x;

    // Type of the value returned by a function.
    return 0;
}

