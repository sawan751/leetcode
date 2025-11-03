class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0, h = nums.size()-1,l= 0;
        while(mid<=h){
            if(nums[mid]==0){
                swap(nums[l],nums[mid]);
                mid++;
                l++;
            }else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[h],nums[mid]);
                h--;
            }
        }
        
    }
};