class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first = -1, second = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (first == -1 || nums[i] > nums[first]) {
                second = first;
                first = i;
            } else if (second == -1 || nums[i] > nums[second]) second = i;
        }
        return nums[first] >= nums[second] * 2 ? first : -1;
    }
};
