#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1783A. 
//we simply made the largeest  element at first place
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        if(a[0] == a[n-1]){
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a[n-1]; 
            for(int i = 0; i < n-1; i++) cout << ' ' << a[i]; // rest ascending
            cout << '\n';
        }
    }
}