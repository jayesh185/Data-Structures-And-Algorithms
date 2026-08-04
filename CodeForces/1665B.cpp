#include <bits/stdc++.h>
using namespace std  ;

//this is the codeforces 1665B . 
//simply done by doubling the max frequency and adding the remaining elements to it.
int main() {
    int t ;;
    cin >> t ;
    while(t--){
        unordered_map< int  , int> m ;
        int n ;
        cin >> n ;
        int maxnum = 0 ;
        for( int i = 0 ; i<n ; i++){
            int a ;
            cin >> a ;
            m[a]++ ;
            if(m[a] > m[maxnum] ) maxnum = a ;
        }
        
        int curr  = m[maxnum] ;
        int op = 0 ;
        while( curr < n){
            if( 2* curr <= n){
                op += 1 + curr ;
                curr *= 2 ;
            }else{
                int needed = n -  curr ;
                op += 1 + needed ;
                curr += needed ;
            }
        }
        
        cout << op << endl ;
        
    }
    return 0;
}