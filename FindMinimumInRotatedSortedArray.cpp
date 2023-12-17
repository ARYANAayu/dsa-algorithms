class Solution {
public:
    int findMin(vector<int>& A) {
        int L = 0, R = A.size() - 1;
        while (L < R) {
            int M = (L + R) / 2;
            if (A[M] > A[R]) L = M + 1;
            else R = M;
        }
        return A[L];
    }
};
