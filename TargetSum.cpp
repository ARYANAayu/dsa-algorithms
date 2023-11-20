class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        if (nums.empty()) return 0;
        unordered_map<int, int> sums;
        sums[nums[0]] = 1;
        sums[-nums[0]] += 1;
        for (int i = 1; i < nums.size(); i++) {
            unordered_map<int, int> new_sums;
            for (auto& pair : sums) {
                new_sums[pair.first + nums[i]] += pair.second;
                new_sums[pair.first - nums[i]] += pair.second;
            }
            sums = new_sums;
        }
        return sums[target];
    }
};
