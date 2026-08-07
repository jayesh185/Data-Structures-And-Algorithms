//this is the leecode . 1009. Complement of Base 10 Integer
class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;

        int mask = 0;
        int x = n;
        while (x > 0) {
            mask = (mask << 1) | 1;
            x >>= 1;
        }

        return n ^ mask;
    }
};