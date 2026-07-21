class Solution {
public:

    int helper(vector<int> &nums , int target , int st , int end){
        if(st>end) return -1;
        int mid = st+ (end-st)/2;

        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid]>target){
            return helper(nums, target , st , mid-1);
        }
        if(nums[mid]<target){
            return helper(nums, target , mid+1 , end);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return helper( nums, target , 0 , n-1);
    }
};