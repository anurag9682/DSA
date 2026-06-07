class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>leftSum(n);
        vector<int>rightSum(n);


        int sum = 0;
        for(int i =1; i<nums.size(); i++){
            sum+= nums[i-1];
            leftSum[i] = sum;
        }
        sum =0;
        for(int i =nums.size()-2; i>=0; i--){
            sum+= nums[i+1];
            rightSum[i] = sum;
        }

        vector<int>ans(n);
        for(int i =0; i<n; i++){
            ans[i] = abs(rightSum[i]-leftSum[i]);
        }
        return ans;
    }
};