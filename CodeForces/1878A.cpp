#include <bits/stdc++.h>
using namespace std;

//this is codeforces 1878A . 

//the constraints in this are small . so we just do the brute force here .
//we check for every subarray if k has highest freq in hat subarray or not 
int main() {
    int t;
    cin >> t;
    while(t--) {

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        bool ok = false;
        for(int l = 0; l < n && !ok; l++) {
            vector<int> freq(101, 0);
            for(int r = l; r < n; r++) {
                freq[a[r]]++;
                int mx = 0;
                for(int x = 1; x <= 100; x++) {
                    if(x == k) continue;
                    mx = max(mx, freq[x]);
                }
                if(freq[k] > mx) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}