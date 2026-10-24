#include <iostream>

bool arr_is_equal(int arr1[], int arr2[], int len1, int len2);

int main(){

    int arrA[] = {1, 2, 3};
    int arrB[] = {1, 2, 3};
    int arrC[] = {7, 8, 9};
    int arrD[] = {7, 8, 9, 10};

    std::cout << std::boolalpha;

    std::cout << arr_is_equal(arrA, arrB, 3, 3) << "\n";

    std::cout << arr_is_equal(arrA, arrC, 3, 3) << "\n";

    std::cout << arr_is_equal(arrC, arrD, 3, 4) << "\n";

    return 0;

}



bool arr_is_equal(int arr1[], int arr2[], int len1, int len2){

    if(len1 != len2){
        return false;
    }

    for(int i = 0; i < len1; i++ ){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}