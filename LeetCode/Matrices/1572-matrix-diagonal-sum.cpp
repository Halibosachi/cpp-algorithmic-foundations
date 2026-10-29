#include <vector>
using namespace std;

// LeetCode 1572 - Matrix Diagonal Sum
// https://leetcode.com/problems/matrix-diagonal-sum/
// Calculate the sum of both diagonals using a single loop.
// If the matrix size is odd, subtract the center element
// because it was counted twice.

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        size_t n = mat.size();
        for(size_t i = 0; i < n; i++){          
            sum += mat[i][i];
            sum += mat[i][n-1-i];
        }
        if(n % 2 != 0){
            return sum - mat[n/2][n/2];
        } else {
             return sum;
        }
        
    }
};