#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1904A .
//done using offset logic . and also we alreeady know which positions will be attacking both king and queen
//so just storing that in set . and seeing if that value exists .
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<long long,long long>> S;
        S.insert({ a,  b});
        S.insert({ a, -b});
        S.insert({-a,  b});
        S.insert({-a, -b});
        S.insert({ b,  a});
        S.insert({ b, -a});
        S.insert({-b,  a});
        S.insert({-b, -a});

        long long dx = xk - xq ;
        long long dy = yk- yq;

        int count = 0;
        for (auto &o1 : S) {
            long long ox = o1.first  - dx;
            long long oy = o1.second - dy;
            if (S.count({ox, oy})) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}