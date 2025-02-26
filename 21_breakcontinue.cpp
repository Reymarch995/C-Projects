#include <iostream>

int main(){

    for(int i = 1; i<=20;i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }

    // break = break out of a loop
    // continue = skip current iteration

    return 0;
}