#include <iostream>
#include <string>
using namespace std;

string reverse_string(const string& str) {
    if(str.size() == 0) return "";
    int n = str.size();
    return str[n-1] + reverse_string(str.substr(0, n-1));

}

int main() {
    cout << reverse_string("hello") << '\n';
    cout << reverse_string("computer") << '\n';
    cout << reverse_string("a") << '\n';
    
    return 0;
}