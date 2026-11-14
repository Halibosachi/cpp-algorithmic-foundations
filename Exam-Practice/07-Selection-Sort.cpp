#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
