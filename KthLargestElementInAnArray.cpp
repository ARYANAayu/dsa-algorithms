class Solution {
    void siftDown(vector<int> &A, int end, int index) {
        if (index < 0 || index >= end) return;
        int child = 2 * index + 1;
        while (child < end) {
            if (child + 1 < end && A[child + 1] > A[child]) ++child;
            if (A[index] > A[child]) break;
            swap(A[index], A[child]);
            index = child;
            child = 2 * index + 1;
        }
    }
    void heapify(vector<int> &A) {
        for (int i = A.size() / 2 - 1; i >= 0; --i) siftDown(A, A.size(), i);
    }
public:
    int findKthLargest(vector<int>& A, int k) {
        heapify(A);
        int N = A.size();
        for (int i = 1; i < k; ++i) {
            swap(A[0], A[N - 1]);
            --N;
            siftDown(A, N, 0);
        }
        return A[0];
    }
};
