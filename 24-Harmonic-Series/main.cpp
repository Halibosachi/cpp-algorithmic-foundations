/*
Write a recursive function float series(int n) to add the first n elements of the series 1 + 1/2 + 1/3 + ... + 1/n
*/
#include <iostream>

float series(int n){
    if(n == 1){
        return 1.0;
    }

    return series(n-1) + (1.0f / n);
}

int main() {
    std::cout << series(1) << "\n";
    std::cout << series(2) << "\n";
    std::cout << series(3) << "\n";
    
    return 0;
}