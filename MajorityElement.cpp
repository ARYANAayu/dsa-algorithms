class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, majority = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                majority = nums[i];
                count++;
            } else if (nums[i] == majority) {
                count++;
            } else {
                count--;
            }
        }
        return majority;
    }
};
