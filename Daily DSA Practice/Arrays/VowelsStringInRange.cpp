// LeetCode contest

// You are given a 0-indexed array of string words and 
// two integers left and right.
// A string is called a vowel string if it starts with a 
// vowel character and ends with a vowel character where 
// vowel characters are 'a', 'e', 'i', 'o', and 'u'.
// Return the number of vowel strings words[i] where i 
// belongs to the inclusive range [left, right]

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int n, count = 0;
        for(int i=left; i<=right; i++){
            n = words[i].size();
            if((words[i][0]=='a' 
                || words[i][0]=='e' 
                ||  words[i][0]=='i'
                || words[i][0]=='o'
                ||  words[i][0]=='u') && (words[i][n-1]=='a' 
                || words[i][n-1]=='e' 
                ||  words[i][n-1]=='i'
                || words[i][n-1]=='o'
                ||  words[i][n-1]=='u')
            {    
                    count++;
            }
        }
        return count;
    }
};