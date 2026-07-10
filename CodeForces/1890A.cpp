#include <bits/stdc++.h>
using namespace std ;

//this is codeforces 1890A . doremy paint 3 .
int main() {
    int t ;
    cin >> t ;
    while(t--){

        int n ;
        cin >> n ;
        map<int , int> mp ;

        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            mp[x]++ ;
        }

        if(mp.size() == 1){
            cout << "YES" << endl ;
            continue ;
        }

        if(mp.size() > 2){
            cout << "NO" << endl ;
            continue ;
        }

        vector<int> freq ;
        for(auto it : mp){
            freq.push_back(it.second) ;
        }

        int odd = (n + 1) / 2 ;
        int even = n / 2 ;
        if((freq[0] == odd && freq[1] == even) || (freq[0] == even && freq[1] == odd)){
            cout << "YES" << endl ;
        }
        else  cout << "NO" << endl ;
    }

    return 0 ;
}