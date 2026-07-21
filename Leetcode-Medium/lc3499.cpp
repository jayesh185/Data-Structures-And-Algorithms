class Solution {
public:

//thiss is the leetcode 3499 . 
    int maxActiveSectionsAfterTrade(string s) {
        string t = "1" + s + "1";
        int n = t.size();

        vector<pair<char,int>> blocks;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && t[j] == t[i]) j++;
            blocks.push_back({t[i], j - i});
            i = j;
        }

        int totalOnes = 0;
        for (char c : s) if (c == '1') totalOnes++;

        int m = blocks.size();
        int bestGain = 0;
        for (int k = 1; k < m - 1; k++) {          
            if (blocks[k].first == '1') {
                int gain = blocks[k-1].second + blocks[k+1].second;
                bestGain = max(bestGain, gain);
            }
        }

        return totalOnes + bestGain;
    }
};