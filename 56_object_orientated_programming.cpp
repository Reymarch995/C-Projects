// object = A collection of attributes and methods
//          they can have characteristics and could perform actions (methods)
//          can be used to mimic real world items (e.g. Phone, book etc.)
//          created from a class which acts as a "blueprint"

#include <iostream>

class Human{
    public:
        std::string name = "Rick";
        std::string occupation = "scientist";
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }

        void drink(){
            std::cout << "This person is drinking";
        }
};

int main(){

    Human human1;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.name << '\n';
    std::cout << human1.name << '\n';

    human1.eat();
    human1.drink();

    return 0;
}