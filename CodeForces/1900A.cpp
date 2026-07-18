#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1900A . Cover in waters .

//here simple ek chis we used that agar 3 consecutive points hai toh it will create infinitte water
//and nai hai toh the totaldots will be the anss
int main() {
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;

       int curr = 0 ;
       int totaldots = 0 ;
       int maxrun = 0 ;
       for( char a : s){
           if( a  == '.'){
               curr++ ;
               totaldots++ ;
           }
           else{
               if( curr > maxrun) maxrun = curr ;
               curr = 0 ;
           }
       }
       if( curr > maxrun) maxrun = curr ;

       int ans ;
       if( maxrun >= 3) ans = 2 ;
       else ans = totaldots ;

       cout << ans << endl ;
    }
    return 0;
}