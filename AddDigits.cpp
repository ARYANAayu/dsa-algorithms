class Solution {
public:
    int addDigits(int n) {
        while (n > 9) {
            int next = 0;
            for (; n; n /= 10) next += n % 10;
            n = next;
        }
        return n;
    }
};
