/*#include <iostream>

int searchArray(int array[], int size, int element);

int main(){

    int foods[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    int myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myFood;

    index = searchArray(foods,size,myFood);

    if(index != -1){
        std::cout << myFood << " is at index " << index << '\n';
    }
    else{
        std::cout << myFood << " cannot be found in this array\n";
    }

    return 0;
}

int searchArray(int array[], int size, int element){

    for(int i=0;i<size;i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}*/

#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main(){

    std::string foods[] = {"pizza","hamburger","hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myFood;

    index = searchArray(foods,size,myFood);

    if(index != -1){
        std::cout << myFood << " is at index " << index << '\n';
    }
    else{
        std::cout << myFood << " cannot be found in this array\n";
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element){

    for(int i=0;i<size;i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}