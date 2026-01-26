class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       int n = arr.size();
       sort(arr.begin(),arr.end());
       vector<vector<int>> ans;
       // finding minimum value here 
       int diff = arr[1] -arr[0];
       for(int i = 1;i<n;i++){
        int small = arr[i]-arr[i-1];
        if(small<diff){
            diff = small;
        }
       } 
       // storing minimum pairs
       for(int i = 1;i<n;i++){
        if(arr[i]-arr[i-1]==diff){
            ans.push_back({arr[i-1],arr[i]});
        }
       } 
       return ans;
    }
};