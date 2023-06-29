// Given an array of distinct integers candidates and a target integer 
// target, return a list of all unique combinations of candidates where 
// the chosen numbers sum to target. You may return the combinations in 
// any order.

// The same number may be chosen from candidates an unlimited number of 
// times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations 
// that sum up to target is less than 150 combinations for the given input.

class Solution {
    vector<vector<int>> output;
public:
    void findCombo(vector<int>& arr, int tar, int i, vector<int>& combo){
        if(tar < 0 || i == arr.size()){
            return;
        }
        if(tar == 0){
            output.push_back(combo);
            return;
        }
        for(int j=i; j<arr.size(); j++){
            combo.push_back(arr[j]);
            findCombo(arr, tar-arr[j], j, combo);
            combo.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        findCombo(candidates, target, 0, temp);
        return output;
    }
};