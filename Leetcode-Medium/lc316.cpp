class Solution {
public:

///tthis  is leetcode problem 316. Remove Duplicate Letters .
    string smallestSubsequence(string a) {
        unordered_map<char, int> m;

        int n = a.size();
        for(int i = 0; i < n; i++)  m[a[i]]++;

        vector<bool> vis(26, false);
        stack<char> s;

        for(int i = 0; i < n; i++) {
            char curr = a[i];
            m[curr]--;

            if(vis[curr - 'a']) continue;

            while(!s.empty() && curr < s.top() && m[s.top()] > 0) {
                vis[s.top() - 'a'] = false;
                s.pop();
            }
            s.push(curr);
            vis[curr - 'a'] = true;
        }

        string ans = "";
        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};