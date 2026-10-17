#include <iostream>

bool is_arr_constant(int arr[], int n);

int main() {

    int arrA[] = {1, 1, 1, 1};
    int arrB[] = {1, 1, 1, 4};

    std::cout<< std::boolalpha;


    std::cout << is_arr_constant(arrA, 4) << "\n";
    std::cout << is_arr_constant(arrB, 4) << "\n";
    

    return 0;

}


bool is_arr_constant(int arr[], int n){

    int c = arr[0];

    for(int i = 1; i < n; i++){

        if(arr[i] != c){

            return false;

        }

    }

    return true;

}