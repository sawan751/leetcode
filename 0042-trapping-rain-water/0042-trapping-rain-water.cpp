class Solution {
public:
    int trap(vector<int>& h) {
       int n = h.size();
       vector<int> right(n);
       vector<int> left;
       int m = -1;
       for(int i = 0;i<n;i++){
        m = max(m,h[i]);
        left.push_back(m);
       }
       m = -1;
       for(int i = n-1;i>=0;i--){
        m = max(m,h[i]);
        right[i] = m;
       }
       int ans = 0;
       for(int i = 0;i<n;i++){
        ans += (min(left[i],right[i])-h[i]);
       }

       return ans;
    }
};