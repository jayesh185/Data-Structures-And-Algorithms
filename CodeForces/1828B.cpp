#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1828B .
//siimmpply used logic that the taking the gcd of how much each unmatched element has to move 
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n+1); //shifting bec element starting from 1 .
        for (int i = 1; i <= n; i++) cin >> p[i];
        long long g = 0;
        for (int i = 1; i <= n; i++) {
            if (p[i] != i) {
                long long d = abs(p[i] - i);
                g = __gcd(g, d);
            }
        }
        cout << g << "\n";
    }
    return 0;
}