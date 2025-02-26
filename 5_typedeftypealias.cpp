#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    number_t age = 7;
    text_t firstName = "Rayhan";
    std::cout << firstName << '\n';
    std::cout << age << '\n';
    
    return 0;
}