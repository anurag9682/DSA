class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curSum = 0;
        int totalSum =0;
        for(int i=0;i<nums.size();i++){
            totalSum+= nums[i];
            curSum+= nums[i];
            maxSum = max(curSum, maxSum);
            if(curSum<0){
                curSum=0;
            }
            
        }

        int minSum = INT_MAX;
        curSum=0;
        for(int i=0; i<nums.size(); i++){
            curSum+= nums[i];
            
            minSum = min(curSum,minSum);
            if(curSum>0){
                curSum=0;
            }
        }
        if(totalSum== minSum)
            return maxSum;
        else
        return max(maxSum,(totalSum-minSum));

        
    }
};