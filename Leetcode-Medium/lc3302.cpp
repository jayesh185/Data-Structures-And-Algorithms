class Solution {
public:
//this  is the leetcode 3302. Find the Lexicographically Smallest Valid Sequence ..
//we store the last occurence of every charcter of b .
//and then we see travresing thorugh each charcter of a if itd poddiblrr to build the word b .
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<int> last(m, -1);

        int j = m - 1;

        for(int i = n - 1; i >= 0; i--) {
            if(j >= 0 && word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }
        }

        vector<int> ans;

        int used = 0;
        j = 0;

        for(int i = 0; i < n; i++) {
            if(j == m)
                break;
            if(word1[i] == word2[j] || (!used && (j == m - 1 || i < last[j + 1]))) {
                if(word1[i] != word2[j]) used = 1;
                ans.push_back(i);
                j++;
            }
        }

        if(j == m)
            return ans;

        return {};
    }
};