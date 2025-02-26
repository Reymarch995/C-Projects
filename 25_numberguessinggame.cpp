#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "*** GUESS THE NUMBER ***" << '\n';

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        }    
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "CORRECT!\n";
            std::cout << "You tried " << (tries - 1) << " times!\n";
        }

    }while(guess != num);

    std::cout << "*** GUESS THE NUMBER ***" << '\n';
    return 0;
}