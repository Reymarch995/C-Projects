#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock Paper Scissors Game!\n";
    

    do{
    std::cout << "** ******************* **\n";
    std::cout << "** **R for Rock******* **\n";
    std::cout << "** **P for Paper****** **\n";
    std::cout << "** **S for Scissors*** **\n";
    std::cout << "** ******************* **\n";
    std::cout << "Rock Paper Scissors Game!\n";
    std::cout << "What is your choice: \n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char player){

    switch(player){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player,char computer){

    switch(player){
        case 'r':
            if(computer == 'r'){
                std::cout << "Its a tie!\n";
                break;
            }
            else if(computer == 'p'){
                std::cout << "You lose!\n";
                break;
            }
            else{
                std::cout << "You win!\n";
                break;
            }
        case 'p':
            if(computer == 'p'){
                std::cout << "Its a tie!\n";
                break;
            }
            else if(computer == 's'){
                std::cout << "You lose!\n";
                break;
            }
            else{
                std::cout << "You win!\n";
                break;
            }
        case 's':
            if(computer == 's'){
                std::cout << "Its a tie!\n";
                break;
            }
            else if(computer == 'r'){
                std::cout << "You lose!\n";
                break;
            }
            else{
                std::cout << "You win!\n";
                break;
            }
    }
}