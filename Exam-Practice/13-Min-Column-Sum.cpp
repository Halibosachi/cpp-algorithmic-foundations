#include <iostream>
using namespace std;

int min_column_sum(const int arr[][4], int rows) {
    int index = 0;
    int min_sum;
    for(int i = 0; i < 4; i++) {
        int temp_sum = 0;
        for(int j = 0; j < rows; j++) {
            temp_sum += arr[j][i];
        }
        if(i == 0)  min_sum = temp_sum;
        if(temp_sum < min_sum) {
            min_sum = temp_sum;
            index = i;
        }
    }
    return index;
}

int main() {
    int a[][4] = {
        {3, 8, 2, 5},
        {4, 1, 6, 3},
        {7, 2, 1, 4}
    };

    int b[][4] = {
        {5, 2, 4, 1},
        {3, 6, 2, 7}
    };

    int c[][4] = {
        {-2, -5, 3, 1},
        {-4, -1, 2, 0}
    };

    int d[][4] = {
        {3, 3, 5, 8},
        {2, 2, 1, 4}
    };

    cout << min_column_sum(a, 3) << '\n';
    cout << min_column_sum(b, 2) << '\n';
    cout << min_column_sum(c, 2) << '\n';
    cout << min_column_sum(d, 2) << '\n';

    return 0;
}
