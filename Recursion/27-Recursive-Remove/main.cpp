/*
Write a recursive function string remove_char(const string& str, char ch) that removes all occurrences of a specified character from a string.
*/
#include <iostream>
#include <string>

std::string remove_char(const std::string& str, char ch){
    if(str.empty()){
        return "";
    }

    if(str[0] == ch){
        return remove_char(str.substr(1), ch);
    } else {
        return str[0] + remove_char(str.substr(1), ch);
    }

}

int main() {
    std::cout << remove_char("abcab", 'a') << "\n";
    return 0;
}