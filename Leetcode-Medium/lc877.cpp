class Solution {
public:
//this is the leetcode 877 . Stone Game
//simply done using dp and recurrsion
    vector<vector<int>> dp;

    int solve(int left, int right, vector<int>& piles) {
        if (left == right) return piles[left];
        if (dp[left][right] != -1)
            return dp[left][right];
        int takeleft = piles[left] - solve(left + 1, right, piles); //this means we  take the left here and take the maximum score
        // diff that comes from left or right .
        int takeright = piles[right] - solve(left, right - 1, piles);
        return dp[left][right] = max(takeleft, takeright);
    }

    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        dp.assign(n, vector<int>(n, -1));
        return solve(0, n - 1, piles) > 0;
    }
};