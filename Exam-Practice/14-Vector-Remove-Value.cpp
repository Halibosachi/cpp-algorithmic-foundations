#include <iostream>
#include <vector>
using namespace std;

void remove_value(vector<int>& v, int target) {
    for(int i = 0; i < v.size(); ) {
        if(v[i] == target) {
            v.erase(v.begin() + i);
        } else {
            i++;
        }
    }
}

void print_vector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    vector<int> a = {1, 3, 2, 3, 4, 3, 5};
    vector<int> b = {7, 7, 7, 7};
    vector<int> c = {1, 2, 3, 4};
    vector<int> d = {5, 1, 5, 2, 5};

    remove_value(a, 3);
    remove_value(b, 7);
    remove_value(c, 9);
    remove_value(d, 5);

    print_vector(a);
    print_vector(b);
    print_vector(c);
    print_vector(d);

    return 0;
}
