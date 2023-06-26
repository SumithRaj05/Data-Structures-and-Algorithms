// Given an integer array nums, return all the triplets 
// [nums[i], nums[j], nums[k]] such that i != j, i != k, 
// and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate 
// triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> temp;
        sort(nums.begin(), nums.end());
        int n = nums.size(), sum, j, k;
        for(int i=0; i<n; i++){
            j = i+1;
            k = n-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    temp.insert({nums[i], nums[j], nums[k]});
                }
                if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
        }
        vector<vector<int>> output;
        for(vector<int> i: temp){
            output.push_back(i); 
        }
        return output;
    }
};
