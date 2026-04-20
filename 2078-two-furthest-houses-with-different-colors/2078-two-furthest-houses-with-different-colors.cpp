class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j = colors.size()-1;
        int best = 1;
        while(i<colors.size()-1){
            if(i ==j){
                j = colors.size()-1;
                i++;
                continue;
            }
            if(colors[i] != colors[j]){
                best = max(best,abs(i-j));
            }
            j--;
            
        }
        return best;
    }
};