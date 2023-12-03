class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
		int n = A.size(), i = n - 1, carry = 0;
		while (K > 0 || carry > 0) {
			int num = K % 10 + carry;
			if (i >= 0) num += A[i];
			carry = num / 10;
			num %= 10;
			if (i >= 0) {
				A[i] = num;
				--i;
			} else {
				A.insert(A.begin(), num);
			}
			K /= 10;
		}
		return A;
    }
};
