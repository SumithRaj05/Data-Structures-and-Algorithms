// hackerrank

// Given a string S, find the length of the 
// longest substring without repeating characters.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;


int main() {
    // time complexity is O(n) in all the case
    string s;
    cin>>s;
    int n = s.size(), curr, prev = 0, max = 0;
    set<char> subs;
    for(int i=0; i<n; i++){
        curr = subs.size();
        if(curr == prev){
            subs.insert(s[i]);
            prev++;
        }else{
            max = subs.size();
            subs.clear();
            prev = 0;
        }
    }
    curr = subs.size();
    if(curr > max){
        max = subs.size();
    }
    cout<<max<<endl;
    return 0;
}
