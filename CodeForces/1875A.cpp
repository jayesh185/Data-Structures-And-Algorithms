#include <bits/stdc++.h>
using namespace std;

//this  is the codeforces 1875A . 
//simply donee by adding the minn of current elemennt and max-1 . bec ofc we cant go to 0 . so we always have to go onee less
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;
        long long c = a - 1;
        long long ans = b;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            ans += min(x, c);
        }

        cout << ans << "\n";
    }
    return 0;
}