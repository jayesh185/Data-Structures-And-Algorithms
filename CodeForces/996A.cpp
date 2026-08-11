#include <bits/stdc++.h>
using namespace std;

//this is codeforces 996A . 
int main() {
        int n ;
        cin >> n ;
        int ans = 0;
        vector<int> coins = {100, 20, 10, 5, 1};
        
        for (int c : coins) {
            ans += n / c;
            n %= c;
        }
        
        cout << ans;
    

    return 0;
}