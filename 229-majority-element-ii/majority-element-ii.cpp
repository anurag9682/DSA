class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int n = nums.size();

        for(auto num: nums){
            mp[num]++;
        }
        for(auto i: mp){
                if(i.second>(n/3)){
                    ans.push_back(i.first);
                }
            }
        return ans;
    }
};