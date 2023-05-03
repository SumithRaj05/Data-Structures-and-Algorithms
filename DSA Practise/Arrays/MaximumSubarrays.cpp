
// Given an integer array nums, find the 
// subarray with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0, maxTillNow = INT_MIN;
        for(int c : nums)
            curMax = max(c, curMax + c),
            maxTillNow = max(maxTillNow, curMax);
        return maxTillNow;
    }
};