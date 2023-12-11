class Solution {
public:
    bool increasingTriplet(vector<int>& A) {
        int first = INT_MAX, second = INT_MAX;
        for (int n : A) {
            if (n <= first) first = n;
            else if (n <= second) second = n;
            else return true;
        }
        return false;
    }
};
