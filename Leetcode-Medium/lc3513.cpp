class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        //this  is the  leetcode 3513 . Number of unique XOR Triplets I .

        //simply done using observation of the first few nummbers . that  jitna bits me n represent ho raha hai utna bits ka sara numbers aayega ans me 
        int n = nums.size();
        if (n <= 2) {
            return n;
        }
        int ans = 1;
        while (ans <= n) {
            ans <<= 1;
        }
        return ans;
    }
};