#include <bits/stdc++.h>
using namespace std;
//this is the codeforces 1837B . simply done by calculaating the longest run of < or > . and taking max of both runs . 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        vector<int> a(n+1), c(n+1);

        a[0] = 1;
        c[0] = 1;
        for (int i = 1; i <= n; i++) {
            a[i] = (s[i-1] == '<') ? a[i-1] + 1 : 1;
            c[i] = (s[i-1] == '>') ? c[i-1] + 1 : 1;
        }

        int ans = 0;
        for (int i = 0; i <= n; i++)
            ans = max(ans, max(a[i], c[i]));
        cout << ans << "\n";
    }
}