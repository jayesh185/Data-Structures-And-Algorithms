#include <bits/stdc++.h>
using namespace std;

//this iss the codeforces 1806A.

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b || a + d < b + c) {
            cout << -1 << endl;
            continue;
        }

        cout << a - c + 2 * (d - b) << endl;
    }

    return 0;
}