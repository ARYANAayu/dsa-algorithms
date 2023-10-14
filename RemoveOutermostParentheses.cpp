class Solution {
public:
    string removeOuterParentheses(string S) {
        string result = "";
        int opened = 0;

        for (char c : S) {
            if (c == '(') {
                if (opened > 0) {
                    result += c;
                }
                opened++;
            } else if (c == ')') {
                opened--;
                if (opened > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};
