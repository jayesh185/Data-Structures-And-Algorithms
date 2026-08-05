class Solution {
public:

//this is thee leetcode 4008 . Minimum Initial  Stength

//doony by binary seraching the ans .
    bool check(long long mid, vector<int>& monsters, vector<long long>& bonus) {
        long long curr = mid;
        for (int i = 0; i < monsters.size(); i++) {
            if (curr +bonus[i] < monsters[i])
                return false;
            curr -= monsters[i];
            if (curr < 0)
                curr = 0;
        }
        return true;
    }

    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n = monsters.size();
        vector<long long> diff(n + 1, 0);
        for (auto &x : boosts) {
            diff[x[0]] += x[2];
            if (x[1] + 1 < n)
                diff[x[1] + 1] -= x[2];
        }
        vector<long long> bonus(n);
        bonus[0] = diff[0];
        for (int i = 1; i < n; i++)
            bonus[i] = bonus[i - 1] + diff[i];
        long long low = 0;
        long long high = 1e18;
        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (check(mid, monsters, bonus)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};