#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1859A .
///we simply used a logic that the smallest number wont haave any  divisor right . so we put in b . 
// //and all other in c .
//
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int mn = INT_MAX;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        vector<int> b, c;
        for(int x : a) {
            if(x == mn)
                b.push_back(x);
            else
                c.push_back(x);
        }
        if(c.empty()) {
            cout << -1 << "\n";
            continue;
        }
        cout << b.size() << " " << c.size() << "\n";
        for(int x : b)
            cout << x << " ";
        cout << "\n";
        for(int x : c)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}