#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1472B . 
//dont by simply doing by cases . if sum is oddd it is not possible . if even then 
//if even two then also yes . and if more than one odd two then also yes .
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int one = 0, two = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) one++;
            else two++;
        }

        int sum = one + 2 * two;
        if (sum % 2) cout << "NO" << endl;
        else {
            if (two % 2 == 0)   cout << "YES" << endl;
            else {
                if (one >= 2) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }

    return 0;
}