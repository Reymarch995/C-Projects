#include <iostream>

void swap(std::string x, std::string y);

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

        swap(x, y);

    std::cout << "X: " <<x << '\n';
    std::cout << "Y: " <<y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y){
// we need to use '&' ^ to reference a memory address, as normamlly without this'll create a copy
// of the original x and y, which wouldnt work in this case
    std::string temp;
    
    temp = x;
    x = y;
    y = temp;

}