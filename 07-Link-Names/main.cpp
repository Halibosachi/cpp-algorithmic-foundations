#include <iostream>
#include <string>

std::string linkNames(const std::string& first, const std::string& last){
    return first + " " + last;
}

int main() {
    std::string first, last;
    std::cout << "Please enter first name: ";
    std::getline(std::cin, first);
    std::cout << "Please enter last name: ";
    std::getline(std::cin, last);
    std::cout << "Your full name: " <<  linkNames(first, last);
    return 0;
}