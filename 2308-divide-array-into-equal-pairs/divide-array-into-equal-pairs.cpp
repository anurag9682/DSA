class Solution {
public:
    bool divideArray(vector<int>& nums) {
    unordered_map<int, int>mp;

    for(auto num : nums){
        mp[num]++;
    }

    for(auto num : mp){
        if((num.second)%2!=0) {
            return false;
        }
    }
        return true;
    }
};