class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
		multiset<int> st;
		for (int num : A) st.insert(num * num);
		return vector<int>(st.begin(), st.end());
    }
};
