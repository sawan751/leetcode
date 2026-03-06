class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()<2) return true;
        int c = 0;
        if(s[0] =='1') c = 1;
        for(int i =1;i<s.size();i++){
            if(s[i-1] =='1' && s[i] == '1'){
                return true;
            }
            if(s[i] == '1') c++;
        }
        if(c ==1){
            return true;
        }
        return false;
    }
};