#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1850D . //simply done by sliding window .
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        int maxrun = 1, curr = 1;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i-1] <= k) curr++;
            else curr = 1;
            maxrun = max(maxrun, curr);
        }
        cout << n - maxrun << endl;
    }
}