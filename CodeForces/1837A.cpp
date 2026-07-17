#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1837A .
//simply used basic logic  here .
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, k;
        cin >> x >> k;

        if(x % k != 0) {
            cout << 1 << "\n";
            cout << x << "\n";
        }
        else {
            cout << 2 << "\n";
            cout << x + 1 << " " << -1 << "\n";
        }
    }

    return 0;
}