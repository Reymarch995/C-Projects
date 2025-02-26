#include <iostream>

void sort(int array[], int size);

int main(){
    
    std::cout << "***** Sorting Program! ******\n";

    int array[] = {6,3,1,2,7,4,9,8,5};
    int size = sizeof(array)/sizeof(array[0]);
    int temp;
   
    sort(array, size);

    std::cout << "Sorting has finished!\n";
    for(int i=0;i<size;i++){
        std::cout << array[i] << '\n';
    }

    

    std::cout << "***** Sorting Program! ******\n";

    return 0;
}

void sort(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j =0; j < size - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}