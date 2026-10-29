#include <vector>
using namespace std;

// LeetCode 1672 - Richest Customer Wealth
// https://leetcode.com/problems/richest-customer-wealth/
//
// Calculate each customer's total wealth
// and keep track of the highest total.

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        
        for(size_t i = 0; i < accounts.size(); i++){
            int temp = 0;
            for(size_t j = 0; j < accounts[i].size(); j++){
                temp += accounts[i][j];
            }
            if (temp > wealth){
                wealth = temp;
            }
        }
        return wealth;
    }
};