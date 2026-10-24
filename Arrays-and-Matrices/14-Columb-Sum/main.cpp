#include <iostream>

void col_sum(int arr[][3], int n_rows, int sum[]);

int main() {

    int arrT[][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int arrR[3];

    col_sum(arrT, 3, arrR);

    
    for(int i = 0; i < 3; i++){

        std::cout << arrR[i] << "\t";

    }

    return 0;

}



void col_sum(int arr[][3], int n_rows, int sum[]){

    for(int i = 0 ; i < 3; i++){

        int s = 0;

        for(int j = 0; j < n_rows; j++){

            s += arr[j][i];

        }

        sum[i] = s;

    }

}