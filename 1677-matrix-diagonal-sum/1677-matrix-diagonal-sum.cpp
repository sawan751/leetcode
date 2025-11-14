class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int mid = -1;
        for(int i = 0;i<n;i++){
            sum += mat[i][i];
        }
        int j = n-1,i = 0;
        while(j>=0){
            sum += mat[i][j];
            i++; j--;
        }
        if(n%2 != 0){
            sum -= mat[n/2][n/2];
        }
        return sum;
        
    }
};