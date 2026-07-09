// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std ;

//this is codeforces 1896A.  Jagged Swaps 
//simple we checked if first element is 1 it is always possible to make it sorted
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> nums(n) ;
        for( int i = 0 ; i<n ; i++){
            cin >> nums[i] ;
        }
        nums[0] == 1? cout << "yes" << endl  : cout << "no" << endl ;
    }

    return 0;
}