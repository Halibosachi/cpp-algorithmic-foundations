#include <iostream>
#include <string>

std::string remove_duplicates(const std::string& str, int index = 0){
    if(index == str.length()){
        return "";
    }

    char ch;
    ch = str[index];


    while(str[index] == ch){
        index++;
    }
        
    

    return ch + remove_duplicates(str, index);
}

int main() {
    std::cout << remove_duplicates("aaabbcdda") << "\n";
    return 0;
}