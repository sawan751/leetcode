class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> freq;
        int n = grid.size();
        int total = n*n;
        int missing = 0, duplicate = 0;
        for(int r = 0;r<n;r++){
            for(int c = 0;c<n;c++){
                int val = grid[r][c];
                freq[val]++;
                if(freq[val]>1) duplicate = val;
            }
        } 
        for(int i = 1;i<=total;i++){
            if(freq.find(i) == freq.end()){
                missing = i;
            }
        }
        return {duplicate,missing};
    }
};