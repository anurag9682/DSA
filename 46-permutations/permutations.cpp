class Solution {
public:
    void get(vector<vector<int>>&ans, int idx, vector<int>&nums){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            get(ans,idx+1,nums);
            swap(nums[idx],nums[i]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        get(ans,0,nums);
        return ans;

        
    }
};