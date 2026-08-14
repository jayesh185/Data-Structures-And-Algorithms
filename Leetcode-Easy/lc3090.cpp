class Solution {
public:
//this  is the  leetcode 3090. Maximum Length Substring With Two Occurrences .
    int maximumLengthSubstring(string s) {
        int n = s.size() ;
        unordered_map<char , int> m ;

        int maxans = -1 ;
        int low = 0 ;
        int high = 0 ;
        for( int high = 0 ; high<n ; high++){
            m[s[high]]++ ;
            while( m[s[high]] > 2){
                m[s[low]]--;
                low++ ;
            }
            maxans = max( maxans , high-low+1) ;
        }

        return maxans ;
    }
};