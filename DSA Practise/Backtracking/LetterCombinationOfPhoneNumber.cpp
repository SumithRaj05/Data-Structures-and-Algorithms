// Given a string containing digits from 2-9 inclusive, 
// return all possible letter combinations that the number 
// could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) 
// is given below. Note that 1 does not map to any letters.

class Solution {
    vector<string> output;
    vector<string> temp;
public:
    void backtrack(int i,string curr, int n){
        if(i == n){
            output.push_back(curr);
            return;
        }
        for(int j=0; j<temp[i].size(); j++){
            backtrack(i+1, curr+temp[i][j], n);
        }
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n == 0){
            return output;
        }
        map<char, string> numbers ={
            {'2',"abc"}, {'3',"def"}, 
            {'4',"ghi"}, {'5',"jkl"}, {'6',"mno"},
            {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}
        };
        for(int i=0; i<digits.size(); i++){
            temp.push_back(numbers[digits[i]]);
        }
        backtrack(0, "", n);
        return output;
    }
};