#include "IntSequence.h"
#include <iostream>

int main() {
    int data1[] = {2, 5, 8, 5, 2};
    int data2[] = {1, 4, 6, 3, 2};

    IntSequence seq1(data1, 5);
    IntSequence seq2(data2, 5);

    std::cout<< std::boolalpha;

    // Expected output: Seq 1 Even Sum: 12, Symmetric = true
    std::cout << "Seq 1 Even Sum: " <<seq1.sumOfEvens() << "\n";
    std::cout << "Seq 1  Symmetric: " <<seq1.isSymmetric() << "\n";

    // Expected output: Seq 1 Even Sum: 12, Symmetric = false
    std::cout << "Seq 2 Even Sum: " <<seq2.sumOfEvens() << "\n";
    std::cout << "Seq 2  Symmetric: " <<seq2.isSymmetric() << "\n";

    return 0;
}