class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            for(int j =0;j<nums.size();j++){
                if(abs(i-j)<=k && nums[j]==key){
                    ans.push_back(i);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};