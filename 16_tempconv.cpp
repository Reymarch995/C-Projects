#include <iostream>
#include <cmath>
//temp conv program from Celsius to Farenheit and vice versa
int main(){

    char CtF;
    double celsius;
    double farenheit;
    std::cout << "Would you like to convert from Celsius to Farenheit, or the other way around? Y/N: ";
    std::cin >> CtF;

    switch(CtF){
        case 'Y':
            std::cout << "What is temperature in Celsius: ";
            std::cin >> celsius;
            farenheit = ((celsius*1.8)+32);
            std::cout << "The temperature is " << farenheit << "F";
            break;
        case 'N':
            std::cout << "What is temperature in Farenheit: ";
            std::cin >> farenheit;
            celsius = ((farenheit -32)*(5/9));
            std::cout << "The temperature is " << celsius << "C";
            break;
    }
    return 0;
}
