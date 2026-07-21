#include <bits/stdc++.h>
using namespace std;

//tis is the codeforces 1789A .
//we simply used a logic that agar koi bhi 2 elementa ka gcd 2 ya usse kam hua tab hi beautiful ho paayega  

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        bool ok = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(a[i], a[j]) <= 2) {
                    ok = true;
                }
            }
        }
        
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}