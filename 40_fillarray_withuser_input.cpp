#include<iostream>

int main(){

    std::string temp;

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size;i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i << ": \n";
        std::getline(std::cin, foods[i]);
        if(foods[i] == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods << '\n';
    }

    return 0;
}