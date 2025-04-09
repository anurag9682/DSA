class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int oper = 0;

    while (true) {
        int maxVal = *max_element(nums.begin(), nums.end());
        if (maxVal == k) break;
        if (maxVal < k) return -1;

        for (int& num : nums) {
            if (num == maxVal) num = k;
        }
        oper++;
    }

    for (int num : nums) {
        if (num != k) return -1;
    }

    return oper;
        
    }
};