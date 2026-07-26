#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 2250A .
//simply done using logic that all odd positions have to move right and all even shave to  move left .
//so we take max of even and min of odd . and if some number exist between them it is possible else not
int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;

        vector<long long> w(n);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }
        if (n % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }
        long long minR = 2000000000; 
        long long maxL = -1;          
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (w[i] < minR) {
                    minR = w[i];
                }
            } else if(w[i] > maxL)  maxL = w[i];
        }
        if (minR - maxL >= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}