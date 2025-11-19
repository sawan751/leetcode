class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(101,0);
        int n = nums.size();
        vector<int> ans;
        for(int x:nums){
            freq[x]++;
        }
        for(int i = 1;i <101;i++){
            freq[i] +=freq[i-1];
        }
        for(int j = 0;j<n;j++){
            int x = nums[j];
            if(x ==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(freq[x-1]);
            }
        }
        return ans;
    }
};