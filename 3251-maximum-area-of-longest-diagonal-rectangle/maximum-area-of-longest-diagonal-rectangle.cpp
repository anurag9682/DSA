class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans =0;
        long long diagonalLength =0;
        int n = dimensions.size();

        for(int i =0;i<n;i++ ){
            int num1 = dimensions[i][0];
            int num2 = dimensions[i][1];
            long long curDiagonal = 1LL*(num1*num1)+1LL*(num2*num2);

            if(curDiagonal>diagonalLength){
                diagonalLength = curDiagonal;
                ans = num1*num2;
            }
            else if (curDiagonal == diagonalLength) {
                ans = max(ans, num1 * num2);
            }
        }
        return ans;
        
    }
};