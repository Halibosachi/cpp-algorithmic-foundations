#include <iostream>
using namespace std;

int second_largest(int arr[], int n) {    
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    bool found = false;
    int secondMax = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < max && (!found || arr[i] > secondMax)) {
            secondMax = arr[i];
            found = true;
        }
    }
    if(found) return secondMax;
    else return -1;
    
}

int main() {
    int a[] = {10, 10, 8, 6, 8};   // 8
    int b[] = {-4, -9, -2, -7};    // -4
    int c[] = {5, 5, 5};           // -1

    cout << second_largest(a, 5) << '\n';
    cout << second_largest(b, 4) << '\n';
    cout << second_largest(c, 3) << '\n';

    return 0;
}
  