#include <bits/stdc++.h>
using namespace std;

//thiss  is he coodeforces 1814A . simply done using logic .
int main() {
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        if(k % 2 == 0){
            if(n % 2 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}