class Solution {
public:
    int divide(int dividend, int divisor) {
        if (!divisor) return INT_MAX;  // Handle divide-by-zero error
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; // Handle overflow case
        if (dividend == INT_MIN && divisor == 1) return INT_MIN; // Handle special case
        
        bool pos1 = dividend > 0, pos2 = divisor > 0, pos = !(pos1 ^ pos2);
        if (pos1) dividend = -dividend;
        if (pos2) divisor = -divisor;
        int q = 0, d = divisor, t = 1;
        
        while (t > 0 && dividend < 0) {
            if (dividend - d <= 0) {
                dividend -= d;
                q -= t;
                if (d >= INT_MIN >> 1) {
                    t <<= 1;
                    d <<= 1;
                }
            } else {
                d >>= 1;
                t >>= 1;
            }
        }
        
        return pos ? -q : q;
    }
};
