class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int indx = 0;
        for(int i = 0;i<n;i++){
            int ch = chars[i];
            int count = 0;
            while(i<n && chars[i]== ch){
                count++; i++;
            }
            if(count ==1){chars[indx++] =ch;
            }else{
                chars[indx++] = ch;
                string str = to_string(count);
                for(char c:str){
                    chars[indx++] = c; 
                }
            }
            i--;
        }
        chars.resize(indx);
        return indx;
    }
};