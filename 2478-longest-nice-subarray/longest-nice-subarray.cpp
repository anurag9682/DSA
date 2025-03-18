class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
         int ans = 0, bit = 0; 
        int left = 0; 

        for (int right = 0; right < nums.size(); ++right) {
            while ((bit & nums[right]) != 0) { 
                bit ^= nums[left]; // Remove nums[left] from bitmask
                left++; 
            }
            
            bit |= nums[right]; // Add nums[right] to bitmask
            ans = max(ans, right - left + 1); 
        }

        return ans; 
    }
};