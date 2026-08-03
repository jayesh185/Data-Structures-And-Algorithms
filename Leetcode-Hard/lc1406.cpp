class Solution {
public:
//this is the leetcode 1406. Stone Game III . 
//we have used here dp in bottom up approach.

//it is similar to predict the winner question but here we take do transition as taking 1,2 or 3
// stones from the piles and we have to return the winner of the game.
    string stoneGameIII(vector<int>& piles) {
        int n = piles.size();

        vector<int> dp(n + 3, 0);
        for (int i = n - 1; i >= 0; i--) {
            int curr = 0;
            dp[i] = INT_MIN;
            for (int k = 0; k < 3 && i + k < n; k++) {
                curr += piles[i + k];
                dp[i] = max(dp[i], curr - dp[i + k + 1]);
            }
        }

        if (dp[0] > 0) return "Alice";
        if (dp[0] < 0) return "Bob";
        return "Tie";
    }
};