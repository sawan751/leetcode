class Solution {
public:
    bool safe(vector<vector<char>> &board,char c,int i,int j){
        // columns
        for(int k =0;k<9;k++){
            if(k == i) continue;
            if(board[k][j] == c){
                return false;
            }
        }
        //rows
        for(int k =0;k<9;k++){
            if(k == j) continue;
            if(board[i][k] == c){
                return false;
            }
        }
        // shellwise
        int strow = (i/3)*3;
        int stcol = (j/3)*3;
        for(int r = strow;r<strow+3;r++){
            for(int c1 = stcol;c1<stcol+3;c1++){
                if(r == i && c1 == j) continue;
                if(board[r][c1]== c){ 
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();

        for(int i= 0;i<9;i++){
            for(int j =0;j<9;j++){
                if(board[i][j] =='.'){
                    continue;
                }else{
                    char c = board[i][j];
                    if(!safe(board,c,i,j)){
                        return false;
                    }

                }
            }
        }
        return true;
        
    }
};