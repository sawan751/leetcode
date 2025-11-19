class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1,0);

        for(int x:nums){
            if(x>0 && x<=n){
                freq[x]++;
            }
        }
        for(int i  = 1;i<n+1;i++){
            if(freq[i]==0){
                return i;
            }
        }
        return -1;

    }
};