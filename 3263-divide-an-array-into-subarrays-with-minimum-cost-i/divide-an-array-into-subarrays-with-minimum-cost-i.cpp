class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int minSecond = nums[1];
int best = INT_MAX;

for (int j = 2; j < nums.size(); j++) {
    best = min(best, minSecond + nums[j]);
    minSecond = min(minSecond, nums[j]);
}

return nums[0] + best;
    }
};