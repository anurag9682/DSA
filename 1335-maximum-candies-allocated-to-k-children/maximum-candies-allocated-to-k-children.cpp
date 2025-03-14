class Solution {
public:
    bool canAllocate(vector<int>&candies, long long mid, long long k){
        long long count =0;
        for(auto c: candies) count+= c/mid;
        return count>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long low = 1;
        long long high = *max_element(candies.begin(), candies.end());
        long long result =0;

        while(low<=high){
            long long mid = low+(high-low)/2;
            if(canAllocate(candies, mid,k )){
                result= mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return result;
        
    }
};