#include <iostream>

int main(){

    int num;
    std::string month;
    std::cout << "Enter month: ";
    std::cin >> num;

    switch(num){
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;
        case 3:
            month = "March";
            break;
        // Add more cases for other months
        default:
            month = "Invalid month";
            break;
    }

    std::cout << "Month: " << month << '\n';

    return 0;
}