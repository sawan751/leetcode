class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> c1,c2,c3;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                c1.push_back(nums[i]);
            }
            else if(nums[i]==1){
                c2.push_back(nums[i]);
            }else{
                c3.push_back(nums[i]);
            }

        }
        c1.insert(c1.end(),c2.begin(),c2.end());
        c1.insert(c1.end(),c3.begin(),c3.end());
        nums = c1;
        
    }
};