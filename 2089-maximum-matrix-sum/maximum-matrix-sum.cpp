class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum =0;
        int minVal = INT_MAX;
        int negCount =0;

        for(auto row : matrix){
            for(auto val :row){

                sum+= abs(val);
                minVal = min(minVal, abs(val));
                if(val<0) negCount++;

            }
        }
        if(negCount%2 ==1){ // if negative counts are odd

         sum -= 2LL *minVal; // minus int from long use 2LL
        }
        return sum; 
    }
};