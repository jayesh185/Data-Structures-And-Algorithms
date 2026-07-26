#include <bits/stdc++.h>
using namespace std;

///this  is the codeforces 2250B .
//simply done by filling k/2 ones and  then k - k/2 zeroes .and we always
///require one extra element to make pair  so wwe make loop +1 .
//and after filling 1s and 0s we put 1s and 0s in alternate sequence to make string length n .
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == n - 1) {
            cout << -1 << endl;
            continue;
        }
        string ans;
        for (int i = 0; i < k / 2 + 1; i++) ans.push_back('1');
        for (int i = 0; i < k - k / 2 + 1; i++) ans.push_back('0');

        char cur = '1';
        while ((int)ans.size() < n) {
            ans.push_back(cur);
            cur = (cur == '1' ? '0' : '1');
        }
        cout << ans << endl;
    }

    return 0;
}