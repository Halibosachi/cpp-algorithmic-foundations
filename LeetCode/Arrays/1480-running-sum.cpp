#include <vector>
using namespace std;

// LeetCode 1480 - Running Sum of 1D Array
// https://leetcode.com/problems/running-sum-of-1d-array/
//
// I calculate the sum as I go through the vector.
// Each element is replaced with the sum up to that position.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;

        for (size_t i = 0; i < nums.size(); i++) {
            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};
