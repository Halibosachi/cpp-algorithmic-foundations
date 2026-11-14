#include <iostream>
using namespace std;

int remove_consecutive_duplicates(int arr[], int n) {
    int check = arr[0];
    int index = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != check) {
            check = arr[i];
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = remove_consecutive_duplicates(arr, n);

    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
