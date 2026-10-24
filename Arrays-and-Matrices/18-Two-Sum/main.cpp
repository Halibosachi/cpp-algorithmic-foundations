#include <iostream>

bool has_two_pairs(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(  arr[i] + arr[j] == target ){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int myArr[] = {2, 7, 11, 15};

    std::cout << std::boolalpha;
    
    std::cout << has_two_pairs(myArr, 4, 10) << "\n";
    std::cout << has_two_pairs(myArr, 4, 26) << "\n";
    std::cout << has_two_pairs(myArr, 4, 15) << "\n";
    std::cout << has_two_pairs(myArr, 4, 18) << "\n";
    
    return 0;
}