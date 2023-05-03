
// Given a string s containing just the characters 
// '(', ')', '{', '}', '[' and ']', determine if the 
// input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type 
// of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket 
// of the same type.

class Solution {
public:
    bool isValid(string s) {
        vector<char> arr;
        map<char,char> dict = {{')','('},{'}','{'},{']','['}};
        arr.push_back('#');
        for(char i: s){
            if(i=='(' || i=='{' || i=='['){
                arr.push_back(i);
            }else{
                if(arr.back()==dict[i]){
                    arr.pop_back();
                }else{
                    return 0;
                }
            }
        }
        if(arr.back()=='#'){
            return 1;
        }
        return 0;
    }
};