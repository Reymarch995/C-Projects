// overloaded contructors = multiple constructors w/ same name but different parameters
//                          allowing for varying arguments when instantiating an object

#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping1 = topping2;
    }
    Pizza(){}
};

int main(){

    Pizza pizza1("pepporoni");
    Pizza pizza2("mushroom","peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << '\n';


    return 0;
}