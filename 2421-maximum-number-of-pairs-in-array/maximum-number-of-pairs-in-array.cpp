class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it: nums){
            mp[it]++;
        }

        int formed =0;
        int leftover =0;
        for(auto &it : mp){
            int freq = it.second;

            formed+= freq/2;
            leftover+= freq%2;

        }
        return {formed, leftover}; 
    }
};