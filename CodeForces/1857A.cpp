#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1857A . Array Colouring 
//we simmply used a logic that agar sum even hai toh we can split . if not we cannot . 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int sum = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        if(sum % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}