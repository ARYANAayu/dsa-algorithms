class Solution {
public:
    vector<int> searchRange(vector<int>& A, int target) {
        if (A.empty()) return {-1,-1};
        int N = A.size(), L = 0, R = N - 1;
        while (L <= R) {
            int M = (L + R) / 2;
            if (A[M] < target) L = M + 1;
            else R = M - 1;
        }
        if (L >= N || A[L] != target) return {-1,-1};
        int left = L;
        L = 0, R = N - 1;
        while (L <= R) {
            int M = (L + R) / 2;
            if (A[M] > target) R = M - 1;
            else L = M + 1;
        }
        return {left, R};
    }
};
