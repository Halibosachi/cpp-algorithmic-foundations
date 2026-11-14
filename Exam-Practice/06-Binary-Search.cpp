#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target) {
    int l = 0;
    int r = n - 1;
    while(l <= r) {
        int m = l + (r-l) / 2;
        if (arr[m] == target) return m;
        if (arr[m] < target) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38};

    cout << binary_search(arr, 7, 16) << '\n';
    cout << binary_search(arr, 7, 5) << '\n';
    cout << binary_search(arr, 7, 10) << '\n';

    return 0;
}
