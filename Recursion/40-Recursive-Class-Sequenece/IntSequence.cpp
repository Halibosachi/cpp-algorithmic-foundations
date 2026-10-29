#include "IntSequence.h"
#include <iostream>

IntSequence::IntSequence(const int inputArr[], int s){
    size = s;
    arr = new int[size];
    for (int i = 0; i < size; i++){
        arr[i] = inputArr[i];
    }
}

IntSequence::~IntSequence() {
    delete[] arr;
}

int IntSequence::sumOfEvens(int index) const{
    if(index == size){
        return 0 ;
    }

    if(arr[index] % 2 == 0){
        return arr[index] + sumOfEvens(index+1);
    } else {
        return sumOfEvens(index+1);
    }
    
}

bool IntSequence::isSymmetric(int index) const {
    if(index >= size / 2){
        return true;
    }

    if(arr[index] != arr[size-index-1]){
        return false;
    } else {
        return isSymmetric(index + 1);
    }
}
