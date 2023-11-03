class Solution {
public:
    string addStrings(string a, string b) {
        string sum;
        int carry = 0;
        auto i = a.rbegin(), j = b.rbegin();
        while (i != a.rend() || j != b.rend() || carry) {
            if (i != a.rend()) carry += *i++ - '0';
            if (j != b.rend()) carry += *j++ - '0';
            sum += (carry % 10) + '0';
            carry /= 10;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
