class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; 
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int req = target - nums[i];
            if (m.find(req) != m.end()) {
                return {m[req], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
