class Solution {
public:
//this is the leetcode 1386. Cinema Seat Allocation .
    int maxNumberOfFamilies(int n, vector<vector<int>>& res) {
        unordered_map<int, unordered_set<int>> mp;
        for (auto &a : res) mp[a[0]].insert(a[1]);
        int ans = (n - mp.size()) * 2;
        for (auto &[i, a] : mp) {
            bool left = true;   
            bool middle = true; 
            bool right = true;  
            for(int s = 2; s <= 5; s++) {
                if (a.count(s)) {
                    left = false;
                    break;
                }
            }
            for(int s = 4; s <= 7; s++) {
                if (a.count(s)) {
                    middle = false;
                    break;
                }
            }
            for(int s = 6; s <= 9; s++) {
                if (a.count(s)) {
                    right = false;
                    break;
                }
            }
            if(left && right) ans += 2;
            else if(left || middle || right) ans += 1;
            
        }
        return ans;
    }
};