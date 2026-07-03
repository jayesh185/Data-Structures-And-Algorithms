class Solution {
public:
//this is the leetcode 33 . search in rotated sorted array 
    int helper( vector<int> &nums , int target , int st ,int end ){
        if(st>end){
            return -1;
        }
        int mid = st+ (end-st)/2;
        if(nums[mid] == target){
            return mid;
        }
        if (nums[st] <= nums[mid]) {  
            if( nums[st] <= target && target <= nums[mid] ) {
                return helper(nums , target ,st , mid-1);
            }else { 
                return helper(nums , target ,mid+1 ,end);}
        }else { 
            if (nums[mid] <= target && target <=  nums[end]){
                return helper(nums , target ,mid+1 , end);
            }else { 
                return helper(nums , target ,st , mid-1);}
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return helper(nums , target ,0 , n-1);
        
    }
};