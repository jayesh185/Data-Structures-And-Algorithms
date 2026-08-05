#include <bits/stdc++.h>
using namespace std;

//this is codeforces 2254B .
//simply done by storingg blocks of same characters and then checking if there is any block of 
//size 1 in middle and if it can be merged with its neighbours or not.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<pair<char,int>> blocks;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) cnt++;
            else {
                blocks.push_back({s[i-1], cnt});
                cnt = 1;
            }
        }
        blocks.push_back({s[n-1], cnt});

        int m = blocks.size();
        int ans = m;

        bool anySingle = false, anyMerge = false;
        for (int i = 1; i + 1 < m; i++) {           // middle blocks only
            if (blocks[i].second == 1) {
                anySingle = true;
                if (blocks[i-1].first == blocks[i+1].first) {
                    anyMerge = true;
                }
            }
        }

        if (anyMerge) ans = m - 2;
        else if (anySingle) ans = m - 1;

        cout << ans << "\n";
    }
    return 0;
}