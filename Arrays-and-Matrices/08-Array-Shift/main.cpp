#include <iostream>

void arr_shift(int arr[], int len);

int main() {
    int myArr[] = {1, 3, 5, 7, 9};
    int length = sizeof(myArr) / sizeof(myArr[0]);
    arr_shift(myArr, length);
    for (int i = 0; i < length; i++)
    {
        std::cout<<myArr[i]<<" ";
    }
    
    return 0;
}

void arr_shift(int arr[], int len){
    int temp = arr[0];
    for(int i = 0; i < len - 1; i++){
        int next = arr[i+1];
        arr[i+1] = temp;
        temp = next;
    }
    arr[0] = temp;
}