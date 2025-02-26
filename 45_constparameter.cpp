#include <iostream>

void printInfo(std::string name,int age);

int main(){

    std::string name = "Ray";
    int age = 21;

    /* const parameter = a parameter that is effectively read-only code, 
                         is more secure & conveys intent and is useful
                         for references and pointers*/

    return 0;
} 

void printInfo(const std::string &name,const int &age){

    std::cout << name << '\n';
    std::cout << age << '\n';

}