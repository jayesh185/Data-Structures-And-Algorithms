#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int pos = 0, neg = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x == 1)  pos++;
            else  neg++;
        }

        int ans = 0;
        while(neg > pos) {
            neg--;
            pos++;
            ans++;
        }
        if(neg %2 == 1) ans++;
        cout << ans << endl;
    }

    return 0;
}