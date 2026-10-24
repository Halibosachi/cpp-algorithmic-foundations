/*
Write a recursive function int count_char(const string& str, char ch) to count all occurrences of a specified character in a string.
*/
#include <iostream>
#include <string>

int count_char(const std::string& str, char ch){
    if(str.empty()){
        return 0;
    }

    return (str[0] == ch) + count_char(str.substr(1), ch);
}

int main() {
    std::cout << count_char("abracadabra", 'a') << "\n";
    return 0;
}