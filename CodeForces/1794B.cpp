// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//this is codeforces 1794B .
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> nums(n) ;
        for(  int i = 0; i<n ; i++){
            cin >> nums[i] ;
        }
        
        for(int i = 0; i < n; i++){
            if(nums[i] == 1) nums[i] = 2;
        }
        
        for(int i = 0; i < n - 1; i++){
            if(nums[i + 1] % nums[i] == 0){
                nums[i + 1]++;
            }
        }
                
        for( int i = 0 ; i<n ; i++){
            cout << nums[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}