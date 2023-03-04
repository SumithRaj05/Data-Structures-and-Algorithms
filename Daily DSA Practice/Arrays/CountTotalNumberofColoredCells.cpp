// leetcode contest

// There exists an infinitely large two-dimensional 
// grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:

// * At the first minute, color any arbitrary unit cell blue.
// * Every minute thereafter, color blue every uncolored 
// cell that touches a blue cell.

class Solution {
public:
    long long coloredCells(int n) {
        long long d = 4;
        long long ans = 1;
        for(int i=2; i<=n; i++){
            ans += d;
            d = 4*i;
        }
        return ans;
    }
};