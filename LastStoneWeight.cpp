class Solution {
public:
    int lastStoneWeight(vector<int>& A) {
        priority_queue<int> pq(begin(A), end(A));
        while (pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            int r = abs(a - b);
            if (r) pq.push(r);
        }
        return pq.size() ? pq.top() : 0;
    }
};
