#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int random_number;
    for(int i = 0; i < 5; i++){
       random_number = rand() % 50 + 8;
       std::cout<<"Random number: "<<random_number<<'\n';
    }

    return 0;
}