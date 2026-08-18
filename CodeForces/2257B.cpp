#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 2257B .
long long moves(vector<long long>& a) {
    int n = a.size();
    if (n == 1)
        return a[0];
    long long ans = a[n - 1];
    for (int i = 0; i < n - 1; i++) {
        ans += (a[i] - a[i + 1] + 1);
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        long long bea = moves(a);
        long long ver = moves(b);

        if (bea >= ver)  cout << 1 << endl;
        else  cout << 2 << endl;
    }

    return 0;
}