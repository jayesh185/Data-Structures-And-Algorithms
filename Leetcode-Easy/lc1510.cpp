class Solution {
public:
//thsi is the leetcode 1510. Stone Game IV .
    bool winnerSquareGame(int n) {
        // dp[i] = can current player win with i stones?
        vector<bool> dp(n + 1, false);
        for(int i = 1; i <= n; i++) {

            // Try removing every square number
            for(int j = 1; j * j <= i; j++) {
                int remaining = i - j * j; // Remaining stones
                if(dp[remaining] == false){
                    // Current player can win
                    dp[i] = true;
                    // No need to try more moves
                    break;
                }
            }
        }

        // Answer for n stones
        return dp[n];
    }
};