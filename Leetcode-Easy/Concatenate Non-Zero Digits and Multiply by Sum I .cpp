class Solution {
public:
//this is the leetcode 3754. Concatenate Non-Zero Digits and Multiply by Sum I .

//simply used concept of getting individual digits of a number 
    long long sumAndMultiply(int n) {
        if( n == 0)return  0;
        string x = "" ;
        long long sum  = 0 ;
        while( n!= 0){
            int a = n% 10 ;
            if( a != 0) x.push_back( a + '0') ;
            sum += a ;
            n = n/10 ;
        }

        reverse(x.begin() , x.end()) ;
        long long a = stoi(x) ;
        return 1LL * a * sum;
    }
};