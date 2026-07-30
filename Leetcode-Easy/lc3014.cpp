class Solution {
public:

//this is the leetcode 3014. Minimum Number of Pushes to Type Word I .
    int minimumPushes(string word) {
        int n = word.size() ;
        int ans = 0 ;
        int curr = 1 ;
        while( n>0){
            if( n >= 8){
                ans+= curr * 8 ;
                curr++ ;
                n-= 8 ;
            }else{
                ans += curr  * n ; 
                break ;  
            }
        }
        return ans ;
    }
};