#include <bits/stdc++.h>
using namespace std;

//this is codeforces 2238A . another puzzle from papyrus

//here simple concept we used is we can either reorder or we dont . not reorder case we simplly found the answr
//and in reorder we sorted and found the answer . and then at last comapred both to gwet final
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int cost1 = 0;
        bool ok1 = true;

        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                ok1 = false;
                break;
            }
            cost1 += a[i] - b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int cost2 = c;
        bool ok2 = true;
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                ok2 = false;
                break;
            }
            cost2 += a[i] - b[i];
        }
        if(!ok1 && !ok2){
            cout << -1 << '\n';
        }else if(ok1 && ok2){
            cout << min(cost1, cost2) << '\n';
        }else if(ok1){
            cout << cost1 << '\n';
        }else{
            cout << cost2 << '\n';
        }
    }

    return 0;
}