// Given an array nums of n integers, return an array of all the unique 
// quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> temp;
        int n = nums.size();
        int k, m;
        long long sum;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                k = j+1;
                m = n-1;
                while(k<m){
                    sum = (long long)nums[i]+nums[j]+nums[k]+nums[m];
                    if(sum == target){
                        temp.insert({nums[i], nums[j], nums[k], nums[m]});
                    }
                    if(sum<target){
                        k++;
                    }else{
                        m--;
                    }
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