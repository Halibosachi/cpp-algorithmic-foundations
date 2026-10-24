/*
Write a recursive function int count_all_occ(const string& str, const string& key) that counts the occurrences of a substring in a string.
*/
#include <iostream>
#include <string>

int count_all_occ(const std::string& str, const std::string& key){
    if(str.length() < key.length()){
        return 0;
    }

    if(str.substr(0, key.length()) == key){
        return 1 + count_all_occ(str.substr(1), key);
    } else {
         return count_all_occ(str.substr(1), key);
    }

}

int main() {
    std::cout << count_all_occ("abcabd", "ab") << "\n";
    return 0;
}