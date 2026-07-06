#include <bits/stdc++.h>
using namespace std;

//this is codeforces 2236b . tatar tv .

//here simple concepy ye use kiya hai ki agar even ones hai tih ofc we can make it 0 by fliiping
//and agar odd hai toh we just guve false
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;
        for(int r = 0; r < k; r++){
            int ones = 0;
            for(int i = r; i < n; i += k){
                if(s[i] == '1') ones++;
            }
            if(ones % 2){
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}