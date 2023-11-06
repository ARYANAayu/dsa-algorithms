class Solution {
public:
    int maximumProduct(vector<int>& A) {
        sort(begin(A), end(A));
        int n = A.size();
        int product1 = A[n - 1] * A[n - 2] * A[n - 3]; 
        int product2 = A[0] * A[1] * A[n - 1];        
        return max(product1, product2);
    }
};