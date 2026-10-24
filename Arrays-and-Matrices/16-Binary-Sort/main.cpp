/*
Given a binary array of integers(values either 1 or 0) sort the array
*/

#include <iostream>

void arr_bin_sor(int arr[], int n){
    int n_zeros = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] == 0){
            n_zeros++;
        }
    }

    for(int i = 0; i < n_zeros; i++){
        arr[i] = 0;
    }

    for(int i = n_zeros; i < n; i++){
        arr[i] = 1;
    }
}

int main() {
    int myArr[] = {0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1};
    arr_bin_sor(myArr, 12);

    for(int i = 0; i < 12; i++){
        std::cout << myArr[i] << " " ;
    }
    
    return 0;
}