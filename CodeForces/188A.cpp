#include <bits/stdc++.h>
using namespace std;
//this is codeforces 1881A . Dont try to count 
//we simply used a logic to first make string x greater than s . then either it will be in that string 
//or in the next doubled string 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = 0;
        while(x.size()< s.size()) {
            x += x;
            ans++;
        }

        if (x.find(s) != string::npos) {
            cout << ans << endl;
            continue;
        }

        x += x;
        ans++;

        if (x.find(s) != string::npos)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}