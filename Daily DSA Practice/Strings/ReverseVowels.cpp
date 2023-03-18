
// Given a string s, reverse only all the 
// vowels in the string and return it.
// The vowels are 'a', 'e', 'i', 'o', and 
// 'u', and they can appear in both lower 
// and upper cases, more than once.

class Solution {
public:
    string reverseVowels(string &s) {
        map<char,int> vowel = {
            {'a','a'},
            {'e','e'},
            {'i','i'},
            {'o','o'},
            {'u','u'},
            {'A','A'},
            {'E','E'},
            {'I','I'},
            {'O','O'},
            {'U','U'}
        };

        int i=0, j=s.size()-1;
        while(i<j){
            while(i<j && s[i]!=vowel[s[i]]){
                i++;
            }
            while(i<j && s[j]!=vowel[s[j]]){
                j--;
            }
            cout<<i<<" "<<j<<endl;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};

// updated code 

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while (i < j && vowels.find(s[i]) == vowels.end()) {
                i++;
            }
            while (i < j && vowels.find(s[j]) == vowels.end()) {
                j--;
            }
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};
