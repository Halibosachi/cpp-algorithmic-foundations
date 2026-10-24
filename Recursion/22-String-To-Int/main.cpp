/*
Write a recursive function int to_int(const string& str) that converts string of numerals to an integer. For example, "43567" will be converted to 43567.
*/
#include <iostream>
#include <string>


int to_int(const std::string& str){
    if(str.length() == 1){
        return str[0] - '0';
    }

    return to_int(str.substr(0, str.length() - 1)) * 10 + (str.back() - '0');
}



int main() {
    std::cout << to_int("43567") << "\n";
    
    return 0;
}