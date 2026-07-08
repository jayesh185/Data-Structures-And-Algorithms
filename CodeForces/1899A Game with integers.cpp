#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1899A . Game with Integers .
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 3 == 0)
            cout << "Second" << "\n";
        else
            cout << "First" << "\n";
    }
    return 0;
}