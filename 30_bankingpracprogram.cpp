#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);



int main(){

    double balance = 123.01;
    int choice = 0;

    using namespace std;

    do{
    cout << "$$$$$ RAY BANK $$$$$\n";
    cout << "Enter your choice:\n";
    cout << "$$$$$ RAY BANK $$$$$\n";
    cout << "$$$$$ 1.  Show Balance  $ 1 $\n";
    cout << "$$$$$ 2.  Deposit Money $ 2 $\n";
    cout << "$$$$$ 3. Withdraw Money $ 3 $\n";
    cout << "$$$$$ 4.     Exit       $ 4 $\n";
    cout << "$$$$$ RAY BANK $$$$$\n";
    cin >> choice;

    switch(choice){
        case 1: showBalance(balance);
            break;
        case 2: balance += deposit();
            showBalance(balance);
            break;
        case 3: balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4: cout << "Thaks for visiting!\n";
            break;
        default:cout << "Invalid choice\n";
    }

    std::cin.clear();
    fflush(stdin);

    }while(choice != 4);
    
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    using namespace std;
    double amount;
    cout << "Enter amount to deposit: \n";
    cin >> amount;
    return amount;
}
double withdraw(double balance){
    using namespace std;
    double amount;
    cout << "Enter amount to withdraw: \n";
    cin >> amount;
    if(amount > balance) {
        cout << "Insufficient funds.\n";
        return balance;
    }
    return balance - amount;
}