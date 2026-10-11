#include <iostream>
#include <string>

void readDouble(const std::string& prompt, double& value1, double& value2);

int main() {
    double x, y;
    readDouble("Enter two numbers: ", x, y);
    
    std::cout << "x is now: " << x << " and y is now: " << y << '\n';
    return 0;
}

void readDouble(const std::string& prompt, double& value1, double& value2){
    std::cout<<prompt;
    std::cin>>value1>>value2;
}