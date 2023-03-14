// Given a string s consisting of words and 
// spaces, return the length of the last word 
// in the string.
// A word is a maximal 
// substring consisting of non-space 
// characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size() - 1;
        int count = 0;
        while(n<=0 || s[n]!=' ' || count==0){
            if(s[n]!=' ')
                count++;
            n--;
            if(n<0){
                break;
            }
        }
        return count;
    }
};