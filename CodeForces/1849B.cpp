#include <bits/stdc++.h>
using namespace std ;
//this is the codeforces 1849B .
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        vector<int> nums(n) ;
        set<int, greater<int>> s;
        unordered_map <int , vector<int>> m ;
        for(int i = 0 ; i<n ; i++){
            cin >> nums[i] ;
            nums[i] = nums[i] %  k;
            if(nums[i] == 0) nums[i] = k ;
            s.insert(nums[i]) ;
            m[nums[i]].push_back(i) ;
        }

        for( auto a : s){
            auto b = m[a] ;
            for( auto c : b){
                cout << c+1 << " " ;
            }
        }
        cout << endl ;
    }

    return 0;
}