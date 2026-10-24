/*
The combinations of n objects, such as balls in a basket, taken k at a time can be calculated recursively using the following formula:
C(n,k) = 1 if k=0 or n=k
C(n,k) = C(n-1, k) + C(n-1, k-1) if n > k > 0
*/
#include <iostream>

int comb(int n, int k){
    if(k == 0 || n == k){
        return 1;
    }

    return comb(n-1, k) + comb(n-1, k-1);
}

int main() {
    std::cout << comb(10, 3) << "\n";
    return 0;
}