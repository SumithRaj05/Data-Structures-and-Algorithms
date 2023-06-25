// Given a string s, find the length of the longest 
// substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n<=1){
            return n;
        }
        map<char, int> stat;
        for(int i=0; i<n; i++){
            stat[s[i]] = 0;
        }
        int len = INT_MIN;
        int counter = 0;
        int i =0;
        int j = 0;
        while(j<n){
            if(stat[s[j]]){
                while(s[i]!=s[j]){
                    stat[s[i]] = 0;
                    i++;
                    counter--;
                }
                stat[s[j]] = 0;
                i++;
                counter--;

            }else{
                stat[s[j]] = 1;
                j++;
                counter++;
            }


            if(counter>len){
                len = counter;
            }
        }
        return len;
    }
};