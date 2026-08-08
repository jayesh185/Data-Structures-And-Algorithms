class Solution {
public:

//this is the leetcode 1291 . Sequential Digits 
//simple used loops or generation of starting numbers and sequence of 1's . to add into the number 
    vector<int> sequentialDigits(int low, int high) {
        int sz = to_string(low).size();

        int st = 0;
        for (int i = 1; i <= sz; i++) st = st * 10 + i;
        int inc = 0;
        for (int i = 0; i < sz; i++) inc = inc * 10 + 1;

        vector<int> ans;

        while (st <= high) {
            if (st >= low)
                ans.push_back(st);
            if (st % 10 == 9) {
                sz++;
                if (sz > 9)
                    break;
                st = 0;
                for (int i = 1; i <= sz; i++) st = st * 10 + i;
                inc = 0;
                for (int i = 0; i < sz; i++) inc = inc * 10 + 1;
            }
            else {
                st += inc;
            }
        }

        return ans;
    }
};