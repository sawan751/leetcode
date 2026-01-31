class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int tar = int(target);
        int n = letters.size();
        if(int(letters[n-1])<=tar){
            return letters[0];
        }
        for(int i = 0;i<n;i++){
            if(int(letters[i])>tar){
                return letters[i];
            }
        }
        return letters[0];
    }
};