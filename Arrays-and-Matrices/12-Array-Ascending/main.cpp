#include <iostream>

bool arr_is_increasing(int arr[], int n);

int main() {

    int arrA[] = {1, 3, 4, 6};
    int arrB[] = {5, 7, 4, 11};

    std::cout<<std::boolalpha;

    std::cout<< arr_is_increasing(arrA, 4)<< "\n";
    std::cout<< arr_is_increasing(arrB, 4)<< "\n";


    return 0;
}


bool arr_is_increasing(int arr[], int n){

    for(int i = 0; i < n - 1; i++){

        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}