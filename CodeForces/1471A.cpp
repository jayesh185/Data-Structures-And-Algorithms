#include <bits/stdc++.h>
using namespace std;

//this  is the codeforces 1471A. 
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        long long maxnum = 0;
        long long sum = 0;

        for(int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a;
            maxnum += ceil((double)a / x);
        }

        long long minnum = ceil((double)sum / x);
        cout << minnum << " " << maxnum << endl;
    }

    return 0;
}