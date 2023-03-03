// Given an integer array nums, return true if any 
// value appears at least twice in the array, and 
// return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s1;
        vector<int>::iterator i;
        for(i = nums.begin(); i<nums.end(); i++){
            s1.insert(*i);
        }
        if(s1.size()!=nums.size()){
            return 1;
        }
        return 0;
    }
};