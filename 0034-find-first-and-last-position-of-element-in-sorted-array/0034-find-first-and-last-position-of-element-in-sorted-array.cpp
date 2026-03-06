class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = -1;
        int end = -1;
        for(int i = 0; i <nums.size();i++){
            if(nums[i] == target){
                if(st == -1){ 
                    st = i;
                    }
                end = i;
            }

        }
        return {st,end};
    }
};