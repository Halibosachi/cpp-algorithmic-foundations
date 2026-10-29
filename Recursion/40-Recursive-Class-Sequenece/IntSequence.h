#ifndef INTSEQUANCE_H
#define INTSEQUANCE_H

class IntSequence {
    private:
        int* arr;
        int size;
    public:
        IntSequence(const int inputArr[], int s);
        ~IntSequence();

        int sumOfEvens(int index = 0) const;
        bool isSymmetric(int index = 0) const;

};

#endif