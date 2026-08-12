#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1543A .

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        if(diff == 0) {
            cout << "0 0" << endl;
            continue;
        }
        long long rem = a % diff;
        long long moves = min(rem, diff - rem);
        cout << diff << " " << moves << endl;
    }
    return 0;
}