// You are given a 0-indexed permutation of n integers nums.

// A permutation is called semi-ordered if the first number 
// equals 1 and the last number equals n. You can perform the 
// below operation as many times as you want until you make nums 
// a semi-ordered permutation:

// Pick two adjacent elements in nums, then swap them.
// Return the minimum number of operations to make nums a 
// semi-ordered permutation.

// A permutation is a sequence of integers from 1 to n of 
// length n containing each number exactly once.

class Solution {
public:
    int find(vector<int>& nums, int key, int n){
        for(int i=0; i<n; i++){
            if(nums[i] == key){
                return i;
            }
        }
        return -1;
    }
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int total;
        int low = find(nums, 1, n);
        int high = find(nums, n, n);
        if(low == -1){
            return 0;
        }
        int highOperations = (n-1) - high;
        if(low>high){
            total = low + (highOperations-1);
            return total;
        }
        total = low + highOperations;
        return total;
    }
};