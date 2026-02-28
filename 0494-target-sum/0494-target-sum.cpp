class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalsum = 0;
        for(int n:nums){
            totalsum+= n;
        }
        if(totalsum<abs(target)) return 0;
        if((target+totalsum)%2 !=0){
            return 0;
        }
        int subsetsum = (target+totalsum)/2;
        vector<int> dp(subsetsum+1,0);
        dp[0] = 1;

        for(int num:nums){
            for(int j= subsetsum;j>=num;j--){
                dp[j] += dp[j-num];

            }
        }
        return dp[subsetsum];
    }
};