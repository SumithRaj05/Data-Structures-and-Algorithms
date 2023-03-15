// codechef

// Alice and Bob recently got into running, and 
// decided to compare how much they ran on 
// different days. They each ran for N days 
// on the ith day, Alice ran 
// A meters and Bob ran B meters.
// On each day,
// 1. Alice is unhappy if Bob ran strictly more 
// than twice her distance, and happy otherwise.
// 2. Similarly, Bob is unhappy if Alice ran 
// strictly more than twice his distance, and 
// happy otherwise.

// On how many of the N days were both Alice and Bob happy?

#include <bits/stdc++.h>
using namespace std;

#define print(a) cout<<a
#define println(a) cout<<a<<endl

int main() {
	int t,n,temp;
	cin>>t;
	while(t--){
        cin>>n;
        vector<int> alice;
        vector<int> bob;
        for(int i=0; i<n; i++){
            cin>>temp;
            alice.push_back(temp);
        }
        for(int i=0; i<n; i++){
            cin>>temp;
            bob.push_back(temp);
        }
        int count = 0;
        int min_ran, max_ran;
        for(int i=0; i<n; i++){
            min_ran = min(alice[i], bob[i]);
            max_ran = max(alice[i], bob[i]);
            if(max_ran<=(2*min_ran)){
                count++;
            }
        }
        println(count);
	}
	return 0;
}
