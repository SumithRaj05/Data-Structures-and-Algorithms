// Given an array of integers nums sorted in non-decreasing
// order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> output = {-1,-1};
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid] >= target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        if(low<n && nums[low] == target){
            output[0] = low;
        }else{
            return output;
        }
        low = 0;
        high = n-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid] <= target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        output[1] = high;
        
        return output;
    }
};