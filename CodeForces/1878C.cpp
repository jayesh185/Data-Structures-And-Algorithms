#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1878C .
//done using the concept that the value lies between the min value and max value
///the min value is given as sum of first  k elements and max is sum of last k elements
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        long long mn = k * (k + 1) / 2;
        long long mx = k * (2 * n - k + 1) / 2;
        if (x >= mn && x <= mx) cout << "YES" << endl;
        else cout << "NO" << endl ;
    }

    return 0;
}