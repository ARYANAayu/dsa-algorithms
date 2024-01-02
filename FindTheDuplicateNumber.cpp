class Solution {
public:
    int findDuplicate(vector<int>& A) {
        int L = 1, R = A.size() - 1;
        while (L < R) {
            int M = (L + R) / 2, cnt = 0;
            for (int n : A) cnt += n <= M;
            if (cnt <= M) L = M + 1;
            else R = M;
        }
        return L;
    }
};
