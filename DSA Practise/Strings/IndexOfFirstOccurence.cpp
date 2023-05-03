
// Given two strings needle and haystack, 
// return the index of the first occurrence 
// of needle in haystack, or -1 if needle is 
// not part of haystack.

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int j, counter;
        for(int i=0; i<n; i++){
            j = i;
            counter = 0;
            while(j<n && counter<m){
                if(haystack[j] != needle[counter]){
                    break;
                }
                j++;
                counter++;
            }
            if(counter==m){
                return i;
            }
        }
        return -1;
    }
};