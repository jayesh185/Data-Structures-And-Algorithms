#include <bits/stdc++.h>
using namespace std; 

//this is the codeforces 1829B. 
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ; 
        cin >> n ;
        vector<int> a(n) ;
        for( int i = 0 ; i<n ; i++){
            cin >> a[i] ;
        }
        
        int ans =  0 ;
        if( a[0] == 0) ans++ ;
        
        int mx = ans;
        for( int i  = 1 ; i<n ; i++){
            if( a[i] == 0 &&  a[i-1] == 0) ans++ ;
            else if( a[i] ==1 ) ans = 0 ;
            else ans = 1;
            mx = max( mx , ans) ;
        }
        cout << mx << endl ;
    }

    return 0;
}