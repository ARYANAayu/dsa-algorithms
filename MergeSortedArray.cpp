class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        for (int i = m - 1, j = n - 1, k = m + n - 1; k >= 0; --k) {
            if (j < 0 || (i >= 0 && A[i] > B[j])) A[k] = A[i--];
            else A[k] = B[j--];
        }
    }
};
