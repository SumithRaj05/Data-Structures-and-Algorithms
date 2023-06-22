// Given a string s, return the longest 
// palindromic substring in s.


class Solution {
public:
    bool isPalindrone(string &s,int i, int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = INT_MIN, start;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(isPalindrone(s, i, j)){
                    if(maxLen < j-i+1){
                        start = i;
                        maxLen = j-i+1;
                    }
                }
            }
        }
        return s.substr(start, maxLen);
    }
};