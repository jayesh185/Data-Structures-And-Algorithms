#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1373B
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int total = 0;
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 0; i < (int)s.size() - 1; i++) {
                if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')) {
                    s.erase(i, 2);
                    total++;
                    changed = true;
                    break;
                }
            }
        }
        if (total % 2 == 1) cout << "DA" << endl;
        else  cout << "NET" << endl;
    }

    return 0;
}