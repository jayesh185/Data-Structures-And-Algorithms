#include <bits/stdc++.h>
using namespace std;

//this is the codeforces 1726A .
//simpy done by checking adjacent elements max and first and last element diff with all other element
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int ans = nums[n - 1] - nums[0];
        for (int i = 1; i < n; i++) {
            ans = max(ans, nums[i] - nums[0]);
        }
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, nums[n - 1] - nums[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, nums[i] - nums[i + 1]);
        }
        cout << ans << endl;
    }

    return 0;
}