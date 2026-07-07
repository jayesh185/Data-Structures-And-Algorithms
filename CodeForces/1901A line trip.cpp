#include <bits/stdc++.h>
using namespace std;

//this is codeforces 1901A . Line Trip
//simpy found the maxdiff between the stations . and also for the last station we need to consider the 
//distance from the last station to the end of the line which is 2*(x - nums[n-1]) . 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int>nums(n) ;
        for( int i = 0 ; i<n ; i++){
            cin >> nums[i] ;
        }
        if( n >= x){
            cout << "1" << endl ;
        }
        
        int maxnum = nums[0] ;
        for( int i = 1 ; i<n ; i++){
            maxnum = max( maxnum , nums[i] - nums[i-1]) ;
        }
        maxnum = max( maxnum , 2 * (x - nums[n-1]));
        cout << maxnum  << endl ;
    }

    return 0;
}