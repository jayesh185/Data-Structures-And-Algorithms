#include <bits/stdc++.h>
using namespace std;

//this is the codeofrces 1380A . 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        vector<int> left(n, -1), right(n, -1);

        set<pair<int, int>> s;
        for(int i = 0; i < n; i++) {
            auto it = s.lower_bound({p[i], -1});
            if (it != s.begin()) {
                --it;
                left[i] = it->second;
            }
            s.insert({p[i], i});
        }

        s.clear();

        for(int i = n - 1; i >= 0; i--){
            auto it = s.lower_bound({p[i], -1});
            if(it != s.begin()) {
                --it;
                right[i] = it->second;
            }
            s.insert({p[i], i});
        }

        bool found = false;
        for(int j = 0; j < n; j++) {
            if(left[j] != -1 && right[j] != -1){
                cout << "YES" << endl;

                cout << left[j] + 1 << " "  << j + 1 << " "<< right[j] + 1 << endl;
                found = true;
                break;
            }
        }

        if(!found)
            cout << "NO" << endl;
    }

    return 0;
}