   /* pointers = variable that stores a memory address of another variable
   where sometimes its easier tow ork with an address
   
   & = address-of operator
   * = dereference operator */

#include <iostream>

int main(){

    std::string name = "Rayhan";
    int age = 21;
    std::string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};

    std::string *pName = &name; //common naming convention to use p in front of *
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n'; // outputs first element in array

}