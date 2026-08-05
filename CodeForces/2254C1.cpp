#include <bits/stdc++.h>
using namespace std ;

//this is the  codeforces 2254C1 .
//dony by counting odd and even 1s iin the both the strings . bec all shift by 1 will not 
//change the parity of the 1s in the string . so if both the strings have same number of odd
// and even 1s then we can say yes else no .
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string a , b ;
        cin >> a ;
        cin >> b ;
        
        int eva = 0 , evb = 0;
        int oda = 0,  odb = 0 ;
        
        for( int i = 0 ; i<n ; i++){
            if( a[i] == '1'){
                if( i % 2 == 0){
                    eva++ ;
                }else oda++ ;
            }
        }
        
        for( int i = 0 ; i<n ; i++){
            if( b[i] == '1'){
                if( i % 2 == 0){
                    evb++ ;
                }else odb++ ;
            }
        }
        
        if( eva == evb && oda == odb) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}