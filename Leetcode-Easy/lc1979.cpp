class Solution {
public:
    
    //this is leetcode 1979 . Find Greatest Common Divisor of Array
    //using the euclidean algorithm to find the GCD - gcd(a,b) = gcd( b, a%b)
    int gcd(int a, int b){
        while(b){
            int temp = b;
            b= a % b;
            a = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int x : nums){
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        return gcd(mini, maxi);
    }
};