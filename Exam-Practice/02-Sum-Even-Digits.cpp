#include <iostream>
using namespace std;

int sum_even_digits(int num) {
    if (num == 0) {
        return 0;
    }

    if(num % 2 == 0) {
        return num % 10 + sum_even_digits(num/10);
    }
    return sum_even_digits(num/10);
}

int main() {
    int n1 = 48263;
    cout << sum_even_digits(n1) << "\n"; 

    int n2 = 13479;
    cout << sum_even_digits(n2) << "\n"; 

    int n3 = 2468;
    cout << sum_even_digits(n3) << "\n"; 

    int n4 = 10204;
    cout << sum_even_digits(n4) << "\n"; 



    return 0;
}