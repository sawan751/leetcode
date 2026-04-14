class Solution {
public:
    void combin(vector<int>& candidates,vector<int> &comb, int i, int target,vector<vector<int>> &ans) {
        if(target==0){
            ans.push_back(comb);
            return;
        }
        if(target < 0){
            return;
        }
        for (int j = i; j < candidates.size(); j++) {

            // skip duplicates
            if (j > i && candidates[j] == candidates[j - 1]) continue;

            // choose
            comb.push_back(candidates[j]);

            // move forward (i+1 because each element used once)
            combin(candidates, comb, j + 1, target - candidates[j], ans);

            // backtrack
            comb.pop_back();
        }  
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> comb;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        combin(candidates,comb,0,target,ans);
        return ans;
    }
};