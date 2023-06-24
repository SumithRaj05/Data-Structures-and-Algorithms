// Given an integer array nums of length n and an integer target, 
// find three integers in nums such that the sum is closest to target.


class Solution {
public:

    int threeSumClosest(vector<int>& nums, int target) {
        long closest = INT_MAX, sum;
        int n = nums.size();
        int j, k;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            j = i+1;
            k = n-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];

                if(abs(sum-target)<abs(closest-target)){
                    closest = sum;
                }

                if(sum>target){
                    k--;
                }else{
                    j++;
                }
            }
        }
        if(closest == INT_MAX){
            return 0;
        }
        return closest;
    }
};