#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> intList = {-15, 5, 35, -19, -12, 17, -4};

    list<int>::iterator iter = intList.begin();

    while (iter != intList.end()) {
        if(*iter < 0) {
            *iter = -(*iter);
        }
        iter++;
    }

    for(int num : intList) {
        cout << num << " ";
    }
    
    return 0;
}