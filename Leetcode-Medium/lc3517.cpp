class Solution {
public:
//this is the  leetcode 3517 . Smallest palindromic rearrangement 1 .
//simpy done by usinng one proerty that odd char appears only one time . so add it at last 
    string smallestPalindrome(string s) {
        map<char, int> m;
        for (char c : s) m[c]++;

        string temp;
        char odd;
        bool hai = false;

        for (auto &[ch, cnt] : m) {
            temp += string(cnt / 2, ch);
            if (cnt % 2) {
                odd = ch;
                hai = true;
            }
        }

        string rev = temp;
        reverse(rev.begin(), rev.end());

        return hai ? temp + odd + rev : temp + rev;
    }
};