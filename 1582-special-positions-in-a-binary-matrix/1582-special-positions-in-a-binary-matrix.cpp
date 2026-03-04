class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> r(row,0);
        vector<int> c(col,0);

        for(int i = 0;i<row;i++){
            for(int j = 0; j<col;j++){
                if(mat[i][j] == 1){
                r[i]++;
                c[j]++;}
            }
        }
        /*
        for(int i = 0;i<row;i++){
            cout<<"row "<<r[i];
        }
        cout<<endl;
        for(int i = 0;i<col;i++){
            cout<<"col "<<c[i];
        }*/
        int count = 0;
        for(int i = 0;i<row;i++){
            for(int j = 0; j<col;j++){
                if(mat[i][j]==1 && r[i]==1 && c[j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};