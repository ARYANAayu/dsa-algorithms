class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int j = 0;
        for (int n : A) {
            if (j - 1 < 0 || A[j - 1] != n) A[j++] = n;
        }
        return j;
    }
};
