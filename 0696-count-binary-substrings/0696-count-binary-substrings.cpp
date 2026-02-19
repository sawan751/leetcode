class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> group =  {1};
        for(int i = 1;i<s.size();i++){
            if(s[i-1] != s[i]){
                group.push_back(1);
            }else{
                group.back() += 1;
            }
        }

        int ans = 0;
        for(int i =1;i<group.size();i++){
            ans += min(group[i-1],group[i]);
        }
        return ans;
    }
};