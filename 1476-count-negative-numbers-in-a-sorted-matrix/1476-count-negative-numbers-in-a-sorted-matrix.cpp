class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        int i = 0;
        int count = 0;
        while(i<m){
            for(int j = 0;j<n;j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
            i++;
        }
        return count;
    }
};