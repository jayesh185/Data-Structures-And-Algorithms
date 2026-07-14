#include <bits/stdc++.h>
using namespace std;

//this  is the codeforces 1858A . Buttons .
//we simply  used that first whoever has moasat buttons  will  surely win . no matter c  .
//and if they have equal . then if c is odd toh anna winn else katie
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a > b)
            cout << "First\n";
        else if (a < b)
            cout << "Second\n";
        else{
            if (c % 2) cout << "First\n";
            else  cout << "Second\n";
        }
    }

    return 0;
}