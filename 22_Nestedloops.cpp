#include <iostream>

int main(){

    int rows;
    int columns;

    std::cout << "How many rows: ";
    std::cin >> rows;
    std::cout << "How many columns: ";
    std::cin >> columns;

    for(int i = 0; i<=(rows-1); i++){
        for(int j = 0; j<=(columns-1);j++){
            std::cout << "X";
        };
        std::cout << '\n';
    };

    return 0;
}