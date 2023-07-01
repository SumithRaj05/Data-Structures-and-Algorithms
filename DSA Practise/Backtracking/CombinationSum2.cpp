// Given a collection of candidate numbers (candidates) and a target number 
// (target), find all unique combinations in candidates where the candidate 
// numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.


class Solution {
    vector<vector<int>> output;
public:
    void sumCombo(vector<int>& arr, int start, int target, vector<int>& temp) {
        if (target == 0) {
            output.push_back(temp);
            return;
        }

        for (int i = start; i < arr.size(); i++) {
            if (i > start && arr[i] == arr[i - 1]) {
                continue;
            }

            if (arr[i] <= target) {
                temp.push_back(arr[i]);
                sumCombo(arr, i + 1, target - arr[i], temp);
                temp.pop_back();
            } else {
                break; 
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        sumCombo(candidates, 0, target, temp);
        return output;
    }
};
