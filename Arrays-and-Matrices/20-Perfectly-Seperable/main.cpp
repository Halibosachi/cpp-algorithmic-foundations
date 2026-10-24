/*
Given a binary array, determine whether zeros and ones are perfectly separable.
That is, for example, {1, 1, 1, 1, 1} and {1, 1, 0, 0, 0} are perfectly separable, but {1, 1, 0, 1, 1} is not.
*/


#include <iostream>

bool is_separable(bool arr[], int n){
    bool first = arr[0];
    int i = 1;
    while(i < n && arr[i] == first){
        i++;
    }

    bool other = 1 - first;

    while(i < n && arr[i] == other){
        i++;
    }

    if(i == n){
        return true;
    } else {
        return false;
    }
}

int main() {
    bool arrA[] = {1, 1, 1, 1, 1};
    bool arrB[] = {0, 0, 0, 0, 1};
    bool arrC[] = {1, 1, 0, 1, 1};
    bool arrD[] = {1, 1, 0, 0, 0};
    bool arrE[] = {0, 1, 1, 1, 0};

    std::cout << is_separable(arrA, 5) << "\n";
    std::cout << is_separable(arrB, 5) << "\n";
    std::cout << is_separable(arrC, 5) << "\n";
    std::cout << is_separable(arrD, 5) << "\n";
    std::cout << is_separable(arrE, 5) << "\n";
    
    return 0;
}