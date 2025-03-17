class Solution {
public:
    bool divideArray(vector<int>& nums) {
    // unordered_map<int, int>mp;

    // for(auto num : nums){
    //     mp[num]++;
    // }

    // for(auto num : mp){
    //     if((num.second)%2!=0) {
    //         return false;
    //     }
    // }
    //     return true;
        int bit1 = 0,bit2=0;

        for(int i=0;i<nums.size();i++) {
            bit1=bit1^nums[i];
            
            bit2= (nums[i]+1)^bit2;
        }

        return bit1==0 && bit2==0;
    }
};