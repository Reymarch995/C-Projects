#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to sus!";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    return 0;
}