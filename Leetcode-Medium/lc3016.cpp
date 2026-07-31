class Solution {
public:

//this  is the leetcode 3016 .minimum number of pushes to type word 2 ..
//simply  donee using  logic  of first filling elements with highest freq to  lowest clicks
    int minimumPushes(string word) {
        unordered_map<char, int> m;

        for (char c : word) m[c]++;
        priority_queue<int> pq;
        for (auto x : m) {
            pq.push(x.second);
        }
        int ans = 0;
        int curr = 1;

        while (!pq.empty()) {
            if (pq.size() >= 8) {
                for (int i = 0; i < 8; i++) {
                    ans += curr * pq.top();
                    pq.pop();
                }
                curr++;
            }
            else {
                while (!pq.empty()) {
                    ans += curr * pq.top();
                    pq.pop();
                }

                break;
            }
        }

        return ans;
    }
};