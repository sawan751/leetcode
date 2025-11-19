class Solution {
public:
    int pivotInteger(int n) {
        int r = 0;
        int l = 0;
        for(int i = 0;i<=n;i++){
            r += i;
        }
        for(int j = n;j>0;j--){
            l += j;
            if(l == r){
                return j;
            }
            r -= j;
        }
        return -1;
    }
};