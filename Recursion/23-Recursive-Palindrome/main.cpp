/*
Write a recursive function bool is_palindrome(const string& str, int left, int right) to determine whether a string is a palindrome.
*/

#include <iostream>
#include <string>

bool is_palindrome(const std::string& str, int left, int right){
    if(left >= right){
        return true;
    }

    if(str[left] != str[right]){
        return false;
    }

    return is_palindrome(str, left + 1, right - 1);
}

int main() {
    std::string test1 = "kayak";
    std::string test2 = "radar";
    std::string test3 = "rumor";
    std::string test4 = "drones";

    std::cout << std::boolalpha;

    std::cout << is_palindrome(test1, 0, 4) << "\n";
    std::cout << is_palindrome(test2, 0, 4) << "\n";
    std::cout << is_palindrome(test3, 0, 4) << "\n";
    std::cout << is_palindrome(test4, 0, 5) << "\n";

    return 0;
}