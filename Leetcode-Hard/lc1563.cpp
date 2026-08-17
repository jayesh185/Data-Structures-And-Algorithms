#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

//this is the leetcode 1563 . Stone Game 5
    int stoneGameV(vector<int>& s) {
        int n = s.size();
        vector<int> pre(n + 1, 0);
        for (int i = 0; i < n; i++)
            pre[i + 1] = pre[i] + s[i];

        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int len = 2; len <= n; len++) {
            for (int l = 0; l + len - 1 < n; l++) {
                int r = l + len - 1;
                for (int k = l; k < r; k++) {
                    int leftsum = pre[k + 1] - pre[l];
                    int rightsum = pre[r + 1] - pre[k + 1];
                    if (leftsum < rightsum)
                        dp[l][r] = max(dp[l][r], leftsum + dp[l][k]);
                    else if (rightsum < leftsum)
                        dp[l][r] = max(dp[l][r], rightsum + dp[k + 1][r]);
                    else
                        dp[l][r] = max(dp[l][r], leftsum + max(dp[l][k], dp[k + 1][r]));
                }
            }
        }

        return dp[0][n - 1];
    }
};