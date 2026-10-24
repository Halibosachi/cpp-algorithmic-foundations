/*
 Write a recursive function to print numbers from 1 to n forward and then backward. Example: n=3 -> 1 2 3 2 1
*/
#include <iostream>

void print_forward_backward(int n, int current = 1) {
    if(current == n){
        std::cout << current << " ";
        return;
    }

    std::cout << current << " ";
    print_forward_backward(n, current+1);
    std::cout << current << " ";

}

int main() {
    print_forward_backward(3);
    return 0;
}