class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int strow = 0, stcol = 0;
        int erow = n-1, ecol = n-1;
        vector<vector<int>> mat(n,vector<int>(n,0));
        int count = 1;
        while(strow<=erow && stcol<= ecol){
            //top 
            for(int i = stcol;i<=ecol;i++){
                mat[strow][i] = count++;
            }

            //right
            for(int i = strow+1;i<=erow;i++){
                mat[i][ecol] = count++;
            }
            
            //bottom 
            for(int i = ecol-1;i>=stcol;i--){
                if(strow == erow){
                    break;
                }
                mat[erow][i] = count++;
            }

            //left
            for(int i = erow-1;i>strow;i--){
                if(stcol == ecol){
                    break;
                }
                mat[i][stcol] = count++;
            }

            strow++;stcol++;
            ecol--;erow--;

        }
        return mat;
    }
};