// hackerrank contest

// Given a string S, print the reverse of the string 
// after removing the vowels.If the resulting string 
// is empty print '-1'.

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solve(string &s){
    int n = s.size();
    if(n==0){
        return "-1";
    }
    string output = "";
    map<char,int> vowels= {{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};
    for(char i: s){
        if(vowels[i]!=1){
            output+=i;
        }
    }
    int low = 0, high = output.size()-1;
    while(low<=high){
        swap(output[low], output[high]);
        low++;high--;
    }
    return output;
}

int main() {
    string inp;
    cin>>inp;
    string output = solve(inp);
    cout<<output;
    return 0;
}