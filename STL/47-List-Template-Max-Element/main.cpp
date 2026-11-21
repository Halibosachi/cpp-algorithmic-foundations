#include <iostream>
#include <list>
using namespace std;

template <typename T>
typename list<T>::iterator maxElement(list<T>& aList) {
    if (aList.empty()) {
        return aList.end();
    }

    auto iter = aList.begin();
    auto maxIter = iter;
    while (iter != aList.end() )
    {
        if (*iter > *maxIter){
            maxIter = iter;
        }
        iter++;
    }
    return maxIter;    
}

int main() {
    list<int> a = {10, 35, 20, 50, 15};
    list<int> b = {-15, -5, -20, -8};
    list<double> c = {2.5, 7.8, 3.1, 6.4};
    list<int> d;

    auto result_a = maxElement(a);
    if (result_a != a.end()) {
        cout << *result_a << "\n";
    } else {
        cout << "Empty list\n";
    }

    auto result_b = maxElement(b);
    if (result_b != b.end()) {
        cout << *result_b << "\n";
    } else {
        cout << "Empty list\n";
    }

    auto result_c = maxElement(c);
    if (result_c != c.end()) {
        cout << *result_c << "\n";
    } else {
        cout << "Empty list\n";
    }

    auto result_d = maxElement(d);
    if (result_d != d.end()) {
        cout << *result_d << "\n";
    } else {
        cout << "Empty list\n";
    }

    
    

    return 0;
}