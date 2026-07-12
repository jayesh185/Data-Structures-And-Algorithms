#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1862B . Sequence Game 
//simply done by basic logic that we can insert 1 where we find a valid spot . it is always vaid to insert 1
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> a;
        a.push_back(b[0]);
        for (int i = 1; i < n; i++) {
            if ((b[i - 1] < b[i] && b[i - 1] > 1) || (b[i - 1] > b[i]))
                a.push_back(1);
            a.push_back(b[i]);
        }
        cout << a.size() << "\n";
        for (int x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}