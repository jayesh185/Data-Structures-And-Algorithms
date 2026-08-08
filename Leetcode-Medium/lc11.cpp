class Solution {
public:
//this is the leetcode 11. Container With Most Water .
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while(left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int water = width * h;
            ans = max(ans, water);
            if(height[left] < height[right]) left++;
            else right--;
            
        }

        return ans;
    }
};