#include <bits/stdc++.h>
using namespace std;

//thiis  is the codeforces 1777A .
//we counted the even and odd blocks which will eventually be 1 for each parity
//so last me just printed that 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int blocks = 1; 
        for (int i = 1; i < n; i++) {
            if ((a[i] % 2) != (a[i - 1] % 2)) {
                blocks++;
            }
        }

        cout << (n - blocks) << "\n";
    }

    return 0;
}