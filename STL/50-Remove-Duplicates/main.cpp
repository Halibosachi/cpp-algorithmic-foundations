#include <iostream>
#include <list>
using namespace std;

void removeDuplicates(list<int>& nums) {
    auto current = nums.begin();
    while (current != nums.end()) {
        auto next = current;
        next++;
        while(next != nums.end()) {
            if(*next == *current) {
                next = nums.erase(next);
            } else {
                next++;
            }
        }
        current++;
    }
    
}

void printList(const list<int>& nums) {
    if(nums.empty()) {
        cout << "Empty list" << "\n";
        return;
    }
    auto iter = nums.begin();
    
    while(iter != nums.end()) {
        cout << *iter << " ";
        iter++;
    }
    cout << "\n";
}

int main()
{
    list<int> a = {4, 2, 4, 3, 2, 4, -1, -1};
    list<int> b = {5, 5, 5, 5};
    list<int> c = {1, 2, 3, 4};
    list<int> d = {7, 3, 7, 2, 3, 9, 2};
    list<int> e = {};
    
    removeDuplicates(a);
    printList(a);
    
    removeDuplicates(b);
    printList(b);
    
    removeDuplicates(c);
    printList(c);
    
    removeDuplicates(d);
    printList(d);
    
    removeDuplicates(e);
    printList(e);
    
    return 0;
}