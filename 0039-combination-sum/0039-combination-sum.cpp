class Solution {
public:
    void combin(vector<int>& candidates,vector<int> &comb, int i, int target,
              vector<vector<int>> &ans) {
        if(target==0){
            ans.push_back(comb);
            return;
        }
        
        if (i >= candidates.size() || target < 0) {
            return;
        }
        comb.push_back(candidates[i]);
        combin(candidates,comb,i,target-candidates[i],ans);
        
        comb.pop_back();
        combin(candidates,comb,i+1,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        vector<vector<int>> ans;
        combin(candidates,comb,0,target,ans);
        return ans;
    }
};