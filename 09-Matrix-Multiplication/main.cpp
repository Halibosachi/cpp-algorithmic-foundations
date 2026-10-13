#include <iostream>

void mat_mult(int m[3][3], int n[3][3], int result [3][3]);

int main() {
    int matrix1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int matrix2[3][3] = { {1, 0, 0}, {0 , 1, 0}, {0, 0, 1} };
    int result[3][3];
    mat_mult(matrix1, matrix2 , result);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << result[i][j] << " ";
        }
       std::cout<<"\n";
    }
    
    return 0;
}


void mat_mult(int m[3][3], int n[3][3], int result [3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int sum = 0;
            for(int k = 0; k < 3; k++){
                sum += m[i][k] * n[k][j];
            }
            result[i][j] = sum;
        }
    }
}