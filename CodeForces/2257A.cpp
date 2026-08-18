#include <bits/stdc++.h>
using namespace std;

//this is  the codeforces 2257A .
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> a;
        vector<string> b;

        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            a.push_back(temp);
        }

        for (int i = 0; i < m; i++) {
            string temp;
            cin >> temp;
            b.push_back(temp);
        }

        set<char> s;
        for (string p : a) {
            s.insert(p[0]);
        }

        bool hai = true;
        for (string p : b) {
            for (char c : p) {
                c = tolower(c);
                if (s.find(c) == s.end()) {
                    hai = false;
                    break;
                }
            }
            if (!hai)  break;
        }

        if (hai)  cout << "YES" << endl;
        else   cout << "NO" << endl;
    }

    return 0;
}