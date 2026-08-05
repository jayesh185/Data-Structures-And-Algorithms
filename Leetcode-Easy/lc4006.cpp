class Solution {
public:
//this is the leetcode 4006 . count valid prefixes 
    int countValidPrefixes(string s) {
        int n = s.size() ;
        int one = 0;
        int zero = 0;
        int ans = 0 ;
        for( int i = 0  ; i<n ; i++){
            if(s[i] == '0') zero++ ;
            else one++ ;
            if( abs(one- zero) <=1) ans++ ;
        }

        return ans ;
    }
};