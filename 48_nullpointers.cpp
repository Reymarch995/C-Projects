
    /* Null Value = a special value that means something has no value.
       When a pointer is holding a null value, that pointer is not
       pointing to anything (null pointer)
       
       nullprt = a keyword representing a null pointer literal
       
       nullptrs are helpful when determining if an address was
       successfully assigned to a pointe
       
       when using pointers, be careful that your code isnt
       dereferencing nullptr or pointing to free memory
       this will cause undefeined behaviour */

#include <iostream>

int main(){

    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    *pointer;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was not assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}