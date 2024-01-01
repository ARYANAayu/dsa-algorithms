class MyStack {
    queue<int> q;
public:
    MyStack() {}
    void push(int x) {
        q.push(x);
        for (int cnt = q.size() - 1; cnt > 0; --cnt) {
            q.push(q.front());
            q.pop();
        } 
    }
    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }
    int top() {
        return q.front();
    }
    bool empty() {
        return q.empty();
    }
};
