class Solution {
public:
    int maximumProduct(vector<int>& A) {
        sort(begin(A), end(A));
        return A.back() * max(A[A.size() - 2] * A[A.size() - 3], A[0] * A[1]);
    }
};
