// Hackerrank

// You are given an alpha-numeric string S as input and a task 
// of finding the frequency of each character in the best possible 
// way.
// There are Q queries to be performed.

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
//     Time Complexity:
//         after ignoring input and output loops,
//         we have one loop that iters through string S,
//         therefore in all the cases it will iter
//         and perform operation at every char of string,
//         hence bestCase as well as worstCase is 
//             O(m), where m is size of string S.
        
    string S;
    int n;
    char ele;
    cin>>S;
    cin>>n;
    vector<char> Q;
    map<char, int> output;
    for(int i=0; i<n; i++){
        cin>>ele;
        Q.push_back(ele);
    }
    for(char i: S){
        output[i]++;
    }
    for(int i=0; i<n; i++){
        cout<<output[Q[i]]<<"\n";
    }
    return 0;
}
