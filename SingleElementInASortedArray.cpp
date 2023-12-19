class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int L = 0, R = A.size() - 1;
        while (L < R) {
            int M = (L + R) / 2;
            if ((M % 2 == 0 && A[M] == A[M + 1])
               || (M % 2 == 1 && A[M] == A[M - 1])) L = M + 1;
                else R = M;
        }
        return A[L];
    }
};
