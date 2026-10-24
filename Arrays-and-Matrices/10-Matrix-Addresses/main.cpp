#include <iostream>

int main() {

    int arr[5][5] = { {1,0,0,0,0}, {0,1,0,0,0}, {0,0,1,0,0}, {0,0,0,1,0}, {0,0,0,0,1} };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout<<&arr[i][j]<<"\t";
        }
        std::cout<<"\n";
    }

    return 0;

}