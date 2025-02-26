#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a: variable
    //            data type, class, objects, etc.


    double gpa = 2.5; // 8 bytes
    std::string name = "Coding in C++ is very fun!\n"; // 32 bytes
    char grade = 'F'; // 1 byte
    bool student = true; // 1 byte
    char grades[] = {'A','B','C','D','E','F'};
    std::string students[] = {"Spongebob","Patrick","Squidward","Sandy"};

    std::cout << sizeof(name) << " bytes\n";

    return 0;
}