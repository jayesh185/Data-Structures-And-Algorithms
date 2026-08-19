#include <bits/stdc++.h>
using namespace std;
//this si the codeforces 1859B . 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        long long mins = LLONG_MAX;
        long long smallest = LLONG_MAX;

        for (int i = 0;i <n; i++) {
            int m;
            cin >> m;
            long long firstmin = LLONG_MAX;
            long long secondmin = LLONG_MAX;
            for (int j = 0; j < m; j++) {
                long long x;
                cin >> x;
                if (x < firstmin) {
                    secondmin = firstmin;
                    firstmin = x;
                }
                else if (x < secondmin) secondmin = x; 
            }
            mins = min(mins, firstmin);
            sum += secondmin;
            smallest = min(smallest, secondmin);
        }
        long long answer = sum - smallest + mins;
        cout << answer << endl;
    }

    return 0;
}