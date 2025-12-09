class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2 == 0 && nums[i]%3 ==0){
                s += nums[i];
                count +=1;
            }
        }
        if (count==0){
            return 0;
        }
        int ans = s/count;
        return ans;
    }
};