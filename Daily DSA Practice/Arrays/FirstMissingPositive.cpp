
// Given an unsorted integer array nums, 
// return the smallest missing positive integer.
// You must implement an algorithm that 
// runs in O(n) time and uses constant extra space.

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int counter = 1;
        for(int i=0; i<n; i++){
            if(counter==nums[i]){
                counter++;
            }
        }
        return counter;
    }
};