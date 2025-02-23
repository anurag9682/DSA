class Solution {
public:
    bool isSafe(vector<string>board,int row, int col, int n){
        // horizotanl
        for(int i =0; i<n; i++){
            if(board[row][i]=='Q') return false;
        }
        //vertical
        for(int j=0; j<n; j++){
            if(board[j][col]=='Q') return false;
        }
        //left diagonal
        for(int i=row, j = col; i>=0 && j>=0; j--, i--){
            if(board[i][j]=='Q') return false;
        }
        // right diagonal
        for(int i=row,  j=col; i>=0 && j<n; i--, j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
        if(row==n){ // base case
            ans.push_back(board);
            return;
        }
        for(int j=0; j<n; j++){
            if(isSafe(board, row, j,n)){
                board[row][j]= 'Q';
                nQueens(board, row+1, n, ans);    // for next row
                board[row][j]= '.'; // backtracking
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n, string(n,'.'));
        vector<vector<string>>ans;

        nQueens(board,0,n,ans);
        return ans;
    }
};