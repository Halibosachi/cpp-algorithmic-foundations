/*
Implement a function that returns true if the binary array is symmetric in such a way that all 1s appear consecutively in the center and 0s occupy both edges. Assume that the length is at least 3.
*/

#include <iostream>

bool is_center_sym(int arr[], int n){
    int n_zero = 0;
    while (n_zero < n && arr[n_zero] == 0)
    {
        n_zero++;
    }

    if(n_zero == 0 || n_zero == n){
        return false;
    }

    for(int i = 0; i < n_zero; i++){
        if(arr[n-i-1] != 0){
            return false;
        }
    }
    
    for(int i = n_zero; i < n - n_zero; i++){
        if(arr[i] != 1){
            return false;
        }
    }

    return true;
    
}

int main() {
    int arrA[] = {0, 0, 1, 1, 0, 0};
    int arrB[] = {0, 1, 1, 1, 0};
    int arrC[] = {0, 0, 1, 0};
    int arrD[] = {1, 0, 0, 0, 1};
    int arrE[] = {0, 1, 0, 1, 0};

    std::cout << is_center_sym(arrA, 6) << "\n";
    std::cout << is_center_sym(arrB, 5) << "\n";
    std::cout << is_center_sym(arrC, 4) << "\n";
    std::cout << is_center_sym(arrD, 5) << "\n";
    std::cout << is_center_sym(arrE, 5) << "\n";
    
    return 0;
}