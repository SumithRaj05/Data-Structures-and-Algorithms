// Given an integer rowIndex, return the rowIndexth 
// (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of 
// the two numbers directly above it as shown:


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> temp = {{1}};
        for(int i=1; i<=rowIndex; i++){
            vector<int> sub(i+1, 1);
            for(int j=1; j<i; j++){
                sub[j] = temp[i-1][j] + temp[i-1][j-1];
            }
            temp.push_back(sub);
        }
        return temp[temp.size()-1];
    }
};