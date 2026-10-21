/*
Write a recursive function string int_to_bin(int num) that changes an integer to a binary number.
*/
#include <iostream>
#include <string>

std::string int_to_bin(int num){
    if(num == 0){
        return "0";
    }

    if(num == 1){
        return "1";
    }

    return int_to_bin(num / 2) + char('0' + num % 2);
}

int main() {
    std::cout << int_to_bin(11) << "\n";
    return 0;
}