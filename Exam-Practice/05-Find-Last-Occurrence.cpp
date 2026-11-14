#include <iostream>
using namespace std;

int find_last(int arr[], int n, int target) {
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i;
        }
    }
    return index;
}

int main() {
    int arr[] = {4, 7, 2, 7, 9, 7};

    cout << find_last(arr, 6, 7) << "\n";

    return 0;
}