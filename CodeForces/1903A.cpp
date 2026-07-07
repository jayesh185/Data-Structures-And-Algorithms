#include <bits/stdc++.h>
using namespace std;

//this is codeforces 1903A . halloumi boxes 
//simply used if k = 1 then check if array is sorted or not 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        if(k > 1){
            cout << "YES\n";
            continue;
        }
        bool ok = true;
        for(int i = 1 ; i < n ; i++){
            if(a[i] < a[i - 1]){
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}