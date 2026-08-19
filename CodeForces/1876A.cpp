#include <bits/stdc++.h>
using namespace std;
//thhis is the codeforces 1876A
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n);
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            v[i] = {b, a[i]};
        }
        sort(v.begin(), v.end());

        long long cost = p;
        int people = n - 1;

        for (int i = 0; i < n && people > 0; i++) {
            int sharecost = v[i].first;
            int capacity = v[i].second;
            if (sharecost >= p) {
                cost += 1LL * people * p;
                people = 0;
                break;
            }
            int canshare = min(capacity, people);
            cost += 1LL * canshare * sharecost;
            people -= canshare;
        }

        cout << cost << endl;
    }

    return 0;
}