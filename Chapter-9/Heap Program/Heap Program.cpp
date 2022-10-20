// Heap Program
// Demonstrates dynamically allocating memory 

#include <iostream>

using namespace std;


int* intOnHeap(); // returns an int on the heap
void leak1(); // creates a memory leak 
void leak2(); // creates another memory leak
 


int main()
{
	/*The new int part of the statement allocates enough memory on the heap for
    one int and returns the address on the heap for that chunk of memory. */
    
    int* pHeap = new int;
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n";

    int* pHeap2 = intOnHeap();
    cout << "*pHeap2: " << *pHeap2 << "\n\n";

    cout << "Freeing memory pointed to by pHeap.\n\n";
    delete pHeap;

    cout << "Freeing memory pointed to by pHeap2.\n\n";
    delete pHeap2;

    // getting rid of dangling pointers 
	/* "delete" do not directly affect the local variables
    pHeap and pHeap2. so we need to assign 0 to them. 
    so they don't point to some random memory location
    or to assign a valid memory address to it.
    */
    pHeap = 0;
    pHeap2 = 0;

    return 0;
}

/* 
allocates a chunk of
memory on the heap for an int and assigns 20 to it.
the function returns a pointer to this chunk of memory.
*/
int* intOnHeap()
{
    int* Temp = new int(20);
    return Temp;
}

void leak1()
{
    int* drip = new int(30);
}

void leak2()
{
	int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
}
