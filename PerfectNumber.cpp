class Solution {
public:
    bool checkPerfectNumber(int n) {
        if (n == 1) return false;
        int sum = 0;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i) continue;
            sum += i;
            if (i != 1 && n / i != i) sum += n / i;
            if (sum > n) return false;
        }
        return sum == n;
    }
};
