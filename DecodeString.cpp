class Solution {
    string decodeString(string &s, int &i) {
        int N = s.size();
        string ans;
        while (i < N && s[i] != ']') {
            if (isdigit(s[i])) {
                int repeat = 0;
                while (i < N && isdigit(s[i])) repeat = repeat * 10 + (s[i++] - '0');
                ++i; // skip [
                auto t = decodeString(s, i);
                ++i; // skip ]
                while (repeat--) ans += t;
            } else {
                ans += s[i++];
            }
        }
        return ans;
    }
public:
    string decodeString(string s) {
        int i = 0;
        return decodeString(s, i);
    }
};
