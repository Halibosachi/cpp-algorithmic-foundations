/*
Write a recursive function to check if an array is sorted in ascending order.
*/
#include <iostream>

bool is_sorted(const int arr[], int n){
    if(n == 1){
        return true;
    }

    if(arr[n-1] < arr[n-2]){
        return false;
       
    } 
        
    return is_sorted(arr, n-1);
    
}

int main() {
    int arrA[] = {1, 2, 3, 4, 5};
    int arrB[] = {1, 2, 3, 5, 4};
    int arrC[] = {5, 4, 3, 2, 1};
    int arrD[] = {1, 2, 2, 4, 5};

    std::cout << std::boolalpha;
    std::cout << is_sorted(arrA, 5) << "\n";
    std::cout << is_sorted(arrB, 5) << "\n";
    std::cout << is_sorted(arrC, 5) << "\n";
    std::cout << is_sorted(arrD, 5) << "\n";

    return 0;
}