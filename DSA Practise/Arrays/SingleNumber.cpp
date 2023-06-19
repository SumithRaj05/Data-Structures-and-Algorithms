// Given a non-empty array of integers nums, 
// every element appears twice except for one. 
// Find that single one.

// You must implement a solution with a linear 
// runtime complexity and use only constant 
// extra space.


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(), ans;
        map<int, int> output;
        for(int i=0; i<n; i++){
            output[nums[i]] += 1;
        }
        for(auto i: output){
            if(i.second == 1){
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};