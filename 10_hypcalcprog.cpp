#include <iostream>
#include <cmath>

int main(){

    double length;
    std::cout << "What is the length of triangle?";
    std::cin >> length;

    double breath;
    std::cout << "What is the breath of triangle?";
    std::cin >> breath;

    double length_sq = pow(length,2);
    double breath_sq = pow(breath,2);

    double c_sq = length_sq + breath_sq;
    double hypotenuse = sqrt(c_sq);

    std::cout << "The hypotenuse of triangle is " << hypotenuse << '\n';

    return 0;
}