#include <iostream>
#include <string>

namespace first{
    int x =1;
}

namespace second{
    int x = 2;
}

//int main(){

//int x = 0;
//std::cout << second::x;

//return 0;
//}

int main(){
    
    using std::string;
    using std::cout;

    string name = "Bro";

    cout << "Hello " << name;
    return 0;
}