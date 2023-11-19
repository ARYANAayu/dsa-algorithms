#include <stack>

class MyQueue {
private:
    std::stack<int> stackMain;
    std::stack<int> stackAux;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!stackMain.empty()) {
            stackAux.push(stackMain.top());
            stackMain.pop();
        }
        stackMain.push(x);
        while (!stackAux.empty()) {
            stackMain.push(stackAux.top());
            stackAux.pop();
        }
    }
    
    int pop() {
        int frontElement = stackMain.top();
        stackMain.pop();
        return frontElement;
    }
    
    int peek() {
        return stackMain.top();
    }
    
    bool empty() {
        return stackMain.empty();
    }
};
