class Solution {
public:
    void merge(vector<int> &nums, int st, int mid, int end) {
        int i = st, j = mid + 1;
        vector<int> ans;
        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                ans.push_back(nums[i]);
                i++;
            } else {
                ans.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            ans.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            ans.push_back(nums[j]);
            j++;
        }
        for(int idx = 0;idx<ans.size();idx++){
            nums[idx+st] = ans[idx];
        }
    }
    void splitmid(vector<int> &nums, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;

            splitmid(nums, st, mid);
            splitmid(nums, mid + 1, end);
            merge(nums,st,mid,end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        return nums;
    }
};