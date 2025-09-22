class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int freq = 0;
        int maxFreq = INT_MIN;

        for(auto it: mp){
            int curFreq = it.second;

            if(curFreq > maxFreq){
                freq = curFreq;
                maxFreq = curFreq;
            }
            else if(curFreq == maxFreq){
                freq+= curFreq;
            }
        }
        return freq;
        
    }
};