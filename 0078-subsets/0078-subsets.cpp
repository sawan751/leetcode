class Solution {
public:
    void allsubset(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &allsubsetss) {
        if(i == nums.size()){
            allsubsetss.push_back(ans); // push current subset
            return;
        }
        // Include nums[i]
        ans.push_back(nums[i]);
        allsubset(nums, ans, i+1, allsubsetss);

        // Exclude nums[i]
        ans.pop_back();
        allsubset(nums, ans, i+1, allsubsetss);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsetss;
        vector<int> ans;
        allsubset(nums, ans, 0, allsubsetss);
        return allsubsetss;
    }
};
