#include <bits/stdc++.h>
using namespace std ;

//thiss is codeforces 1831A . we simply made all the numbers equal using n - curr +1 
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n) ;
        for( int i = 0 ; i <n ; i++){
         cin >> a[i] ; ;
        }
        for( int i = 0; i<n ; i++){
         cout << n - a[i] + 1 << " " ;
        }
        cout << endl ;
         
    }
}