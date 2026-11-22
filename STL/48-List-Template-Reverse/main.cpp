#include <iostream>
#include <list>
#include <string>
using namespace std;

template <typename T>
void reverseList(list<T>& aList) {
    auto iter = aList.begin();
    while (iter != aList.end()) {
        aList.push_front(*iter);
        iter = aList.erase(iter);
    }
}

template <typename T>
void printList(const list<T>& aList) {
    for(const T& element : aList) {
        cout << element << " ";
    }
    cout << "\n";
}

int main() {
    list<int> a = {1, 3, 5, 7};
    list<double> b = {2.5, 4.8, 1.2};
    list<string> c = {"Hello", "World", "C++"};
    list<int> d = {42};
    list<int> e;

    reverseList(a);
    reverseList(b);
    reverseList(c);
    reverseList(d);
    reverseList(e);


    
    printList(a);
    printList(b);
    printList(c);
    printList(d);
    printList(e);

    return 0;
}