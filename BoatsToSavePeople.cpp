class Solution {
public:
    int numRescueBoats(vector<int>& A, int limit) {
        sort(begin(A), end(A));
        int i = 0, j = A.size() - 1, ans = 0;
        while (i <= j) {
            ++ans;
            if (A[i] + A[j] <= limit) ++i;
            --j;
        }
        return ans;
    }
};
