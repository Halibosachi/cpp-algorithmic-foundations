#include <iostream>
#include<list>
using namespace std;

int maxElement(const list<int>& nums) {
    auto iter = nums.begin();
    int max = *iter;
    while (iter != nums.end()) {
        if(*iter > max) {
            max = *iter;
        }
        iter++;
    }
    return max;
}

int main() {
    list<int> a = {10, 35, 20, 50, 15};
    list<int> b = {-15, -5, -20, -8};
    list<int> c = {7, 7, 7, 7};

    cout << maxElement(a) << "\n";
    cout << maxElement(b) << "\n";
    cout << maxElement(c) << "\n";
    
    return 0;
}