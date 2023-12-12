class Solution {
public:
    int maxAscendingSum(vector<int>& A) {
        int ans = A[0], sum = A[0];
        for (int i = 1; i < A.size(); ++i) {
            if (A[i] > A[i - 1]) {
                sum += A[i];
            } else {
                sum = A[i];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
