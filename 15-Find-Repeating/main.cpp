/*
Given an array containing numbers from 1 to n with one repeating. Find the repeating number
*/
#include <iostream>

int find_rep(int arr[], int n);

int main() {

    int myArr[] = {1, 2, 3, 4, 4};

    std::cout << find_rep(myArr, 4);

    return 0;

}



int find_rep(int arr[], int n){

    int sum = 0;

    for(int i = 0; i < n+1; i++){

        sum += arr[i]; 

    }

    return sum - (n *(n + 1)) / 2;

}