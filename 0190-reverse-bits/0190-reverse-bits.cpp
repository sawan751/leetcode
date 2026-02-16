class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        int i = 32;
        while(n > 0){
            ans = (ans << 1) + (n%2);
            n /= 2;
            i--;
        }
        while(i > 0){
            ans = ans<<1;
            i--;
        }
        return ans;
    }
};