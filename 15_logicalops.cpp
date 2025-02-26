#include <iostream>

int main(){

    int temp;
    bool sunny =1;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    //if(temp > 0 && temp < 30){
        //std::cout << "The temperature is good!";
    //}
    //else{
        //std::cout << "The temperature is bad!";
    //}
    //return 0;

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!";
    }
else{
    std::cout << "The temperature is good!";
}
    if(!sunny){ //prefix ! to reverse logical state, if condition is true this will output false
        std::cout << "Its sunny outside!";
    }
    else{
        std::cout << "Its cloudy outside!";
    }
    return 0;
}