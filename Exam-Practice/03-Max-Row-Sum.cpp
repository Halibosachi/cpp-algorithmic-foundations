#include <iostream>
using namespace std;

int max_row_sum(int arr[][4], int rows) {
    int max_sum = 0;
    int index = 0;

    for (int j = 0; j < 4; j++) {
    max_sum += arr[0][j];
    }

    for(int i = 1; i < rows; i++){
        int temp_sum = 0;
        for(int j = 0; j < 4; j++){
            temp_sum += arr[i][j];
        }
        if(temp_sum > max_sum){
            max_sum = temp_sum;
            index = i;
        }
    }
    return index;
}

int main() {
    int arr[][4] =  {
                    {3,5,2,1},
                    {8,1,4,2},
                    {6,7,3,5},
                    {1,2,0,4}
                            };
    cout << max_row_sum(arr, 4) << "\n";                        
    return 0;
}