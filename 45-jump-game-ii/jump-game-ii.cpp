class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
    int jumps = 0;
    int current_reach = 0;
    int max_reach = 0;
    for (int i = 0; i < n - 1; ++i) {
        max_reach = max(max_reach, i + nums[i]);
        if (i == current_reach) {
            jumps++;
            current_reach = max_reach;
        }
    }
    return jumps;
    }
};