class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate =0;
        for(int i = 1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                duplicate += nums[i];
            }
        }
        return {duplicate,duplicate+1};
    }
};