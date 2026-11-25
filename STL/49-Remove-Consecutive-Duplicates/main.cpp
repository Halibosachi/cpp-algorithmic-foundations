#include <iostream>
#include <list>
using namespace std;

void removeConsecutiveDuplicates(list<int>& nums) {
  if(nums.empty()) return;
  
  auto current = nums.begin();
  auto next = current;
  next++;
  
  while (next != nums.end()) {
      if(*current == *next) {
          next = nums.erase(next);
      } else {
          current++;
          next++;
      }
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
    list<int> a = {4, 4, 2, 2, 2, 7, 4, 4, -1, -1};
    list<int> b = {5, 5, 5, 5};
    list<int> c = {1, 2, 3, 4};
    list<int> d = {8};
    list<int> e = {};
    
    removeConsecutiveDuplicates(a);
    printList(a);
    
    removeConsecutiveDuplicates(b);
    printList(b);
    
    removeConsecutiveDuplicates(c);
    printList(c);
    
    removeConsecutiveDuplicates(d);
    printList(d);
    
    removeConsecutiveDuplicates(e);
    printList(e);
    
    return 0;
}