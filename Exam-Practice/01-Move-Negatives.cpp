#include <iostream>
#include <vector>
using namespace std;

void move_negatives(int arr[], int n) {
    int index = 0;
    vector<int> copyArr(n);
    for(int i = 0; i < n; i++){
        if(arr[i] < 0) {
            copyArr[index] = arr[i];
            index++;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0) {
            copyArr[index] = arr[i];
            index++;
        }
    }

    for(int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }
    
}


int main() {
    int arr[] = {4, -2, 7, -5, 0, -1, 8};
    move_negatives(arr, sizeof(arr)/sizeof(int));
    for(size_t i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}