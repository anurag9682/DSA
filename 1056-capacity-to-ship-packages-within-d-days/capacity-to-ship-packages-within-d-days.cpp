class Solution {
public:
    bool canBeLoad(vector<int>& weights, int days, int capacity){
        int d =0;
        int sumOfweight =0;
        for(int weight:weights){
            sumOfweight+=weight;
            if(sumOfweight>capacity){
                sumOfweight = weight;
                d++;
            }
        }
        return d>=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high =0;
        for(int weight: weights){
            low = max(low,weight);
            high+=weight;
        }
        while(low<=high){
            int capacity = low+(high-low)/2;

            if(canBeLoad(weights,days,capacity)){
                low = capacity+1;
            }
            else{
                high = capacity-1;
            }  
        }
        return low;
        

        
    }
};