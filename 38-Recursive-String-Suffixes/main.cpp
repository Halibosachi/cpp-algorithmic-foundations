#include <iostream>
#include <string>
using namespace std;

void print_suffixes(const string& str, int index=0) {
    if(index == str.length()){
        return;
    }

    cout << str.substr(index) << " ";
    print_suffixes(str, index + 1);
    
}
int main() {
    print_suffixes("cat");
    return 0;

}