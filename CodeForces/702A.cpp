#include <bits/stdc++.h>
using namespace std ;

//this is the codeforces 702A . 
int main() {
    int n ;
    cin >> n ;
    vector<int> nums(n) ;
    for( int i = 0; i<n ; i++){
        cin >> nums[i] ;
    }
    
    int maxnum = 1;
    int curr = 1 ;
    for( int i = 1 ; i<n;  i++){
        if( nums[i] > nums[i-1]) curr++ ;
        else {
            maxnum = max( maxnum , curr) ;
            curr = 1 ;
        }
    }
    maxnum = max( maxnum , curr) ;
    cout << maxnum << endl;
    

    return  0 ;
}