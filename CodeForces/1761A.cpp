#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1761A . . simply done using logic
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        bool ok;
        if (a == n && b == n) {
            ok = true;
        } else if (a + b <= n - 2) {
            ok = true;
        } else {
            ok = false;
        }
        
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}