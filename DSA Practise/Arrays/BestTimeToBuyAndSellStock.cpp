
// You are given an array prices where prices[i]
// is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a 
// single day to buy one stock and choosing a different 
// day in the future to sell that stock.
// Return the maximum profit you can achieve from this 
// transaction. If you cannot achieve any profit, return 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit = INT_MAX;
        int maxProfit = INT_MIN;
        int n = prices.size();
        if(n<2) return 0;
        for(int i=0; i<n; i++){
            if(prices[i]<minProfit){
                minProfit = prices[i];
            }else{
                maxProfit = max(maxProfit, prices[i]-minProfit);
            }
        } 
        
        if(maxProfit==INT_MIN)
            return 0;
        return maxProfit;
    }
};