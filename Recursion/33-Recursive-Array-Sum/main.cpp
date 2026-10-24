#include <iostream>

int sum_array(const int arr[], int n){
    if(n == 0){
        return 0;
    }

    return arr[n-1] + sum_array(arr, n-1);
}

int main() {
    int arr[] = {1,2,3,4,5};
    std::cout << sum_array(arr, 5) << "\n";
    return 0;
}