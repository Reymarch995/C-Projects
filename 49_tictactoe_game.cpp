#include <iostream>
#include <cstdlib>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    while(running) {
        drawBoard(spaces);
        playerMove(spaces, player);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        if(checkTie(spaces)){
            running = false;
            break;
        }
        computerMove(spaces, computer);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        if(checkTie(spaces)){
            running = false;
            break;
        }
    }

    std::cout << "Thanks for playing!"; // Fixed missing semicolon
    return 0;
}

void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] <<"  \n";
    std::cout << "     |     |     \n";
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(number >= 0 && number < 9 && spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(true);
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {
    // Check rows
    for(int i = 0; i < 9; i += 3) {
        if(spaces[i] == spaces[i+1] && spaces[i+1] == spaces[i+2] && spaces[i] != ' ') {
            return true;
        }
    }
    // Check columns
    for(int i = 0; i < 3; i++) {
        if(spaces[i] == spaces[i+3] && spaces[i+3] == spaces[i+6] && spaces[i] != ' ') {
            return true;
        }
    }
    // Check diagonals
    if(spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' ') {
        return true;
    }
    if(spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] != ' ') {
        return true;
    }
    return false;
}

bool checkTie(char *spaces) {
    for(int i = 0; i < 9; i++) {
        if(spaces[i] == ' ') {
            return false;
        }
    }
    return true;
}