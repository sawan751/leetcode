class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        map<int, vector<int>> mp;

        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
    
        for(auto &p : mp){
            if(p.first%2 ==0){
                reverse(p.second.begin(),p.second.end());
            }
            for(int sol:p.second){
                ans.push_back(sol);
            }
        }
        return ans;
    }
};