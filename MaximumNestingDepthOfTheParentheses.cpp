class Solution {
public:
    int maxDepth(string s) {
    int maxDepth = 0;
    int currentDepth = 0;
    
    for (char c : s) {
        if (c == '(') {
            currentDepth++;
            maxDepth = max(maxDepth, currentDepth);
        } else if (c == ')') {
            currentDepth--;
        }
    }
    
    return maxDepth;
    }
};
