/*
Write a function that moves all zeros in the array to the end while maintaining the relative order of other elements
*/

#include <iostream>

void arr_move_zeros(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }

    for(int i = count; i < n; i++){
        arr[i] = 0;
    }

}

int main() {
    int myArr[] = {0, 1, 0, 3, 5};
    int arrB[] = {1, 0, 0, 0, 2, 3, 0, 0, 0, 4, 5, 6, 7 ,8 ,9 ,10};
    arr_move_zeros(myArr, 5);
    arr_move_zeros(arrB, 16);

    for(int i = 0; i < 5; i++){
        std::cout << myArr[i] << " ";
    }
    std::cout << "\n";

    for(int i = 0; i < 16; i++){
        std::cout << arrB[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}