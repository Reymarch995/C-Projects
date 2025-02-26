#include <iostream>

int main(){
    /* memory address = a location in memory where data is stored
     a memory adress can be accessed with & (address of operator)*/

    std::string name = "Rayhan";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &name << '\n';
    std::cout << &name << '\n';


    return 0;
}