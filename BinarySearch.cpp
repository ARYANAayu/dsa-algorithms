class Solution {
public:
    int search(vector<int>& A, int target) {
        int L = 0, R = A.size() - 1;
        while (L <= R) {
            int M = (L + R) / 2;
            if (A[M] == target) return M;
            if (A[M] < target) L = M + 1;
            else R = M - 1;
        }
        return -1;
    }
};
