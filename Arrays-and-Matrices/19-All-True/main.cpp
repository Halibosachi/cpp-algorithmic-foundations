/*
Given a binary array, find whether all elements are true.
Do not use any conditionals and use only one loop.
*/

#include <iostream>


bool is_all_true(bool arr[], int n){
    int n_trues = 0;
    for(int i = 0; i < n; i++){
        n_trues += arr[i];
    }
    return n_trues / n;
}

int main() {

    bool arrA[] = {1, 1, 1, 1, 1};
    bool arrB[] = {1, 0, 1, 1, 0};
    bool arrC[] = {1, 1, 1, 1, 0};

    std::cout << is_all_true(arrA, 5) << "\n";
    std::cout << is_all_true(arrB, 5) << "\n";
    std::cout << is_all_true(arrC, 5) << "\n";
    
    return 0;
}