class Solution {
public:
    int compress(vector<char>& A) {
        int j = 0;
        for (int i = 0; i < A.size(); ++i) {
            char c = A[i];
            int cnt = 1;
            while (i + 1 < A.size() && A[i + 1] == c) ++i, ++cnt;
            A[j++] = c;
            if (cnt == 1) continue;
            auto s = to_string(cnt);
            for (char d : s) A[j++] = d;
        }
        return j;
    }
};
