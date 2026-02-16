class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col,int n){
        //sidhi line row wise
        for(int i = 0;i<n;i++){
            if(board[row][i] == 'Q'){
                return false;
            }
        }
        // flat line column wise
        for(int j = 0;j<n;j++ ){
            if(board[j][col] == 'Q'){
                return false;
            }
        }
        // left diagonal
        for(int i = row-1,j = col-1;i>=0 && j>= 0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //right diagonal

        for(int i = row-1,j = col+1;i>=0 && j>= 0;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;

    }
    void backtrack(int n,vector<string> &board,int row,vector<vector<string>> &ans){
        if(row ==n){
            ans.push_back(board);
            return;
        }

        for(int i = 0;i<n;i++){
            if(isSafe(board,row,i,n)){
                board[row][i] = 'Q';
                backtrack(n,board,row+1,ans);
                board[row][i] = '.';
            }

        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        
        backtrack(n,board,0,ans);
        return ans;
    }
};