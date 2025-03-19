class Solution {
public:
    int minOperations(vector<int>& nums) {
        int oper = 0;
        int i = 2;
        while(i<nums.size()){
            if(nums[i-2]==0){
                nums[i]= (!nums[i]);
                nums[i-1] = (!nums[i-1]);
                nums[i-2] = (!nums[i-2]);
                oper++;
            }
            i++;
        }
        for(int num: nums){
            if(num==0){
                return -1;
            }
        }
        return oper;
        
    }
};