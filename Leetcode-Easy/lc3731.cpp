class Solution {
public:
//this is the leetcode 3731 . Find Missing Elements in an array .
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }

        vector<int> ans;

        for (int i = mini; i <= maxi; i++) {
            if (st.find(i) == st.end()) ans.push_back(i);
            
        }
        return ans;
    }
};