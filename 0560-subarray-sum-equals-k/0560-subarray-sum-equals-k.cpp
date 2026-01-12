class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> pref(nums.size()+1,0);
        pref[0] = nums[0];
        for(int i = 1; i<nums.size();i++){
            pref[i] = pref[i-1]+nums[i];

        }
        int count = 0;
        int i = 0;
        unordered_map<int,int> mp;
        for(i =0;i<nums.size();i++){
            if (pref[i] == k) count++;

            int val = pref[i]-k;
            if(mp.find(val) != mp.end()){
                count += mp[val];
            }

            if(mp.find(pref[i]) == mp.end()){
                mp[pref[i]] = 0;
            
            }
            mp[pref[i]]++;
        }
        return count;
    }
};