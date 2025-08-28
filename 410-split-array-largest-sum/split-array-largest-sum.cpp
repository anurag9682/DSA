class Solution {
public:
    bool canBeSplit(vector<int>& nums, int k,int mid){
        int sum =0;
        int cnt =1;
        for(int num:nums){
            if(sum+num>mid){
                cnt++;
                sum = num;
                if(cnt>k) return false;
            }else{
                sum+=num;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for(int num:nums){
            low = max(low,num);
            high+=num;
        }
        while(low<high){
            int mid = low+(high-low)/2;
            if(canBeSplit(nums,k,mid)){
                high = mid;
            }else{
                low = mid+1;
            }
            
        }
        return low;
        
    }
};