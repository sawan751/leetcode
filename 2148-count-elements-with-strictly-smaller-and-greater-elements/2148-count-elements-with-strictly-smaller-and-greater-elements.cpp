class Solution {
public:
    int countElements(vector<int>& nums) {
        int l = nums.size();
        int m = l;
        auto max = max_element(nums.begin(),nums.end());
        auto min = min_element(nums.begin(),nums.end());
        for(int i =0;i<l;i++){
            if(*max == nums[i] || *min == nums[i]){
                m -=1;
            }
        }
        return m;
    }
};