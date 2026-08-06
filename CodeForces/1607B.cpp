#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1607B . 
//simply done by observation that every 4 moves the total moves beecomes 0 . 
int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long x, n;
        cin >> x >> n;

        if (x % 2 == 0) {
            if (n % 4 == 0) {
                // x unchanged
            } else if (n % 4 == 1) {
                x -= n;
            } else if (n % 4 == 2) {
                x += 1;
            } else {
                x += n + 1;
            }
        } else {
            if (n % 4 == 0) {
                // x unchanged
            } else if (n % 4 == 1) {
                x += n;
            } else if (n % 4 == 2) {
                x -= 1;
            } else {
                x -= n + 1;
            }
        }

        cout << x << endl;
    }

    return 0;
}