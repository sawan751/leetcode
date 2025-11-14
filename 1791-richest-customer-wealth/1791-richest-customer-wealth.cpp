class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx = 0;

        for(const auto& customer:accounts){
            int sum = 0;
            for(int wealth:customer){
                sum += wealth;
            }
            if(sum>maxx){
                maxx = sum;
            }
        }
        return maxx;
    }
};