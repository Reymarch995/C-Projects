#include <iostream>

/* functions can have the same names but have
to accept different parameters. A functions name and its parameters
are called signature functions*/

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("pepporoni","mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}