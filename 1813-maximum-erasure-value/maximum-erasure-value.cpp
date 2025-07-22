class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0, result=0;
        unordered_set<int>seen;
        for(int end=0,start=0;end<nums.size();end++){
            sum+=nums[end];
            while(seen.find(nums[end])!=seen.end()){
                seen.erase(nums[start]);
                sum-=nums[start];
                start++;
            }
            result = max(result,sum);
            seen.insert(nums[end]);
        }
        return result;
        
    }
};