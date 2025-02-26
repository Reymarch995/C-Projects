#include <iostream>

int main(){

    std::string name;
    std::cout << "Whats your full name?" << '\n';
    std::getline(std::cin >> std::ws , name);
    std::cout << "Hello " << name << '\n';

    int age;
    std::cout << "Whats your age?";
    std::cin >> age;
    std::cout << "You are " << age << " years old!";

    return 0;
}