// #include <iostream>

// /*we have to tell the compiler that a function
// named happyBirthday exists but will be defined later*/

// void happyBirthday(std::string name, int age);

// int main(){

//     std::string name = "Rayhan";
//     int age = 21;


//     happyBirthday(name, age);

//     return 0;
// }

// /* it is common practice to declare functions afterwards*/
// void happyBirthday(std::string name, int age){
//     using namespace std;

//     cout << "Happy Birthday to " << name <<"!\n";
//     cout << "Happy Birthday to " << name <<"!\n";
//     cout << "Happy Birthday dear " << name <<"!\n";
//     cout << "Happy Birthday to " << name <<"!\n";
//     cout << "You are " << age << " years old!";

// }

#include <iostream>

std::string concatStrings(std::string FirstName, std::string LastName);

int main(){
    std::string FirstName = "Ray";
    std::string LastName = "Han";

    std::cout << concatStrings(FirstName, LastName);

    return 0;
}

std::string concatStrings(std::string FirstName, std::string LastName){
    std::string FullName = FirstName + " " + LastName;
    return FullName;
}