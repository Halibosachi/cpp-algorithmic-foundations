/*
Write a recursive function bool is_in_string(const string& str, char ch) to check whether a specified character is in a string.
*/
#include <iostream>
#include <string>

bool is_in_string(const std::string& str, char ch){
    if(str.empty()){
        return false;
    }

    if(str[0] == ch){
        return true;
    }

    return is_in_string(str.substr(1), ch);
    
}

int main() {
    std::cout<< std::boolalpha;

    std::cout << is_in_string("abcad", 'c') << "\n";
    std::cout << is_in_string("abcad", 'e') << "\n";
    
    return 0;
}