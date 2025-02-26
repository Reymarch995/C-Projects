// fill() = fills a range of elements with a specified value
//          fill(begin, end, value)

#include <iostream>

int main(){

    const int size = 100;
    std::string foods[size];
    fill(foods,foods + size, "pizza");

    for(std::string food : foods){
        std::cout << food << '\n';
    }


    return 0;
}