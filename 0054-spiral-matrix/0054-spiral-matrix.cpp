class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r  = matrix.size();
        int c = matrix[0].size();
        int strow = 0, stcol = 0, erow= r-1,ecol = c-1;
        vector<int> ans;
        while(strow<=erow && stcol <= ecol){
            //top
            for(int i = stcol;i<=ecol;i++){
                ans.push_back(matrix[stcol][i]);
            }

            // right
            for(int j = strow+1;j<= erow;j++){
                ans.push_back(matrix[j][ecol]);
            }

            //down
            for(int k = ecol-1;k>=stcol;k--){
                if(strow == erow){
                    break;
                }
                ans.push_back(matrix[erow][k]);
            }
            
            //left
            for(int l = erow-1;l>=strow+1;l--){
                if(stcol == ecol){
                    break;
                }
                ans.push_back(matrix[l][stcol]);
            }
            strow++;erow--;
            stcol++;ecol--;
        }
        return ans;

    }
};