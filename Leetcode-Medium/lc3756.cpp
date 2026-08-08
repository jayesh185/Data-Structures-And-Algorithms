class Solution {
public:
//this is the leetcode 3756 . Concatenate Non-Zero Digits and Multiply by Sum II .
//here we maiinlly used some trick to get the number in lless time  . which is like done by using math here
//we stired numbers at each indexes formed . and then when we need in range 
//then we subtrcated by mutliying lower number with power of 10 . to get the exCT NUMBER IN RANGE
    const int MOD = 1e9 + 7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();

        vector<long long> pow10(n + 1);
        pow10[0] = 1;
        for(int i = 1;i <= n;i++){
            pow10[i] = (pow10[i -1] * 10) % MOD;
        }

        vector<int> prefSum(n + 1, 0); // prefix sum of digits
        vector<int> cnt(n + 1, 0); //to maintain the count of non zero digits
        vector<long long> pref(n + 1, 0); //to maintain the number formed by non zero digits

        for(int i = 0; i < n; i++){
            int digit = s[i] - '0';
            prefSum[i + 1] = prefSum[i] + digit;
            cnt[i + 1] = cnt[i];
            pref[i + 1] = pref[i];

            if(digit != 0){
                cnt[i + 1]++;
                pref[i + 1] = (pref[i] * 10 + digit) % MOD;
            }
        }


        vector<int> ans;
        for(auto &q : queries){
            int l = q[0];
            int r = q[1] + 1;
            int digitsum = prefSum[r] - prefSum[l];
            int len = cnt[r] - cnt[l];
            long long number = (pref[r] - (pref[l] * pow10[len]) % MOD + MOD) % MOD;
            ans.push_back((number * digitsum) % MOD);
        }

        return ans;
    }
};