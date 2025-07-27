class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // int col = n-1;
        // // int row = 0;
        // int count=0;
        // for(int row=0;row<m;row++){
        //     while(col>=0 && grid[row][col]<0){
        //         count++;
        //         col--;
        //     }
        //     col = n-1;
        // }
        // return count;
        int count =0;
        for(int i=0;i<m;i++){
            int left=0, right =n-1;
            int negIdx = n;

            while(left<=right){
                int mid = left+ (right-left)/2;
                if(grid[i][mid]<0){
                    negIdx = mid;
                    right = mid-1;
                }
                else left =mid+1;
            }
            count+= (n-negIdx);
        }
        return count;
    }
};