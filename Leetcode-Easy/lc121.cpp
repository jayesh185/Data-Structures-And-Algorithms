class Solution {
public:
/// this is the leetcode 121. best time to buy and sell stock
    int maxProfit(vector<int>& p) {
        int n = p.size();
        if(n==0){
            return 0;
        }
        int bestbuy = 0;
        int profit= 0;
        int maxprofit  = INT_MIN;
        for( int i  =0 ; i<n ; i++){
            if(p[i]< p[bestbuy]){
                bestbuy = i;
            }
            profit = p[i] - p[bestbuy];
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    
    }
};