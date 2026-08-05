class Solution {
public:

//this is the leetcode 3310. Remove Methods From Project .
//done by first bfs from k . and findding all suspicious methods. 
//then checking if any suspicious method is invincible or not.
// if yes then we can remove all methods else we can only remove the non suspicious methods.
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& inv) {
        vector<vector<int>> adj(n);
        for (auto &e : inv) {
            adj[e[0]].push_back(e[1]);
        }

        vector<int> vis(n, 0);
        queue<int> q;
        q.push(k);
        vis[k] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto nxt : adj[node]) {
                if (!vis[nxt]) {
                    vis[nxt] = 1;
                    q.push(nxt);
                }
            }
        }

        bool canremove = true;
        for (auto &e : inv) {
            int u = e[0];
            int v = e[1];
            if (!vis[u] && vis[v]) {
                canremove = false;
                break;
            }
        }

        vector<int> ans;
        if (!canremove) {
            for (int i = 0; i < n; i++)
                ans.push_back(i);
        } else {
            for (int i = 0; i < n; i++) {
                if (!vis[i])
                    ans.push_back(i);
            }
        }
        return ans;
    }
};