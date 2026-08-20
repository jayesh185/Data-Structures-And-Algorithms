#include <bits/stdc++.h>
using namespace std;

//this is the  codeforces 1840C . 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        long long ans = 0;
        long long days = 0;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp <= q) days++;
            else {
                if (days>= k)  ans +=(days -k+ 1)* (days- k+2)/2;
                days = 0;
            }
        }
        if (days >= k) ans +=(days - k + 1) * (days -k+2)/2;
        cout << ans << endl;
    }

    return 0;
}