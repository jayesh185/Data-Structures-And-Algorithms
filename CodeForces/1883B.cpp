#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1883B . 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;          
        string s;
        cin >> s;

        unordered_map<char, int> m;
        for (char a : s) m[a]++;
        int oddcount = 0;
        for (const auto& a : m) {
            if (a.second % 2) oddcount++;
        }
        int mindeletions = max(0, oddcount - 1);
        if (k >= mindeletions) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}