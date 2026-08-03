#include <bits/stdc++.h>
using namespace std;
//this is the codeforces 1679A . 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n % 2 || n < 4) {
            cout << -1 << "\n";
            continue;
        }
        long long mn = -1, mx = -1;

        long long six = n / 6;
        long long rem = n % 6;
        if (rem % 4 == 0) {
            mn = six + rem / 4;
        } else {
            six--;
            rem += 6;

            if (six >= 0 && rem % 4 == 0)
                mn = six + rem / 4;
        }

        long long four = n / 4;
        rem = n % 4;
        if (rem % 6 == 0) {
            mx = four + rem / 6;
        } else {
            four--;
            rem += 4;

            if (four >= 0 && rem % 6 == 0)
                mx = four + rem / 6;
        }
        if (mn == -1 || mx == -1) cout << -1 << "\n";
        else cout << mn << " " << mx << "\n";
    }

    return 0;
}