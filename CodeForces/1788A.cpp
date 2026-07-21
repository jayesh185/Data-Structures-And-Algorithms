#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1788A . 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count = 0 ;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if( a[i] == 2) count++ ;
        }
        if( count == 0) {
            cout << "1" << endl;
            continue ;
        }
        int curr = 0 ;
        bool ok =  true ;
        for( int i = 0 ; i<n-1 ; i++){
            if( a[i] == 2){
                curr++;
                if( curr == count - curr){
                    cout << i+1 << endl ;
                    ok = false;
                    break;
                }
            }
        }
        if(ok) cout << "-1" << endl ;
    }
    return 0;
}