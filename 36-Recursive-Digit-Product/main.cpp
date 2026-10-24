/*
Write a recursive function to compute the product of digits of a number. Example: 234 -> 24
*/
#include <iostream>

int product_of_digits(int num){
    if(num < 10){
        return num;
    }

    return product_of_digits(num / 10) * (num % 10);
}

int main() {
    std::cout << product_of_digits(234) << "\n";
    return 0;
}