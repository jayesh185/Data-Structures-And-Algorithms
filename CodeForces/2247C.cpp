#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int cnt10 =0; 
        int cnt01 = 0; 
        int cnt00 = 0;
        int cnt11 =0; 

        for (int i = 0; i < n; i++) {
            if (a[i]== 1 && b[i] == 0) cnt10++;
            else if (a[i] == 0 && b[i] == 1) cnt01++;
            else if (a[i] ==0 && b[i] == 0) cnt00++;
            else cnt11++;
        }
        int mismatches = cnt10 + cnt01;
        int ans;

        if (mismatches == 0) {
            // a already equals b.
            ans = 0;
        } else if (cnt10 % 2 == 1) { // One operation: flip every mismatched index at once.
            ans = 1;
        } else if (cnt10 >= 2) { // cnt10 is even and >= 2, so we can split the mismatched
            ans = 2;
        } else if (cnt00 > 0 && cnt11 > 0) {
            // Borrow one already-correct "0" position and one already-
            // correct "1" position: include all mismatches plus these two
            ans = 2;
        } else {
            ans = -1;
        }
        cout << ans << '\n';
    }

    return 0;
}