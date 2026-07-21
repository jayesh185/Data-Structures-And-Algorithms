#include <iostream>
#include <vector> 
using namespace std;

//this is leetcode 136 . Single Number 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0){
            return -1;
        }
        int ans = 0;
        for(int i = 0 ; i<nums.size() ;i++){
            ans = ans^nums[i]; // the concept is n^n = 0 and n^0 = n
        }
        return ans;
    }
};