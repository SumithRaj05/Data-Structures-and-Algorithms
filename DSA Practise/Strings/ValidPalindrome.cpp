// A phrase is a palindrome if, after converting all uppercase 
// letters into lowercase letters and removing all non-alphanumeric 
// characters, it reads the same forward and backward. Alphanumeric 
// characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false 
// otherwise.


class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string output = "";
        for(int i=0; i<s.size(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]<='9' && s[i]>='0')){
                output += s[i];
            }
        }
        int start=0, end=output.size()-1;
        while(start<end){
            if(output[start]!=output[end]){
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }
};