class Solution {
public:
    vector<vector<int>> subsets(vector<int>& A) {
        vector<vector<int>> ans;
        vector<int> tmp;
        function<void(int)> dfs = [&](int i) {
            if (i == A.size()) {
                ans.push_back(tmp);
                return;
            }
            tmp.push_back(A[i]);
            dfs(i + 1); // Pick A[i]
            tmp.pop_back();
            dfs(i + 1); // Skip A[i]
        };
        dfs(0);
        return ans;
    }
};
