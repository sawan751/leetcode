class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i = 0;
        int j = nums.size();
        int ans = INT_MAX;
        for(i = 0;i<j;i++){
            if(nums[i] == target){
                ans = min(ans,abs(i-start));
            }
        }
        return ans;
    }

};