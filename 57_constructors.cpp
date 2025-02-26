// constructor = special method that is automatically called when an object is instantiated
//               useful for assigning values to attributes as arguements

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

#include <iostream>

int main(){

    Student student1{"Spongebob", 25, 3.2};
    Student student2{"Patrick", 40, 1.5};

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    return 0;
}