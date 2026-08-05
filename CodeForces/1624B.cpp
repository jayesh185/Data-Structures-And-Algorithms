#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1624B .
//simply done by am property of ap 
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;
        long long remc = 2 * b - a;
        if(remc > 0 && remc % c == 0) ok = true;
        

        long long remb = a + c;
        if(remb % (2 * b) == 0) {
            long long m = remb / (2 * b);
            if (m > 0) ok = true;
        }

        long long rema = 2 * b - c;
        if(rema > 0 && rema % a == 0)  ok = true;
        
        if(ok) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}