#include <bits/stdc++.h>
using namespace std;

//this is the codeofces 182B . //simply donne with logic of 1 and 0s . 
long long power(int base, int exp) {
    if( exp == 0) return 1;
    long long ans = 1;
    for(int i = 0; i < exp; i++) {
        ans *= base;
    }
    return ans;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int sum = 0;
        vector<int> nums(n) ;
        int ones  = 0;
        int zeros = 0 ;
        for( int i = 0 ; i<n ;  i++){
            cin >> nums[i] ;
            sum += nums[i] ;
            if( nums[i] == 1) ones++ ;
            if( nums[i] == 0) zeros++ ;
            
        }
        
        cout << ones * power(2, zeros) << endl; 
    }

    return 0;
}