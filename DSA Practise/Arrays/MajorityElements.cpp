// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than 
// ⌊n / 2⌋ times. You may assume that the majority element always 
// exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = INT_MIN;
        int ele;
        map<int, int> output;
        for(int i=0; i<nums.size(); i++){
            output[nums[i]]++;
        }
        for(auto i: output){
            if(i.second > max){
                max = i.second;
                ele = i.first;
            }
        }
        return ele;
    }
};