class Solution {
public:
//this is the leetcode 3867 . Sum of GCD  of formed pairs 
//simply did step  by step .

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefixgcd( n ,  0);
        int mx = INT_MIN;

        for( int i = 0 ; i<n ; i++){
            mx = max( mx , nums[i]) ;
            prefixgcd[i] = 1LL * gcd( nums[i] , mx);
        }

        sort( prefixgcd.begin() , prefixgcd.end());
        int low = 0 ;
        int high = n-1;
        long long ans = 0;

        while( low < high){
            ans+= 1LL * gcd( prefixgcd[low] , prefixgcd[high]);
            low++;
            high--;
        }

        return ans ;
    
        

        
    }
};