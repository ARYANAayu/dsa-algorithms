class Solution {
public:
    int findPeakElement(vector<int>& A) {
        int L = 0, R = A.size() - 1;
        while (L <= R) {
            long M = (L + R) / 2, left = M == 0 ? LONG_MIN : A[M - 1], right = M == A.size() - 1 ? LONG_MIN : A[M + 1];
            if (A[M] > left && A[M] > right) return M;
            if (A[M] < left) R = M - 1;
            else L = M + 1;
        }
        return -1;
    }
};
