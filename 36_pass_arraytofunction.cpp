/*#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);


    std::cout << "$" << total;
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size;i++){
        total += prices[i];
    }

    return total;
}*/

#include <iostream>

double CalcTotalArr(double cheque[], int size);

int main(){

    double cheque[] = {16.00,4.50,17.50,3.40};
    int size;

    size = sizeof(cheque)/sizeof(cheque[0]);
    double total = CalcTotalArr(cheque, size);

    std::cout << "$" << total;

    return 0;
}

double CalcTotalArr(double cheque[], int size){

    double total;

    for(int i=0;i < size;i++){
        total += cheque[i];
    }
    return total;
}