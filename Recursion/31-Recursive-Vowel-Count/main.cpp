#include <iostream>
#include <string>

bool is_vowel(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int count_vowel(const std::string& str, int index){
    if(index == str.length()){
        return 0;
    }

    return count_vowel(str, index + 1) + is_vowel(str[index]);
}

int main() {
    std::cout << count_vowel("honey", 0) << "\n";
    std::cout << count_vowel("terminal", 0) << "\n";
    std::cout << count_vowel("black", 0) << "\n";
    
    return 0;
}