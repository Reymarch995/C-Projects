#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()){
        std::cout << "You didnt enter your name";
  
    }
    else{
        std::cout << "Welcome " << name << "!";
    }

    if(name.length() > 12){
        std::cout << "Your name cant be more than 12 characters long";
    }
    else{
        std::cout << "Welcome " << name << "!";
        name.append("@gmail.com");
        std::cout << "Your username is now " << name;
    }
    return 0;

    //name.clear to remove any stored values in variable
    //name.at to check what letter is in given position, starting from 0
    //name.insert(where to replace, "what to replace it with")
    //name.find("what char to find") and displays it as an int
    //name.erase(beginning index,ending index) i.e name=BroCode and name.erase(0,3), new name is Code
}