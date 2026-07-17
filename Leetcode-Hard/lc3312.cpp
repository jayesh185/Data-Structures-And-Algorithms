class Solution {
public:
//this is the leetcode 3312 . sorted gcd pair queries .

    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for(int x : nums) freq[x]++;

        //cnt[i] = Number of elements in nums that are divisible byi.
        vector<long long> cnt(mx + 1, 0);
        for(int i = 1; i <= mx; i++) { //using sieve to calculate cnt[i] = number of elements in nums that are divisible by i.
            for(int j = i; j <= mx; j += i) cnt[i] += freq[j];
        }

        vector<long long> exact(mx + 1, 0); //Number of pairs whose GCD is a multiple of i.

        for(int i = mx; i >= 1; i--) {
            exact[i] = cnt[i] * (cnt[i] - 1) / 2;
            for(int j = i + i; j <= mx; j += i) //this loop is  for making exact[i]  contain only
            //those pairs which has gcd i . and not multiple of i 
                exact[i] -= exact[j];
        }

        vector<long long> pref(mx + 1, 0);
        for(int i = 1; i <= mx; i++)
            pref[i] = pref[i - 1] + exact[i];

        vector<int> ans;

        for(long long q : queries) {
            int l = 1, r = mx;
            while(l < r) {
                int mid = (l + r) / 2;
                if(pref[mid] > q)  r = mid;
                else l = mid + 1;
            }
            ans.push_back(l);
        }

        return ans;
    }
};