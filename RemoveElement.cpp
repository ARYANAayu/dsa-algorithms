class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int i = -1, j = 0;
        for (j = 0; j < len; j ++) {
            if (nums[j] != val) {
                i ++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
