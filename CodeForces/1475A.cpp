#include <bits/stdc++.h>
using namespace std;
//this is the codeforces 1475A .
int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        if((n & (n - 1)) == 0)   cout << "NO"  << endl;
        else  cout << "YES" << endl;
    }

    return 0;
}