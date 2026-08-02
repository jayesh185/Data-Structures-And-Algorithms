#include <bits/stdc++.h>
using namespace std;
//this is the codeforces 1696B . 
//simply donne by appraochh that max is  always  2 . and we check if one segment is possible which is aalways when nums[i] is not 0
//and becomes 2 if any other 0 comes . 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int segments = 0;
        for(int i =0; i < n; i++) {
            if(nums[i] !=0) {
                if(i == 0 || nums[i- 1] == 0)
                    segments++;
            }
        }
        if(segments == 0)
            cout << 0 << endl;
        else if(segments == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}