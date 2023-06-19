// Given an integer numRows, return the first 
// numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of 
// the two numbers directly above it as shown:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output = {{1}};
        for(int i=1; i<numRows; i++){
            vector<int> sub(i+1, 1);
            for(int j=1; j<i; j++){
                sub[j] = output[i-1][j] + output[i-1][j-1];
            }
            output.push_back(sub);
        }
        return output;
    }
};