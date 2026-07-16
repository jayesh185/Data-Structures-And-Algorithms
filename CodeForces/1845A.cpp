#include <bits/stdc++.h>
using namespace std; 

//this  is the codeforces 1845A. Forbiddden integer

//here e have multiple edge cases that are handled earlier .

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n , k , x ;
        cin >> n >> k >> x ;
        
        if( k == 1){
            cout << "no" << endl ;
            continue ;
        }
        
        if( k == 2 && x == 1){
            if( n % 2){
                cout << "no"  << endl;
            }else{
                cout << "yes"  << endl  ;
                int num = n/2 ;
                cout << num << endl  ;
                for( int i = 0; i<num ; i++){
                    cout << "2" << " " ;
                }
                cout << endl ;
            }
            continue ;
        }
        
        cout << "yes" << endl ;
        if( x == 1){
            int two = n / 2 ;
            cout << two << endl ;
            
            if( n % 2){ //odd case
                for( int i =0 ; i< two-1 ; i++){
                    cout << "2" << " " ;
                }
                cout << "3" << endl; 
            }else{
                for( int i =0 ; i< two ; i++){
                    cout << "2"  << " ";
                }
                cout << endl; 
            }
            
        }else{
            cout << n << endl ;
            for( int i = 0 ; i<n ;  i++){
                cout << "1" << " " ;
            }
            cout << endl ;
        }
    }

    return 0;
}