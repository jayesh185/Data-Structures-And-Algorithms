#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    //this is the codeforces 1791C .
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            if (s[low] != s[high]) {
                low++;
                high--;
            }
            else break;
        }
        cout << max(0, high - low + 1) << endl;
    }

    return 0;
}