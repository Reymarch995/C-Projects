#include <iostream>

int myNum = 3;

void printNum();

int main(){

    int myNum = 1;

    printNum();
    std::cout << myNum;
    std::cout << ::myNum;

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum;
}