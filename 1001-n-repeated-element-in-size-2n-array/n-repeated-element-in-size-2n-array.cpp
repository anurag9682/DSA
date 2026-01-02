class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size()/2;

        for(auto num: nums){
            freq[num]++;

            if(freq[num]==n) return num;
        }
        return -1;
        
    }
};