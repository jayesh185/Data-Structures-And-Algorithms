class Solution {
public:
//this is leetcode 2685. Count the Number of Complete Components .
//we simply used concept of dfs here . and also formula for edges and nodes . total edges can be 
//cvalculated using the number of nodes . so we check it for each connected component
    vector<vector<int>> adj;
    vector<bool> vis;
    int nodes, edges;

    void dfs(int i) {
        vis[i] = true;
        nodes++;
        edges += adj[i].size();
        for(auto nei : adj[i]) {
            if(!vis[nei]) {
                dfs(nei);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edgesList) {
        adj.resize(n);
        vis.resize(n, false);
        int ans = 0;
        for(auto &e : edgesList) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i = 0; i < n; i++) {
            if(vis[i]) continue;
            nodes = 0;
            edges = 0;
            dfs(i);
            edges /= 2;
            if(edges == nodes * (nodes - 1) / 2)
                ans++;
        }
        return ans;
    }
};