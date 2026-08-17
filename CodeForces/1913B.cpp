#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1913B
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int total0 = 0, total1 = 0;

        for (char c : s) {
            if (c == '0') total0++;
            else total1++;
        }
        int required0 = 0;
        int required1 = 0;
        int maxKeep = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') required0++;
            else required1++;
            if (required0 <= total0 && required1 <= total1)  maxKeep = i + 1;
            else break;
        }
        cout << s.size() - maxKeep << endl;
    }

    return 0;
}