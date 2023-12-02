class Solution {
public:
    int numWaterBottles(int bottle, int exchange) {
        int ans = 0, empty = 0;
        while (bottle) {
            ans += bottle;
            empty += bottle;
            int ex = empty / exchange;
            empty -= ex * exchange;
            bottle = ex;
        }
        return ans;
    }
};
