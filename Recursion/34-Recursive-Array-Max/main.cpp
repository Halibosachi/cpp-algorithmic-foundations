/*
Write a recursive function to find the maximum element in an array.
*/
#include <iostream>
#include <algorithm>

int max_array(const int arr[], int n){
    if(n == 1){
        return arr[n-1];
    }

    return std::max(arr[n-1], max_array(arr, n-1));


}

int main() {
    int arr[] = {5, 6, 3, 3, 8, 11, 4, 2, 3, 0};
    std::cout << max_array(arr, 10) << "\n";
    return 0;
}