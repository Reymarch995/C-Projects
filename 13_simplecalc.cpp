#include <iostream>
#include <cmath>

int main(){

    int op;
    double a;
    double b;
    double c;

    std::cout << "What operation? (1+,2-,3*,4/): ";
    std::cin >> op;
    std::cout << "First number:";
    std::cin >> a;
    std::cout << "Second number:";
    std::cin >> b;

if(op>4){
    std::cout << "Enter a valid operation!";
}
else if(op<1){
    std::cout << "Enter a valid operation!";
}
else

switch(op){
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
}

std::cout << c;

    return 0;
}