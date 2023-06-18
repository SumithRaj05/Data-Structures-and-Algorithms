// You are climbing a staircase. It takes n steps to 
// reach the top.

// Each time you can either climb 1 or 2 steps. 
// In how many distinct ways can you climb to the top?


class Solution {
    vector<int> dp;
public:
    Solution(){
        dp.resize(100, -1);
    }
    int stairs(int n, int c){
        if(n==0){
            return c+1;
        }
        if(n<0){
            return c;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        cout<<n<<" "<<c<<endl;
        dp[n] = stairs(n-1, c) + stairs(n-2, c);
        return dp[n];
    }
    int climbStairs(int n) {
        return stairs(n, 0);
    }
};