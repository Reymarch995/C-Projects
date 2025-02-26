// recursion = a programming technique where a function invokes itself
//             from within, breaking a complex concept into a repeatable
//             single step.

//             (iterative vs recursive)
// advantages = less clode and is cleaner
//              useful for sorting and searching algorithms
// disadvantages = uses more memory
//                 slower

#include <iostream>
void walk(int steps);
int factorial(int num);
int main(){

    //walk(100);

    std::cout << factorial(10);

    return 0;
}
void walk(int steps){
    /*for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n"; iterative approach
    }*/

   if(steps > 0){
    std::cout << "You take a step!\n"; //recursive approach
    walk(steps - 1);
   }
}
int factorial(int num){
    //int result = 1;
    //for(int i = 1; i <= num; i++){ //(iterative approach)
    //    result = result * i;
    //}

    if(num > 1){
        return num * factorial(num - 1); //recursive apporach
    }
    else{
        return 1;
    }

    //return result;
}

