// code chef contest

// Chef has N books such that the i th
// book has A pages. He wants to divide 
// all the books between Alice and Bob 
// such that:

// Both Alice and Bob get at least one book;
// The number of pages allotted to Alice 
// and Bob are either both odd or both even.
// Find whether such distribution exists.

#include <bits/stdc++.h>
using namespace std;

#define print(a) cout<<a
#define println(a) cout<<a<<endl

int main() {
	int t,n,ele;
	cin>>t;
	while(t--){
        cin>>n;
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>ele;
            sum+=ele;
        }
        (sum%2==0)? println("YES"): println("NO");
	}
	return 0;
}
