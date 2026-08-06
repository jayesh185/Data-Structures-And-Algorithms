class Solution {
public:
//this  is the leetcode 3345. Smallest Divisible Digit Product I.
    bool divisible( int n , int t){
        if( n ==0) return true ;
        int prod = 1 ;
        while(n != 0){
            int m = n % 10 ;
            prod *= m ;
            n = n/ 10 ;
        }
        if( prod % t == 0) return true ;
        return false;
    }


    int smallestNumber(int n, int t) {
        while(n){
            if(divisible(n , t)) return n ;
            n++ ;
        }
        return t ;
    }

 

};