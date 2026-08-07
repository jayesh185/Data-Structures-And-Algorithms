#include <bits/stdc++.h>
using namespace std;

//this  is the codeforces 1606A .
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ab = 0, ba = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'a' && s[i + 1] == 'b') {
                ab++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')  ba++;
        }

        if (ab > ba)  s[s.size() - 1] = 'a';
        else if (ba > ab) s[s.size() - 1] = 'b';
        
        cout << s << endl;
    }

    return 0;
}