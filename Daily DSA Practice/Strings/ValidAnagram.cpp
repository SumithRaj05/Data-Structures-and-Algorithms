// Given two strings s and t, return 
// true if t is an anagram of s, and 
// false otherwise.
// An Anagram is a word or phrase formed 
// by rearranging the letters of a different 
// word or phrase, typically using all the 
// original letters exactly once.

class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.size() != t.size())
            return false;
        vector<char> s1, s2;
        for(char i: s){
            s1.push_back(i);
        }
        for(char i: t){
            s2.push_back(i);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for(int i=0; i<s.size(); i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }
        return true;
    }
};