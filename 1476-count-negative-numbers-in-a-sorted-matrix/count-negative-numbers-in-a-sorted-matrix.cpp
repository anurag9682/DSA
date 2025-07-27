class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int col = n-1;
        // int row = 0;
        int count=0;
        for(int row=0;row<m;row++){
            while(col>=0 && grid[row][col]<0){
                count++;
                col--;
            }
            col = n-1;
        }
        return count;


        
    }
};