#include <bits/stdc++.h>
using namespace std;

//this is  the codeforces 1805A . simply done using property of 0 xor x = x and x xor x = 0 

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int xo = 0 ;
        for( int i = 0  ; i<n ; i++){
            int a; 
            cin >> a ;
            xo = xo ^ a ;
        }
        if( n % 2 ) cout << xo << endl ;
        else{
            if( xo == 0) cout << "1" << endl ;
            else cout << "-1" << endl ;
        }
    }

    return 0;
}