class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx = 0;
        
        for(const auto& customer:accounts){
            int sum = 0;
            for(int wealth:customer){
                sum += wealth;
            }
            maxx = max(sum,maxx);
        }
        return maxx;
    }
};