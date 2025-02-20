class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(); //row
        int n = mat[0].size(); //col

        vector<int>ans;
        int top = 0, bottom = m-1;
        int left =0;
        int right = n-1;

        while(top<=bottom && left<=right){
            int i = top;
            for(int j= left; j<=right; j++){
                ans.push_back(mat[i][j]);
            }
            top++;
            int j=right;

            for(int i = top; i<=bottom; i++){
                ans.push_back(mat[i][j]);
            }
            right--; i = bottom;
            if(top<=bottom){
                for(int j = right; j>=left; j--){
                    ans.push_back(mat[i][j]);
                }
            }
            bottom--; j = left;
            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    ans.push_back(mat[i][j]);
                }
            }
            left++;
        }
    
        return ans;
    }
};