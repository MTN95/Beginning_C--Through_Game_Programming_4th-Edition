// Taking Damage Program
// Demonstrates function inlining 
#include <iostream>

int radiation(int health);

int main()
{
    int health = 80;
    std::cout << "You Health is: " << health << "\n";
    
    health = radiation(health);
    std::cout << "\nAfter exposure to radiation you health is: " << health << "\n\n";
    
    health = radiation(health);
    std::cout << "\nAfter exposure to radiation you health is: " << health << "\n\n";
    
    health = radiation(health);
    std::cout << "\nAfter exposure to radiation you health is: " << health << "\n\n";

    return 0;
}

inline int radiation(int health)
{
    return (health / 2);
}
 
