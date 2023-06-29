// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int low1 = 0, low2 = 0, high1 = m - 1, high2 = n - 1;
        int mid1, mid2;
        while (low1 <= high1 && low2 <= high2) { 
            mid1 = (low1 + high1) / 2;
            mid2 = (low2 + high2) / 2;
            if (matrix[mid1][mid2] == target) {
                return true;
            } else if (matrix[mid1][mid2] < target) {
                low2 = mid2 + 1; 
            } else {
                high2 = mid2 - 1; 
            }
            if (high2 < 0) {
                high1--;
                high2 = n - 1;
            }
            if (low2 >= n) {
                low1++;
                low2 = 0;
            }
        }
        return false;
    }
};
