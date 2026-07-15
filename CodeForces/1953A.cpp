#include<bits/stdc++.h>
using namespace std;

//this is the codeforces 1953A . 
//simply we first did intial sorted check for array and then find out that what will be the min diff 
//between any 2 elements
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        bool ok = true;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                ok = false;
                break;
            }
        }
        if(!ok) {
            cout << 0 << "\n";
            continue;
        }
        long long ans = LLONG_MAX;

        for(int i = 0; i < n - 1; i++) {
            ans = min(ans, (a[i + 1] - a[i]) / 2 + 1);
        }
        cout << ans << "\n";
    }

    return 0;
}