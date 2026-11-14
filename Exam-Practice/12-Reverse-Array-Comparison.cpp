#include <iostream>
using namespace std;

bool are_reverse(const int arr1[], const int arr2[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[n-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {4, 3, 2, 1};

    int c[] = {5, 7, 9};
    int d[] = {9, 7, 5};

    int e[] = {1, 2, 3};
    int f[] = {1, 2, 3};

    int g[] = {6, 6, 6};
    int h[] = {6, 6, 6};

    cout << boolalpha;

    cout << are_reverse(a, b, 4) << '\n';
    cout << are_reverse(c, d, 3) << '\n';
    cout << are_reverse(e, f, 3) << '\n';
    cout << are_reverse(g, h, 3) << '\n';

    return 0;
}
