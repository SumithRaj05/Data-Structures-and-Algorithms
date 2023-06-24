// Given n pairs of parentheses, write a function to generate 
// all combinations of well-formed parentheses.


class Solution {
    vector<string> output;
public:
    void generate(string op, int open, int close, int n){
        if(open == n && close == n){
            output.push_back(op);
            return;
        }
        if(close > open){
            return;
        }
        if(close >= n || open >n){
            return;
        }
        generate(op+"(", open+1, close, n);
        generate(op+")", open, close+1, n);
    }
    vector<string> generateParenthesis(int n) {
        generate("", 0, 0, n);
        return output;
    }
};