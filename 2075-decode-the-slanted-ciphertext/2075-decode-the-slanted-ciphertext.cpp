class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int len = encodedText.size();
        int countlen = 0;
        int cols = len/rows;
        vector<vector<char>> mat(rows,vector<char>(cols,' '));
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                mat[i][j] = encodedText[countlen];
                countlen++;
            }
        }

        string ans = "";
        for(int stcol = 0;stcol<cols;stcol++){
            int nrow = 0; int ncol = stcol;
            while(nrow != rows && ncol != cols){
                ans += mat[nrow][ncol];
                nrow++;
                ncol++;
            }
        }
        while(!ans.empty() && ans.back() ==' '){
            ans.pop_back();
        }
        
        return ans;
    }
};