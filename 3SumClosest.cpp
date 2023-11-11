class Solution {
public:
    int threeSumClosest(vector<int>& A, int target) {
        sort(begin(A), end(A));
        int N = A.size(), ans = A[0] + A[1] + A[2];
        for (int i = 0; i < N - 2; ++i) {
            int L = i + 1, R = N - 1;
            while (L < R) {
                long sum = A[L] + A[R] + A[i];
                if (abs(sum - target) < abs(ans - target)) ans = sum;
                if (sum == target) return target;
                if (sum > target) --R;
                else ++L;
            }
        }
        return ans;
    }
};
