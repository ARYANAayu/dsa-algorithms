class Solution {
public:
    vector<int> productExceptSelf(vector<int>& A) {
        vector<int> ans = A;
        int N = A.size(), prod = 1;
        for (int i = N - 2; i >= 0; --i) ans[i] = ans[i + 1] * A[i];
        for (int i = 0; i < N; ++i) {
            ans[i] = prod * (i + 1 < N ? ans[i + 1] : 1);
            prod *= A[i];
        }
        return ans;
    }
};
