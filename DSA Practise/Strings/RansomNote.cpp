// Given two strings ransomNote and magazine, return 
// true if ransomNote can be constructed by using the 
// letters from magazine and false otherwise.

// Each letter in magazine can only be used once in 
// ransomNote.

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();
        int temp = n;
        map<int, int> text;
        for(int i=0; i<m; i++){
            text[magazine[i]]++;
        }
        for(int j=0; j<n; j++){
            if(text[ransomNote[j]]>=1){
                temp--;
                text[ransomNote[j]]--;
            }
        }
        if(temp == 0){
            return true;
        }
        return false;
    }
};