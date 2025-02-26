// dynamic memory = Memory that is allocated after the program is already compiled and
//                  running. Use the 'new' operator to allocate memory in the heap
//                  rather than the stack
//
//                  Useful when we dont know how much memory we will need. Makes our
//                  programs more flexible, especially when accepting user input.

#include <iostream>

int main(){

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in?: \n";
    std::cin >> size;
    pGrades = new char[size];
    for(int i = 0; i < size; i++){
        std::cout <<"Enter grade #: " << i + 1 << ": \n";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < 0; i++){
        std::cout << pGrades[i] << " ";
    }

    return 0;
}