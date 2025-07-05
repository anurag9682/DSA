class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;

        for(int num: nums){
            mp[num]++;
        }
        for(auto num :mp){
            if(num.second==1){
                if(mp.find(num.first-1)==mp.end() &&mp.find(num.first+1)==mp.end()){
                    ans.push_back(num.first);
                }
            }
        }
       return ans; 
    }
};