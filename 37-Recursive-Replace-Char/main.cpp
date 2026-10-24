#include <iostream>
using namespace std;

string replace_char(const string& str, char old_ch, char new_ch, int index=0){
    if(index == str.length()){
        return "";
    }

    if(str[index] == old_ch){
        return new_ch + replace_char(str, old_ch, new_ch, index + 1);
    } else {
        return str[index] + replace_char(str, old_ch, new_ch, index + 1);
    }

    
}

int main() {
    std:: cout << replace_char("xoxo", 'x', 'y') << "\n";
    return 0;
}