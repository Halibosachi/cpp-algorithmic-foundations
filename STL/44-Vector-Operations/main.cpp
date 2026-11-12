#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    for(auto val : v1) {
        cout << val << " ";
    }
    cout << "\n";

    v1.pop_back();
    v1.insert(v1.begin() + 2, 25);

    auto result = find(v1.begin(), v1.end(), 30);
    if (result != v1.end()){
        *result = 35;
    }
    

    for(auto val : v1) {
        cout << val << " ";
    }
    cout << "\n";

    auto result2 = find(v1.begin(), v1.end(), 20);
    if( result2 != v1.end()){
        v1.erase(result2);
    }
    
        

    for(auto val : v1) {
        cout << val << " ";
    }

    cout << "\n";
    cout << "size of v1: " << v1.size() << "\n";




    return 0;
}