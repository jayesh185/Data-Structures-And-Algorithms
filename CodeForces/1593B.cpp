#include <bits/stdc++.h>
using namespace std;
//this is the codeforces 1593B . 
//simply findding a 0 or 5 and then searching for its corresponding 0,5 or 2,7 
int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        int sz = s.size();
        int ans = sz;

        for(int i = sz - 1; i >= 0; i--) {
            if(s[i] == '0') {
                for(int j = i - 1; j >= 0; j--) {
                    if(s[j] == '0' || s[j] == '5') {
                        ans = min(ans, (sz - 1 - i) + (i - 1 - j));
                        break;
                    }
                }
            }

            if(s[i] == '5') {
                for(int j = i - 1; j >= 0; j--) {
                    if(s[j] == '2' || s[j] == '7') {
                        ans = min(ans, (sz - 1 - i) + (i - 1 - j));
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}