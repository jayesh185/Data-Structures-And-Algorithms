#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1807D . simply done using prefix sum 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> pre(n + 1, 0);
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            pre[i + 1] = pre[i] + nums[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            long long oldRange = pre[r] - pre[l - 1];
            long long len = r - l + 1;
            long long newSum = pre[n] - oldRange +len * 1LL* k;

            if (newSum % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;;
        }
    }

    return 0;
}