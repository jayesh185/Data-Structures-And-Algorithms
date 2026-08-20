#include <bits/stdc++.h>
using namespace std;
//thiss is rhe codeforces 1831B . 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++)  cin >> b[i];
        
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            mp1[a[i]] = max(mp1[a[i]], j - i);
            i = j;
        }
        for (int i = 0; i < n; ) {
            int j = i;
            while(j<n && b[j]== b[i])j++;
            mp2[b[i]] = max(mp2[b[i]], j - i);
            i = j;
        }
        int ans = 0;
        for (auto it : mp1) {
            int value = it.first;
            int len1 = it.second;
            int len2 = mp2[value];
            ans = max(ans, len1 + len2);
        }

        for (auto it : mp2) {
            int value = it.first;
            int len2 = it.second;
            int len1 = mp1[value];
            ans = max(ans, len1 + len2);
        }
        cout << ans << endl;
    }

    return 0;
}