class Solution {
public:
//this is the leetcode 2390. Removing Stars From a String . 
    string removeStars(string s) {
        int n = s.size() ;
        int cnt = 0 ;
        for( int i =  n-1 ; i>=0 ; i--){
            if( s[i] =='*'){
                cnt++ ;
                s.erase(i,1) ;
                continue ;
            }
            if( cnt > 0){
                s.erase(i,1);
                cnt-- ;
            }
        }

        return s  ;
    }
};