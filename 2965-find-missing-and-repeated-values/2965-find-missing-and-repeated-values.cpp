class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> freq;
        int n = grid.size();
        int total = n*n;
        int actsum = 0;
//formua for finding missing value is expectedsum + duplicate -acutalsum
        int missing = 0, duplicate = 0;
        for(int r = 0;r<n;r++){
            for(int c = 0;c<n;c++){
                int val = grid[r][c];
                actsum += val;
                freq[val]++;
                if(freq[val]>1) duplicate = val;
            }
        }
        int expsum = (n*n)*(n*n+1)/2;
        missing = expsum +duplicate -actsum;

        return {duplicate,missing};
    }
};