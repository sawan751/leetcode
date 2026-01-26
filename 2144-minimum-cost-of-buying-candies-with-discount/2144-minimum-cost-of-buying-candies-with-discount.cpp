class Solution {
public:
    int minimumCost(vector<int>& cost) {
       int n = size(cost);
       sort(cost.begin(),cost.end());
       int count = 0, r = 0;
       for(int i = n-1;i>=0;i--){
        if (r ==2){ 
            r = 0;
            continue;
        }
        count += cost[i];
        r++;

       }
       return count;

    }
};