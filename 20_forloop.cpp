#include <iostream>

int main()
{
    int i = 10; // Added semicolon

    for(int i = 10; i >= 0; i-=2){ // Corrected loop condition
        std::cout << i << '\n';
    }

    std::cout << "HAPPY NEW YEAR!" << '\n'; // Removed the variable i from the output
    return 0;
}