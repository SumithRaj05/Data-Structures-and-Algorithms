// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};